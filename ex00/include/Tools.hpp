/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tools.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:16:18 by bszikora          #+#    #+#             */
/*   Updated: 2025/09/17 15:03:11 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_HPP
#define TOOLS_HPP

#include <iostream>
#include <climits>
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
	std::string 	integernum;
	std::string		floatingnum;
	std::string		doublenum;
	std::string		charchar;
} s_values;

int	parse(int argc, char **argv);


#endif