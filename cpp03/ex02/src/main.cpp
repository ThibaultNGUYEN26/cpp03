/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:26:30 by thibault          #+#    #+#             */
/*   Updated: 2023/12/06 16:10:16 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main() {
	ClapTrap claptrap;
	claptrap.info();
	claptrap.attack("Enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	claptrap.info();

	std::cout << std::endl;
	
	FragTrap fragtrap("FRAG");
	fragtrap.info();
	fragtrap.attack("Enemy");
	fragtrap.takeDamage(5);
	fragtrap.beRepaired(3);
	fragtrap.info();
	fragtrap.highFivesGuys();

	std::cout << std::endl;

	FragTrap fragtrap2 = fragtrap;
	fragtrap2.info();
	fragtrap2.attack("New Enemy");
	fragtrap2.takeDamage(5);
	fragtrap2.beRepaired(3);
	fragtrap2.info();
	fragtrap2.highFivesGuys();

	std::cout << std::endl;

	return 0;
}