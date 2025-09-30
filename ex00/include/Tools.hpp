/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tools.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:16:18 by bszikora          #+#    #+#             */
/*   Updated: 2025/09/19 18:12:34 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_HPP
#define TOOLS_HPP

#include <iostream>
#include <climits>
#include <limits>
#include <cfloat>
#include <string>
#include "ScalarConverter.hpp"

enum ScalarType
{
    TYPE_CHAR   = 0,
    TYPE_INT    = 1,
    TYPE_FLOAT  = 2,
    TYPE_DOUBLE = 3,

    TYPE_INVALID = -1
};

typedef struct Values
{
	int 			integernum;
	float			floatingnum;
	double			doublenum;
	char			charchar;

	std::string		input;

	int				type;
	int				special;

	bool			char_possible;
	bool			int_possible;
	bool			float_possible;
	bool			double_possible;
} s_values;

int	parse(int argc, char **argv);
int special_case(int special);
int handle_cases(s_values *info);
int invalid_case(s_values *info);
int	check_type(s_values *info);

#endif