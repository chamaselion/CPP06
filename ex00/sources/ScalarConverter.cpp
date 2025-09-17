/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:54:38 by bszikora          #+#    #+#             */
/*   Updated: 2025/09/17 16:37:43 by bszikora         ###   ########.fr       */
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
	if(s.length() == 1)
	{
		
	}
 }