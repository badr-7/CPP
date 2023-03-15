/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:04:45 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/15 13:29:14 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{

	ClapTrap trap("badr");
	ClapTrap clap(trap);
    

	std::cout << std::endl;
	
	clap.attack("said");
	clap.takeDamage(0);
	clap.beRepaired(20);
	
	std::cout << std::endl;
	
	clap.attack("simo");
	clap.takeDamage(20);
	clap.beRepaired(5);
	
	std::cout << std::endl;

	return 0;
}