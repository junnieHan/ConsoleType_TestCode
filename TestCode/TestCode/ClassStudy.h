#pragma once
#include <string>
#include <iostream>
//object in memory: memory 메모리에 저장 되는 방법, 멀티프로그래밍시 flae sharing 문제 
class alignas(32)ClassStudy
{
public:
	//기본 생성자
	ClassStudy() = default;

	//생성자
	ClassStudy(std::string name, int nCnt):strName(std::move(name)), m_nCnt(nCnt)
	{
		std::cout << strName << m_nCnt << "Constructor" << std::endl;
	}
	~ClassStudy()
	{
		std::cout << strName << m_nCnt << "Destructor" << std::endl;
	}
	// copy Constructor
	ClassStudy(const ClassStudy& cls):strName(std::move(cls.strName)), m_nCnt(cls.m_nCnt)
	{
		std::cout << strName << m_nCnt << "Constructor" << std::endl;
	}
	// move Constructor
	ClassStudy(ClassStudy&& cls) :strName(std::move(cls.strName)), m_nCnt(cls.m_nCnt)
	{
		std::cout << strName << m_nCnt << "Constructor" << std::endl;
	}
	
	std::string strName;
	int m_nCnt{0};
	static int static_count;

};

class OrderClass
{
public:
	OrderClass(int nCnt);
	~OrderClass();

public:
	ClassStudy m_clsStudy;
};

