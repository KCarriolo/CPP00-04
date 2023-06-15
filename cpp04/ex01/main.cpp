#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int	main(void)
{
	{
		std::cout << std::endl;
		Animal*	a = new Animal();
		Animal*	cat = new Cat();
		Animal*	dog = new Dog();

		std::cout << cat->getType() << " " << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		cat->makeSound(); //will output the cat sound!
		dog->makeSound();
		a->makeSound();
		delete a;
		delete cat;
		delete dog;
	}
	{
		std::cout << std::endl;
		Animal*			a = new Animal();
		WrongAnimal*	cat = new WrongCat();
		Animal*			dog = new Dog();

		std::cout << cat->getType() << " " << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		cat->makeSound(); //will output the WrongAnimal sound!
		dog->makeSound();
		a->makeSound();
		delete a;
		delete cat;
		delete dog;
	}
}
