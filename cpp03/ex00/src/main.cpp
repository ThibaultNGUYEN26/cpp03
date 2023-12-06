/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:00:19 by thibault          #+#    #+#             */
/*   Updated: 2023/12/06 16:00:36 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main()
{
	ClapTrap claptrap;
	claptrap.info();
	claptrap.attack("Enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	claptrap.info();

	std::cout << std::endl;

	ClapTrap clap("BOT2");
	clap.info();
	clap.attack("Enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);
	clap.info();

	std::cout << std::endl;

	ClapTrap clap2 = clap;
	clap2.info();
	clap2.attack("Enemy");
	clap2.takeDamage(5);
	clap2.beRepaired(3);
	clap2.info();

	std::cout << std::endl;

	return 0;
}