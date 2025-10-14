/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:14:12 by bszikora          #+#    #+#             */
/*   Updated: 2025/10/14 13:14:53 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : id(0), name(""), value("imepmty") {}

Data::Data(int id, const std::string& name, std::string value) : id(id), name(name), value(value) {}

Data::Data(const Data& other) : id(other.id), name(other.name), value(other.value) {}

Data& Data::operator=(const Data& other)
{
	if (this != &other)
	{
		id = other.id;
		name = other.name;
		value = other.value;
	}
	return *this;
}

Data::~Data() {}

void Data::print() const
{
	std::cout << "Data { id: " << id << ", name: \"" << name 
				<< "\", value: " << value << " }" << std::endl;
}