// TestCode.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 

#include <iostream>
#include "ClassStudy.h"
#include <string>
#include "InheritanceClass.h"
#include "LRValue.h"
#include <vector>
#include "FunctionProgramming.h"
using namespace std;

int main()
{
// 	//Function Object 
// 	FunctionProg func1(3);
// 	FunctionProg func2(5);
// 
// 	cout << func1(10) << endl;
// 	cout << func2(10) << endl;

// Lamda 
	int nLocalVar{ 3 };
// Variable Type : deep copy
	auto lamdaFunc = [nLocalVar/* = */](int x)
	{
		return nLocalVar + x;
	};

	cout << "lamdaVariable:" <<lamdaFunc(10) << endl;
// ReferenceTpye : obj에 주로 사용해야함
	FunctionProg func{ 5 };
	auto LamdaFuncRef = [&func/*&*/](int x)
	{
		return func.getData() + x;
	};
	cout << "lamdaRef:" << LamdaFuncRef(10) << endl;
	//ThisType 스코프밖에 있는 class 안에 있는 함수
	func.FunctionPlus(5);

	return 0;
}

