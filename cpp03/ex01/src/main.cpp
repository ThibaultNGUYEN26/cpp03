/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:18:36 by thibault          #+#    #+#             */
/*   Updated: 2023/11/30 21:19:02 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main() {
    ClapTrap claptrap("CL4P-TP");
    ScavTrap scavtrap("SC4V-TP");

    claptrap.attack("Enemy");
    scavtrap.attack("Enemy");

    ClapTrap new_claptrap = claptrap;
    ScavTrap new_scavtrap = scavtrap;

    new_claptrap.attack("New Enemy");
    new_scavtrap.attack("New Enemy");

    scavtrap.guardGate();

    return 0;
}