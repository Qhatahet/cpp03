/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:54:46 by qhatahet          #+#    #+#             */
/*   Updated: 2025/09/28 18:55:24 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hitP = 10;
	energyP = 10;
	attackD = 0;
	std::cout << "parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->attackD = obj.attackD;
		this->energyP = obj.energyP;
		this->hitP = obj.hitP;
	}
	std::cout << "Copy assignment oprator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (hitP <= 0)
		return ;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackD << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	
}
