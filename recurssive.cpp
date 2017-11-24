#include<iostream>

using namespace std;
int fact(int n);
int n;
int main() {

	cout << "Input" << endl;
	cin >> n;
	
	cout<< fact(n) << endl;
}

int fact(int n) {
	if (n == 1) 
		return 1;
	
	return n*fact(n - 1);

}
//