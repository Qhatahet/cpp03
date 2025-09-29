/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:22:46 by qhatahet          #+#    #+#             */
/*   Updated: 2025/09/29 18:57:42 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "";
	hitP = 100;
	energyP = 100;
	attackD = 30;
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hitP = 100;
	energyP = 100;
	attackD = 30;
	std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout << "ClapTrap Copy constructor called" << std::endl;
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
	std::cout << "ClapTrap Copy assignment oprator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (target.empty())
	{
		std::cout << "there is no target" << std::endl;
		return ;
	}
	if (name.empty())
	{
		std::cout << "ClapTrap Doesn't have a name" << std::endl;
		return ;
	}
	if (hitP <= 0 || energyP <= 0)
	{
		std::cout << "Can't attack there is no hit point or energy point" << std::endl;
		return ;
	}
	energyP--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackD << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (name.empty())
	{
		std::cout << "ClapTrap Doesn't have a name" << std::endl;
		return ;
	}
	if (energyP <= 0)
	{
		std::cout << "ClapTrap " << name << " can't repair itself, it doesn't have enough energy points" << std::endl;
		return ;
	}
	energyP--;
	hitP += amount;
	std::cout << "ClapTrap " << name << " repaired itslef the new hit point " << hitP << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (name.empty())
	{
		std::cout << "ClapTrap Doesn't have a name" << std::endl;
		return ;
	}
	hitP -= amount;
	if (hitP < 0)
		hitP = 0;
	std::cout << "ClapTrap " << name << " has taken " << amount << " points amount of damage, the new hit point " << hitP << std::endl;
}
