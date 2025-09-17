/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:54:38 by bszikora          #+#    #+#             */
/*   Updated: 2025/09/15 13:35:27 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ScalarConverter.hpp"
 
 ScalarConverter::ScalarConverter() { }
 
 ScalarConverter::ScalarConverter(const ScalarConverter& other) { }
 
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
	char	char_result;
	int		int_result;
	float	float_result;
	double	double_result;

	if(s.length() == 1)
	{
		
	}
 }