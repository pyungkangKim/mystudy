// 25부터 1까지 출력되는 다차원배열을 만들어보세요!

// 25 24 23 22 21
// 20 19 18 17 16
// 15 14 13 12 11
// 10  9  8  7  6
//  5  4  3  2  1

#include <iostream>

using namespace std;

int main()
{
	int mArray[5][5];

	int count = 25;

	// 입력
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			mArray[i][j] = count--;
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