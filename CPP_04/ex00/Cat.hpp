#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	virtual ~Cat();
	
	Cat &operator=(const Cat &klas);
	Cat(Cat const &klas);

	virtual void makeSound() const;
};

#endif