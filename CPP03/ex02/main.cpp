/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:04:45 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/15 09:06:54 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{

	ClapTrap clap("imad");
	ScavTrap scap("abid");
	FragTrap frap("imabid");
	
	std::cout << std::endl;
	
	clap.attack("abid");
	scap.takeDamage(0);
	scap.beRepaired(20);
	
	std::cout << std::endl;
	
	scap.guardGate();
	scap.attack("imad");
	clap.takeDamage(20);
	clap.beRepaired(20);
	
	std::cout << std::endl;

	scap.attack("imabid");
	frap.takeDamage(20);
	frap.highFivesGuys();

	std::cout << std::endl;
	
	return 0;
}