// TestCode.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 

#include <iostream>
#include "ClassStudy.h"
#include <string>
#include "InheritanceClass.h"
#include "LRValue.h"
#include <vector>
using namespace std;

int main()
{
	std::string a = "junhee";
	LRValue LR;
	LR.storeByValue(a);
	LR.storeByLRef(a);
	LR.storeByRRef(std::move(a));

	cout << "a:" << a << endl;


	return 0;
}

