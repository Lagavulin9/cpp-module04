/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:36:20 by marvin            #+#    #+#             */
/*   Updated: 2023/03/08 14:20:48 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

# include <string>
# include <iostream>
# include <stdlib.h>

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain(const Brain&);
	~Brain();

	Brain&				operator=(const Brain&);
	void				setIdeas(const std::string*);
	const std::string*	getIdeas(void) const;
};


#endif
