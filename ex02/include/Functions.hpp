/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:42:02 by bszikora          #+#    #+#             */
/*   Updated: 2025/10/14 13:03:53 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif