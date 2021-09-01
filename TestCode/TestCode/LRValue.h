#pragma once
#include <string>

class LRValue
{
public:
	LRValue() = default;
	~LRValue() {};


	//value
	void storeByValue(std::string s)
	{
		std::string str = s;
		std::cout << "value: " << str << std::endl;
	}

	// L value
	void storeByLRef(std::string& s)
	{
		std::string str = s;
		std::cout << "Lvalue: " << str << std::endl;
	}
	// R Value
	void storeByRRef(std::string&& s)
	{
		std::string str = s;
		std::cout << "Rvalue: "<< str << std::endl;
	}
};

