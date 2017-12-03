// int 자료형 N과 M을 입력받고
// N * M을 출력합니다.
// 단 N * M 결과가  0일 경우 "0은 입력될 수 없습니다!"를 출력해주세요!

#include <iostream>

using namespace std;

void main()
{
	int N, M;

	cin >> N >> M;

	int res = N*M;

	try {
		if (res == 0) throw 0;
		cout << res << endl;
	}
	catch (int exception)
	{
		cout << "0은 입력될 수 없습니다." << endl;
	}
}