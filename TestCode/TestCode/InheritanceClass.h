#pragma once
#include <iostream>

class Animal
{
public:
	virtual void speak()
	{
		std::cout << "Animal " << std::endl;
	}
	Animal()
	{
		std::cout << "animal Constructor" << std::endl;
	}

	~Animal()
	{
		std::cout << "animal Destructor " << std::endl;
	}
};

class Cat: public Animal
{
public:
	Cat()
	{
		std::cout << "Cat Constructor" << std::endl;
	}

	~Cat()
	{
		std::cout << "Cat Destructor " << std::endl;
	}

	void speak() override
	{
		std::cout << "meow! " << std::endl;
	}

};

class Dog : public Animal
{
public:

	Dog()
	{
		std::cout << "Dog Constructor" << std::endl;
	}

	~Dog()
	{
		std::cout << "Dog Destructor " << std::endl;
	}

	void speak() override
	{
		std::cout << "bark" << std::endl;
	}
};