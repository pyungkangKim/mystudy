
// 다차원 배열을 사용해서 다음 텍스트를 출력

// output
//*0000
//**000
//***00
//****0
//*****

#include <iostream>

using namespace std;

int main()
{
	char mArray[5][5];

	// 값 입력
	for (int i = 0; i < 5; i++)
	{
		for (int j=0; j<=i; j++)
		{
			mArray[i][j] = '*';
		}

		for (int j = i + 1 ; j < 5; j++)
		{
			mArray[i][j] = '0';
		}
	}

	// 값 출력
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mArray[i][j];
		}
		cout << endl;
	}

}