/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:45:06 by bszikora          #+#    #+#             */
/*   Updated: 2025/10/14 13:03:59 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Functions.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
	std::cout << "=== Testing Random Generation and Identification ===" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "\nTest " << (i + 1) << ":" << std::endl;
		Base* ptr = generate();
		std::cout << "Identify by pointer: ";
		identify(ptr);
		std::cout << "Identify by reference: ";
		identify(*ptr);
		delete ptr;
	}
	
	std::cout << "\n=== Testing Known Types ===" << std::endl;
	Base* a_ptr = new A();
	Base* b_ptr = new B();
	Base* c_ptr = new C();
	std::cout << "\nTesting A instance:" << std::endl;
	std::cout << "By pointer: ";
	identify(a_ptr);
	std::cout << "By reference: ";
	identify(*a_ptr);
	std::cout << "\nTesting B instance:" << std::endl;
	std::cout << "By pointer: ";
	identify(b_ptr);
	std::cout << "By reference: ";
	identify(*b_ptr);
	std::cout << "\nTesting C instance:" << std::endl;
	std::cout << "By pointer: ";
	identify(c_ptr);
	std::cout << "By reference: ";
	identify(*c_ptr);
	delete a_ptr;
	delete b_ptr;
	delete c_ptr;
	std::cout << "\n=== Testing NULL pointer ===" << std::endl;
	Base* null_ptr = NULL;
	std::cout << "Null pointer: ";
	identify(null_ptr);
	
	return 0;
}