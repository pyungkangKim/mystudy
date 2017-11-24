#include <iostream>

using namespace std;

int main()
{
	int N;
	int count = 1;

	cin >> N;
	int* mArray = new int[N * N];

	// 입력
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			mArray[j + i*N] = count++;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout.width(3);
			cout.fill(' ');

			cout << mArray[j + i*N] << " ";
		}
		cout << endl;
	}

	delete[] mArray;
}