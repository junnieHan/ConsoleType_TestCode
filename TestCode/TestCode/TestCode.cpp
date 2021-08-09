// TestCode.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 

#include <iostream>
#include "ClassStudy.h"
#include <string>
using namespace std;

int main()
{
	ClassStudy Student1("Junhee", 32);
	ClassStudy Student2("myeng-soo", 30);

	Student1 = std::move(Student2);
	Student1.print();

	return 0;
}

