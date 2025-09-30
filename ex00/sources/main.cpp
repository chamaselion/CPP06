/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:22:15 by bszikora          #+#    #+#             */
/*   Updated: 2025/09/19 17:25:24 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tools.hpp"
#include <cmath>

int main(int argc, char **argv)
{
	(void) argc;
	if (parse(argc, argv))
		return 1;
	ScalarConverter::convert(argv[1]);
	return 0;
}