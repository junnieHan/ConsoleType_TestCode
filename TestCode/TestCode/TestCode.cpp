// TestCode.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 

#include <iostream>
#include "ClassStudy.h"
#include <string>
using namespace std;

int main()
{
	std::string str = "junhee";
	//기본생성자
	ClassStudy Cls(str, 32);
	//Move 생성자
	ClassStudy Cls1(Cls);
	//CopY 생성자
	ClassStudy Cls2(std::move(Cls));

	return 0;
}

