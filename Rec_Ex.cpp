include<iostream>

void Print(int n);
using namespace std;

void main()
{

	Print(1);
}

void Print(int n) {

	if (n > 100)

		return; //종료

	cout << n << endl;
	Print(n + 1);
}