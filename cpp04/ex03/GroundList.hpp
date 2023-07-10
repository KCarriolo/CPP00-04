/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GroundList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:43:11 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/10 12:43:12 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GROUNDLIST_HPP
# define GROUNDLIST_HPP
# include "AMateria.hpp"

class	GroundList{
	public:
		GroundList();			
		GroundList(GroundList& obj);
		GroundList(AMateria& ref);
		GroundList&	operator=(const GroundList& obj);
		~GroundList();			
		void		addBack(GroundList* lastNode);
		void		clearGroundList(void);	
	protected:
		AMateria*		ref;
		GroundList*		next;
};

#endif
