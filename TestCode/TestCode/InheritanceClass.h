#pragma once
#include <iostream>

class Animal
{
public:
	virtual void speak()
	{
		std::cout << "Animal " << std::endl;
	}
	
	virtual ~Animal() = default;

private:
	double height;
};

class Cat: public Animal
{
public:

	void speak() override
	{
		std::cout << "meow! " << std::endl;
	}

private:
	double Weight;

};

// class Dog : public Animal
// {
// public:
// 
// 	Dog()
// 	{
// 		std::cout << "Dog Constructor" << std::endl;
// 	}
// 
// 	~Dog()
// 	{
// 		std::cout << "Dog Destructor " << std::endl;
// 	}
// 
// 	void speak() override
// 	{
// 		std::cout << "bark" << std::endl;
// 	}
// };