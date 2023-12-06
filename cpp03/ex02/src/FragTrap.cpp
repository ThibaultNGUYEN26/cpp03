/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:26:43 by thibault          #+#    #+#             */
/*   Updated: 2023/12/06 16:09:05 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap named " << _name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap named " << other._name << " copied!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        _name = other._name + "_assigned";
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "FragTrap named " << _name << " has been assigned!" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap named " << _name << " destroyed!" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (_hitPoints > 0 && _energyPoints > 0) {
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	} else {
		std::cout << "FragTrap " << _name << " cannot attack due to lack of hit points or energy points!" << std::endl;
	}
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}