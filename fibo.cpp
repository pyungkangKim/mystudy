#include<iostream>

using namespace std;
int Fibo(int n);
int n;
int main() {

	cout << "Input" << endl;
	cin >> n;
	cout << "Output" << endl;
	for (int i = 1; i <= n; i++) {
		cout << Fibo(i) << endl;
		
	}
}

int Fibo(int n) {
	if (n == 1) //첫번째
		return 1;
	

	if (n == 2) //두번째
			return 1;
	
	
	else
		return Fibo(n - 2) + Fibo(n - 1);
		

}
