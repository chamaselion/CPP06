/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:14:18 by bszikora          #+#    #+#             */
/*   Updated: 2025/10/14 13:15:45 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main(void)
{

	Data *data = new Data;
	data->name = "Tester";
	data->value = "butwhy";
	data->id = 12;

	uintptr_t raw = Serializer::serialize(data);
	Data *serialized = Serializer::deserialize(raw);

	std::cout << serialized->name << std::endl << serialized->value << std::endl << serialized->id << std::endl;
	
	return (delete data, 0);
}
