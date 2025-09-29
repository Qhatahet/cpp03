/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:17:30 by qhatahet          #+#    #+#             */
/*   Updated: 2025/09/29 18:52:35 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	ClapTrap::operator=(obj);
	std::cout << "ScavTrap assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (name.empty())
		return ;
	std::cout << "ScavTrap " << name << " is in gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (target.empty())
	{
		std::cout << "there is no target" << std::endl;
		return ;
	}
	if (name.empty())
	{
		std::cout << "Scavtrap Doesn't have a name" << std::endl;
		return ;
	}
	if (hitP <= 0 || energyP <= 0)
	{
		std::cout << "Can't attack there is no hit point or energy point" << std::endl;
		return ;
	}
	energyP--;
	std::cout << "Scavtrap " << name << " attacks " << target << ", causing " << attackD << " points of damage!" << std::endl; 
}

