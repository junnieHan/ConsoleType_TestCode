// TestCode.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 

#include <iostream>
#include "ClassStudy.h"
#include <string>
#include "InheritanceClass.h"
#include <vector>
using namespace std;

int main()
{
	// Virtual를 사용하면 런타임 도중 어떤 객체가 생성 될 지 결정 된다.
	// 
	
 	std::vector<std::shared_ptr<Animal>> vecAnimal;
 
 	for(int idx = 0; idx< 5; idx++)
 	{
 		std::shared_ptr<Animal> polyAnimal;
 		int i = 0;
 		std::cin >> i;
 		if (i == 1)
 		{
 			 polyAnimal = std::make_shared<Dog>();
 		}
 		else
 		{
 			polyAnimal = std::make_shared<Cat>();
 		}
 		vecAnimal.emplace_back(polyAnimal);
 	}
 
 	for (auto& animal : vecAnimal)
 	{
 		animal->speak();

 	}

// 	std::vector<Animal*> vecAnimal;
// 
// 	for (int idx = 0; idx < 5; idx++)
// 	{
// 		Animal* polyAnimal;
// 		int i = 0;
// 		std::cin >> i;
// 		if (i == 1)
// 		{
// 			polyAnimal = new Cat();
// 		}
// 		else
// 		{
// 			polyAnimal = new Dog();
// 		}
// 		vecAnimal.emplace_back(polyAnimal);
// 	}
// 
// 	for (auto& animal : vecAnimal)
// 	{
// 		animal->speak();
// 		delete animal;
// 	}

	return 0;
}

