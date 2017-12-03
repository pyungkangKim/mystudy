#define CODE_TYPE 0

#include <iostream>

int UserFunc(int N);

using namespace std;

void main()
{
	cout << UserFunc(10);

	// #if 전처리문을 이용하여 
	// CODE_TYPE 0일때는 N*10을 반환하는 UserFunc메소드
	// CODE_TYPE이 1일 때는 N * N을 반환하는 UserFunc메소드를 만들어서 확인하고 출력해주세요.	
}
#if (CODE_TYPE == 1)
int UserFunc(int N)
{
	return 0;
}
#else
int UserFunc(int N)
{
	return 0;
}
#endif