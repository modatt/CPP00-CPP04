/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 19:58:17 by modat             #+#    #+#             */
/*   Updated: 2025/12/26 19:58:17 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str; // refrence to the string // another name of str
    
    // print memory addresses
    std::cout << &str << std::endl; // Memory address of str
    std::cout << stringPTR << std::endl; // Memory address held by it // itself has an address using * to point to inside the address
    std::cout << &stringREF << std::endl; // Memory address held by it

    // print values
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return 0;
}