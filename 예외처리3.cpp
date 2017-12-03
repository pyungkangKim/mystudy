#include <iostream>

using namespace std;

void SampleFunc_1();
void SampleFunc_2();
void SampleFunc_3();
void SampleFunc_4();

// 스택 풀기 (Stack Unwinding)
int main()
{
	try {
		SampleFunc_1();
	}
	catch (int exception)
	{
		cout << "예외 발생" << endl;
	}
}

void SampleFunc_1()
{
	cout << "bFunc 1" << endl;
	SampleFunc_2();
	cout << "Func 1" << endl;
}
void SampleFunc_2()
{
	cout << "bFunc 2" << endl;
	SampleFunc_3();
	cout << "Func 2" << endl;
}
void SampleFunc_3()
{
	cout << "bFunc 3" << endl;
	SampleFunc_4();
	cout << "Func 3" << endl;
}
void SampleFunc_4()
{
	cout << "bFunc 4" << endl;
	throw 0;
	cout << "Func 4" << endl;
}
