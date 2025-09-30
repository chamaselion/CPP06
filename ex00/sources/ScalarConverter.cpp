/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:54:38 by bszikora          #+#    #+#             */
/*   Updated: 2025/09/19 18:12:22 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ScalarConverter.hpp"
 
 ScalarConverter::ScalarConverter() { }
 
 ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void) other;}
 
 ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
 {
	if (this != &other)
	{
	}
	return *this;
 }
 
 ScalarConverter::~ScalarConverter() { }

void	ScalarConverter::convert(const std::string &s)
 {
	s_values	info;
	info.input = s;
	info.special = 0;
	info.type = TYPE_INVALID;
	info.char_possible = true;
    info.int_possible = true;
    info.float_possible = true;
    info.double_possible = true;
	
	info.type = check_type(&info);
	if (invalid_case(&info))
		return ;
	if (special_case(info.special))
		return ;
	handle_cases(&info);
 }