#include <iostream>

using namespace std;

void main()
{
	int *p = new int;

	try
	{
		if (p == NULL) throw 1;
		delete p;
		cout << "메모리 해제 성공" << endl;
	}
	catch (int exception)
	{
		switch (exception) {
		case 1:
			cout << "포인터 메모리가 할당되지 않은 상태에서 해제 명령을 하셨습니다." << endl;
			break;
		}
	}
}