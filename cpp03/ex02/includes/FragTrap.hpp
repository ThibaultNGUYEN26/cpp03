/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:26:58 by thibault          #+#    #+#             */
/*   Updated: 2023/11/30 21:29:28 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "../includes/ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : public ClapTrap {

public:

    FragTrap(const std::string& name);
    FragTrap(const FragTrap& other);
    ~FragTrap();

    void attack(const std::string& target);
    void highFivesGuys();

};

#endif