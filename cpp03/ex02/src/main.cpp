/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:26:30 by thibault          #+#    #+#             */
/*   Updated: 2023/12/06 13:39:01 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main() {
	ClapTrap claptrap("CLAP");
	FragTrap fragtrap("FRAG");

	claptrap.attack("Enemy");
	fragtrap.attack("Enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	fragtrap.takeDamage(5);
	fragtrap.beRepaired(3);

	ClapTrap new_claptrap = claptrap;
	FragTrap new_fragtrap = fragtrap;

	new_claptrap.attack("New Enemy");
	new_fragtrap.attack("New Enemy");

	fragtrap.highFivesGuys();

	return 0;
}