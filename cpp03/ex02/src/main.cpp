/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:26:30 by thibault          #+#    #+#             */
/*   Updated: 2023/11/30 21:28:31 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main() {
    ClapTrap claptrap("CL4P-TP");
    FragTrap fragtrap("FR4G-TP");

    claptrap.attack("Enemy");
    fragtrap.attack("Enemy");

    ClapTrap new_claptrap = claptrap;
    FragTrap new_fragtrap = fragtrap;

    new_claptrap.attack("New Enemy");
    new_fragtrap.attack("New Enemy");

    fragtrap.highFivesGuys();

    return 0;
}