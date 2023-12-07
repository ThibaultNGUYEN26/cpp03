/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:18:36 by thibault          #+#    #+#             */
/*   Updated: 2023/12/07 14:36:12 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main() {
	ClapTrap claptrap;
	claptrap.info();
	claptrap.attack("Enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	claptrap.info();

	std::cout << std::endl;
	
	ScavTrap scavtrap("SCAV");
	scavtrap.info();
	scavtrap.attack("Enemy");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(3);
	scavtrap.info();
	scavtrap.guardGate();

	std::cout << std::endl;

	ScavTrap scavtrap2 = scavtrap;
	scavtrap2.info();
	scavtrap2.attack("New Enemy");
	scavtrap2.takeDamage(5);
	scavtrap2.beRepaired(3);
	scavtrap2.info();
	scavtrap2.guardGate();

	std::cout << std::endl;

	return 0;
}