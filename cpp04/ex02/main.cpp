#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int	main(void)
{
	{
		std::cout << std::endl;
		Animal*	cat = new Cat();
		Animal*	dog = new Dog();

		std::cout << cat->getType() << " " << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		cat->makeSound(); //will output the cat sound!
		dog->makeSound();
		delete cat;
		delete dog;
	}
	{
		std::cout << std::endl;
		WrongAnimal*	cat = new WrongCat();
		Animal*			dog = new Dog();

		std::cout << cat->getType() << " " << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		cat->makeSound(); //will output the WrongAnimal sound!
		dog->makeSound();
		delete cat;
		delete dog;
	}
	{
		std::cout << std::endl;
		std::cout << ">>>> EX01 Tests <<<<" << std::endl;

		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	{
		std::cout << std::endl;

		int i = 0;
		Animal* array[4];	

		while (i < 4)
		{
			if (i == 2){
				for (;i < 4;i++)
					array[i] = new Cat();
				break ;
			}
			array[i++] = new Dog();	
		}
		for (int i = 0;i < 4;i++)
			delete array[i];	
	}
}
