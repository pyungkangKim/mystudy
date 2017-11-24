// int자료형 N을 입력받고
// N*N 크기의 숫자 사각형을 만들어주세요

// input 
// N? 3

// output
// 1 2 3
// 6 5 4
// 7 8 9

// input
// N? 7

//  1  2  3  4  5  6  7
// 14 13 12 11 10  9  8
// 15 16 17 18 19 20 21
// 28 27 26 25 24 23 22
// 29 30 31 32 33 34 35
// 42 41 40 39 38 37 36
// 43 44 45 46 47 48 49

#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int *mArray = new int[N*N];
	int count = 1;

	// 입력
	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < N; j++)
			{
				mArray[j + i*N] = count++;
			}
		}
		else
		{
			int mCount = (count-1) + N;
			count = mCount+1;

			for (int j = 0; j < N; j++)
			{
				mArray[j + i*N] = mCount--;
			}
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

	// 메모리 해제
	delete[] mArray;
}