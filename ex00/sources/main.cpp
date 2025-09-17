/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:22:15 by bszikora          #+#    #+#             */
/*   Updated: 2025/09/17 16:32:38 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tools.hpp"
#include <cmath>

int main(int argc, char **argv)
{
	s_values info;
	if (parse(argc, argv, &info))
		return 1;
	if (handle_cases(&info))
		return 1;
	return 0;
}