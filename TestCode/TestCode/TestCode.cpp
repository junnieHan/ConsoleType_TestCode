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
// 	std::vector<int> vec{ 1,2,3 };
// 
// 	cout << "vecSize:" << vec.size() << endl;
// 	cout << "vecCapacity:" << vec.capacity() << endl;
// 
// 	vec.clear();
// 
// 	cout << "vecClearSize:" << vec.size() << endl;
// 	cout << "vecClearCapacity:" << vec.capacity() << endl;
// 
// 	vec.push_back(1);
// 	vec.push_back(2);
// 	vec.push_back(3);
// 	vec.push_back(4);
// 	vec.push_back(5);
// 
// 	cout << "vecappendDataSize:" << vec.size() << endl;
// 	cout << "vecappendDataCapacity:" << vec.capacity() << endl;
// 
// 	vec.shrink_to_fit();
// 	
// 	cout << "vecShink_fit_Size:" << vec.size() << endl;
// 	cout << "vecShink_fit_Capacity:" << vec.capacity() << endl;

	std::vector<int> vecRemove{ 0,1, 0, 1, 0, 1 };
	auto remove = std::remove(vecRemove.begin(), vecRemove.end(), 0);

	for (auto data : vecRemove)
	{
		cout << data;
	}

	vecRemove.erase(remove, vecRemove.end());

	for (auto data : vecRemove)
	{
		cout <<data;
	}

	return 0;
}

