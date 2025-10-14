/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:14:25 by bszikora          #+#    #+#             */
/*   Updated: 2025/10/14 13:15:47 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() { }

Serializer::Serializer(const Serializer &other) { (void)other; }

Serializer &Serializer::operator=(const Serializer &other) { (void)other; return (*this); }

Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data *ptr) { return (reinterpret_cast<uintptr_t>(ptr)); }

Data *Serializer::deserialize(uintptr_t raw) { return (reinterpret_cast<Data *>(raw)); }