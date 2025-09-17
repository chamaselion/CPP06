/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 12:55:03 by bszikora          #+#    #+#             */
/*   Updated: 2025/09/17 16:36:45 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tools.hpp"

static bool	is_lchar(const std::string &s)
{
	return (s.size() == 3 && s.front() == '\'' && s.back() == '\''
		&& std::isprint(static_cast<unsigned char>(s[1])));
}

static bool	is_schar(const std::string &s)
{
	return (s.size() == 1 && std::isprint(static_cast<unsigned char>(s[0]))
		&& !std::isdigit(static_cast<unsigned char>(s[0])));
}

static bool	is_int(const std::string &s)
{
	size_t		i;
	long long	v;

	if (s.empty())
		return (false);
	i = 0;
	if (s[i] == '+' || s[i] == '-')
	{
		if (++i == s.size())
			return (false);
	}
	for (; i < s.size(); ++i)
		if (!std::isdigit(static_cast<unsigned char>(s[i])))
			return (false);
	try
	{
		v = std::stoll(s);
		return (v >= INT_MIN && v <= INT_MAX);
	}
	catch (...)
	{
		return (false);
	}
}

static bool	is_numeric(const std::string &s, bool allowDot, bool &sawDot, bool &sawDigit)
{
	char	c;

	for (size_t i = 0; i < s.size(); ++i)
	{
		c = s[i];
		if (c == '.')
		{
			if (!allowDot || sawDot)
				return (false);
			sawDot = true;
		}
		else if (std::isdigit(static_cast<unsigned char>(c)))
			sawDigit = true;
		else
			return (false);
	}
	return (true);
}

static bool	is_sfloat(const std::string &s, int *special)
{
	*special = (s == "nanf") ? 4 : (s == "-inff") ? 3 : (s == "+inff") ? 2 : *special;
	return (s == "nanf" || s == "+inff" || s == "-inff");
}

static int	is_float(const std::string &s, int *special) // 2 = +inff, 3 = -inff, 4 = nanf
{
	size_t	i;
	bool	sawDot;
	bool	sawDigit;


	if (is_sfloat(s, special))
		return (*special);
	if (s.size() < 2 || s.back() != 'f')
		return (false);
	std::string core = s.substr(0, s.size() - 1);
	if (core.empty())
		return (false);
	i = 0;
	if (core[i] == '+' || core[i] == '-')
		if (++i == core.size())
			return (false);
	sawDot = false;
	sawDigit = false;
	if (!is_numeric(core.substr(i), true, sawDot, sawDigit))
		return false;
	return sawDot && sawDigit;
}

static bool	is_sdouble(const std::string &s, int *special)
{
	*special = (s == "nan") ? 4 : (s == "-inf") ? 3 : (s == "+inf") ? 2 : *special;
	return (s == "nan" || s == "+inf" || s == "-inf");
}

static int	is_double(const std::string &s, int *special) // 2 = +inf, 3 = -inf, 4 = nan
{
	size_t	i;
	bool	sawDot;
	bool	sawDigit;

	if (is_sdouble(s, special))
		return *special;
	if (s.empty())
		return false;
	i = 0;
	if (s[i] == '+' || s[i] == '-')
	{
		if (++i == s.size())
			return false;
	}
	sawDot = false;
	sawDigit = false;
	if (!is_numeric(s.substr(i), true, sawDot, sawDigit))
		return false;
	return sawDot && sawDigit;
}

int	check_type(std::string input, int *special)
{
	int type = TYPE_INVALID;
	type = (is_lchar(input) || is_schar(input)) ? TYPE_CHAR : (is_int(input)) ? TYPE_INT : (is_float(input, special)) ? TYPE_FLOAT : (is_double(input, special)) ? TYPE_DOUBLE : type;
    return type;
}

int invalid_case(int type)
{
	if (type < 0)
		return (std::cout << "This input is invalid for such conversions\n", 1);
	return 0;
}

int	parse(int argc, char **argv, s_values *info)
{
	info->input = argv[1];
	info->special = 0;
	info->type = TYPE_INVALID;

	if (argc > 2 || argc < 2)
		return 1;
	info->type = check_type(info->input, &info->special);
	if (invalid_case(info->type))
		return 1;
	if (special_case(info->special))
		return 1;
	return 0;
}