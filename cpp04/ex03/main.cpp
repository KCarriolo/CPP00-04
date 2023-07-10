/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:43:29 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/10 12:43:57 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "============================" << std::endl;	
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("Cloud");
		ICharacter* you = new Character("Sephiroth");
		AMateria*	mat;
		AMateria*	ice = new Ice();
		AMateria*	cura = new Cure();

		std::cout <<"materia == ice" << std::endl;
		mat = ice;
		mat->use(*me);
		delete (mat);
		std::cout <<"materia == cura" << std::endl;
		mat = cura;
		mat->use(*me);
		delete (mat);

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->use(0, *you);
		me->use(1, *you);
		me->use(4, *you);

		me->unequip(1);
		

		delete (src);
		delete (me);
		delete (you);
	}
	return 0;
}
