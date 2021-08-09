#pragma once
#include <string>
#include <iostream>
//object in memory: memory 메모리에 저장 되는 방법, 멀티프로그래밍시 flae sharing 문제 
class alignas(32)ClassStudy
{
	//포인터로 클래스를 관리 할 시 생성자를 관리 해줘야함(중요)
public:
	//기본 생성자(컴파일러가 만들어주는 생성자를 사용한다는 의미)
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
		std::cout << strName << m_nCnt << "Copy Constructor" << std::endl;
	}
	// move Constructor
	ClassStudy(ClassStudy&& cls) :strName(std::move(cls.strName)), m_nCnt(cls.m_nCnt)
	{
		std::cout << strName << m_nCnt << "Move Constructor" << std::endl;
	}
	// 특정 Constructor을 컴파일러가 생성하지 못하게 하는 방법(현재는 copy 생성자)
	//ClassStudy(const ClassStudy& other) = delete;

	ClassStudy& operator =(const ClassStudy& cls)
	{
		if (&cls == this)
		{
			//포인터로 관리시에서는 필수
			return *this;
		}

		strName = cls.strName;
		m_nCnt = cls.m_nCnt;
		std::cout << strName << m_nCnt << "copy assignment" << std::endl;
		return *this;
	}


	ClassStudy& operator =(ClassStudy&& cls)
	{
		//safety code
		if (&cls == this)
		{
			return *this;
		}
		strName = std::move(cls.strName);
		m_nCnt = cls.m_nCnt;
		std::cout << strName << m_nCnt << "move assignment" << std::endl;
		return *this;
	}
	void print()
	{
		std::cout << strName << m_nCnt  << std::endl;
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

