/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 19:29:09 by modat             #+#    #+#             */
/*   Updated: 2025/12/26 19:29:09 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class   Zombie
{
    private:
        std::string name;
    public:
        void announce( void );
};


class   NewZombie: public Zombie
{
    public:
        Zombie* newZombie( std::string name );

} 

class   
#endif