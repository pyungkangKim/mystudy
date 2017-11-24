#include <iostream>

using namespace std;

int main()
{
	int mArray[5][5];
	int count = 1;

	// 입력
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			mArray[i][j] = count++;
		}
	}

	// 출력
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout.width(2);
			cout.fill(' ');

			cout << mArray[i][j] << " ";
		}

		cout << endl;
		
	}
}