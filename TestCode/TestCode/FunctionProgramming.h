#pragma once

class FunctionProg
{
public:
	explicit FunctionProg(int a) : m_nLocalVar{ a } {};

	//X값이 들어오면 operator 재정의
	int operator() (int x) const {
		return m_nLocalVar + x;
	}

	int getData()
	{
		return m_nLocalVar;
	};

	void FunctionPlus(int x)
	{
		auto lamdaThis = [this/*&*/](int x)
		{
			return x + this->getData();/*m_nLocalVar*/;
		};
		std::cout << "LamdaThis: " << lamdaThis(x) << std::endl;
	}

private:
	int m_nLocalVar;
};