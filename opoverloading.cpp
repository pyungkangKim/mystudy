#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace std;

class mtime {
	int hour;
	int min;
	//void adjust();
public:
	//int x;

	mtime();
	mtime(int a, int b);
	int get_hour();
	int get_min();

	void operator=(int n);
	mtime operator+(mtime n);
	mtime operator+(int n);
	mtime operator++(int n);
	mtime operator++();
	bool operator>(mtime n);
	void adjust();
};


mtime::mtime()
{
	hour = 0;
	min = 0;
}


mtime::mtime(int a, int b)
{
	hour = a;
	min = b;
}

void mtime::adjust() {

	if (min >= 60) {
		hour += min / 60;
		min = min % 60;
}
}

int mtime::get_hour() {

	return hour;
}

int mtime::get_min() {
	return min;
}







void mtime::operator=(int n) {
	min = n;
	adjust();
	
}

mtime mtime::operator+(mtime n) {
	mtime t;
	t.hour = hour + n.hour;
	t.min = min + n.min;
	t.adjust();
	return t;
}

mtime mtime:: operator+(int n) {
	mtime t;
	t.hour = hour;
	t.min = min + n;
	t.adjust();
	return t;
}

mtime mtime::operator++(int n) {
	mtime t;
	t.hour = hour;
	t.min = min;
	min++;
	t.adjust();
	return t;
	
}

mtime mtime::operator++() {
	min++;
	adjust();
	return *this;
}

bool mtime:: operator>(mtime n) {
	if (hour > n.hour) {
		return true;
	}
	else if (hour == n.hour) {
		if (min > n.min) {
			return true;
		}
		else
			return false;
	}
	else return false;
}



int main()

{

	//  \'mtime\'은 \'시간\'과 \'분\'을 표현하는 class

	mtime x(2, 40), a, b, c;  // x는 2시간 40분,  a, b, c는 0시간 0분을 갖는  object 생성



	a = 100; // a값은 100분 즉 1시간 40분으로 설정

	b = x + a;  // b 값은 4시간 20분이 됨

	c = ++a + 30;     // a의 \'분\' 값을 1 증가 시키는 연산이 수행되고, 이어서 30분을 더하는 연산이 수행되어

					  // c에 assign됨, 즉 c는 2시간 11분이 됨.



	if (b > c)   // b와 c의 크기 비교 연산에 따라

		x = b++ + 20;   // x  가 4시간 40분, b가 4시간 21분이 되거나

	else

		x = c++ + 20;   // xrk 2시간 31분, c가 2시간 12분이 됨





	cout << "X = " << x.get_hour() << " hours and " << x.get_min() << "mins. \\n";  // 4시간 40분 예상

	cout << "A = " << a.get_hour() << " hours and " << a.get_min() << "mins. \\n";  // 1시간 41분 예상

	cout << "B = " << b.get_hour() << " hours and " << b.get_min() << "mins. \\n";  // 4시간 21분 예상

	cout << "C = " << c.get_hour() << " hours and " << c.get_min() << "mins. \\n";  // 2시간 11분 예상



}
