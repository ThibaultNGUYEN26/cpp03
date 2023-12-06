/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:18:36 by thibault          #+#    #+#             */
/*   Updated: 2023/12/06 13:34:26 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main() {
	ClapTrap claptrap("CLAP");
	ScavTrap scavtrap("SCAV");

	claptrap.attack("Enemy");
	scavtrap.attack("Enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(3);

	ClapTrap new_claptrap = claptrap;
	ScavTrap new_scavtrap = scavtrap;

	new_claptrap.attack("New Enemy");
	new_scavtrap.attack("New Enemy");

	scavtrap.guardGate();

	return 0;
}