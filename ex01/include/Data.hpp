/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:13:37 by bszikora          #+#    #+#             */
/*   Updated: 2025/10/14 13:14:25 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <iomanip>
#include <iostream>

struct Data
{
	int				id;
	std::string		name;
	std::string		value;

	Data();
	Data(int id, const std::string& name, std::string value);
	Data(const Data& other);
	Data& operator=(const Data& other);
	~Data();

	void print() const;
};

#endif