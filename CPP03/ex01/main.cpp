/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:04:45 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/15 10:32:24 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{

	ClapTrap clap("badr");
	ScavTrap scap("mel-hous");

	std::cout << std::endl;
	
	clap.attack("mel-hous");
	scap.takeDamage(0);
	scap.beRepaired(20);
	
	std::cout << std::endl;
	
	scap.guardGate();
	scap.attack("badr");
	clap.takeDamage(20);
	clap.beRepaired(20);
	
	std::cout << std::endl;

	return 0;
}