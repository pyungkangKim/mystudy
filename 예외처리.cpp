#include <iostream>

using namespace std;

void main()
{
	// 예외처리란?
	// 프로그램 실행도중에 일어나는 비정상적인 상황(예외)을 처리해주는 것

	// 예외처리는 try/catch, throw를 이용해서 처리합니다.

	int N;
	int M;

	cout << "N? ";
	cin >> N;

	cout << "M? ";
	cin >> M;

	try {
		if (M == 0) throw 0;

		int res = N / M;
		cout << res << endl;
	}
	catch (int exception)
	{
		cout << "예외발생! 0으로 나눌 수 없습니다." << endl;
	}
}