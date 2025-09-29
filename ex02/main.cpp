/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:47:03 by qhatahet          #+#    #+#             */
/*   Updated: 2025/09/29 18:55:40 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap a("qais");

	a.attack("Dummy");
	a.takeDamage(10);
	a.beRepaired(5);
	a.highFivesGuys();
	return (0);
}