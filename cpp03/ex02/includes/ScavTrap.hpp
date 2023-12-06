/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:26:20 by thibault          #+#    #+#             */
/*   Updated: 2023/11/30 21:26:22 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "../includes/ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap : public ClapTrap {

public:

    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& other);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();

};

#endif