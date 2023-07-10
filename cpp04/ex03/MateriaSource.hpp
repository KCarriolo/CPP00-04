/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:43:42 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/10 12:43:43 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include <iostream>

class	MateriaSource: public IMateriaSource{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& obj);
		virtual				~MateriaSource();
		AMateria*			bookMaterias[4];
		void				learnMateria(AMateria* skill);
		virtual AMateria*	createMateria(std::string const & type);
	private:
		int					_lastLearned;
};

#endif
