// int자료형 N을 입력받고
// N크기의 상자를 만들어주세요!

// input
// N 2

// output
// 2 4
// 4 8

// input
// N 5

// output
//  2  4  6  8 10
//  4  8 12 16 20 
//  6 12 18 24 30
//  8 16 24 32 40
// 10 20 30 40 50

// input
// N? 7

// output
//  2  4  6  8 10 12 14
//  4  8 12 16 20 24 28
//  6 12 18 24 30 36 42
//  8 16 24 32 40 48 56
// 10 20 30 40 50 60 70
// 12 24 36 48 60 72 84
// 14 28 42 56 70 84 98

#include <iostream>

using namespace std;
int main()
{
	int N;
	cin >> N;

	int *mArray = new int[N * N];

	// 입력
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			mArray[j + i*N] = 2 * (i + 1) * (j + 1);
		}
	}

	// 출력
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout.width(3);
			cout.fill(' ');

			cout << mArray[j + i*N];
		}
		cout << endl;
	}

	delete[] mArray;
}
