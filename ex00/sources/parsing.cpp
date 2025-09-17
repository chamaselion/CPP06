/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 12:55:03 by bszikora          #+#    #+#             */
/*   Updated: 2025/09/17 13:33:53 by bszikora         ###   ########.fr       */
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

// int	parse(int argc, char **argv)
// {
// 	char *res;

// 	if (argc > 2 || argc < 2)
// 		return (1);
// 	res = argv[1];
// }