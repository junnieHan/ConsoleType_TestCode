#pragma once
#include <string>
#include <iostream>
//object in memory: memory �޸𸮿� ���� �Ǵ� ���, ��Ƽ���α׷��ֽ� flae sharing ���� 
class alignas(32)ClassStudy
{
	//�����ͷ� Ŭ������ ���� �� �� �����ڸ� ���� �������(�߿�)
public:
	//�⺻ ������(�����Ϸ��� ������ִ� �����ڸ� ����Ѵٴ� �ǹ�)
	ClassStudy() = default;

	//������
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
	// Ư�� Constructor�� �����Ϸ��� �������� ���ϰ� �ϴ� ���(����� copy ������)
	//ClassStudy(const ClassStudy& other) = delete;

	ClassStudy& operator =(const ClassStudy& cls)
	{
		if (&cls == this)
		{
			//�����ͷ� �����ÿ����� �ʼ�
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

