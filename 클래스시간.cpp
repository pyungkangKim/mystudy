//Programming Assignment 
//21500186 kimpyungkang
//몇일 남았는지 짜는 프로그램

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class date {
	string y;
	string m;
	string d;

public:
	date();
	date(int a, int b, int c);
	date next_day();
	void set_date(string s);
	friend bool equal_day(date a, date b);
	void get_date();
};

date::date() {    //초기화
	
		y = "2017";
		m = "01";
		d = "01";
	
}



date::date(int a, int b, int c) {   //constructor overloading
	y = to_string(a);
	for ( ; ; ) {
		if (y.size() == 4)
			break;
		y = "0" + y;
	}

	m = to_string(b);
	if (m.size() != 2)
		m = "0" + m;

	d = to_string(c);
	if (d.size() != 2)
		d = "0" + d;
}



void date::get_date() {
	cout << y << m << d;
}

date date::next_day() {
	int ynum = atoi(y.c_str());    //형 변환
	int mnum = atoi(m.c_str());
	int dnum = atoi(d.c_str()); //string int로 변환
	int lastday;//달의 마지막 날


	switch (mnum) {    //윤년도 고려해야함에 주의
	case 4: lastday = 30; break;
	case 6: lastday = 30; break;
	case 9: lastday = 30; break;
	case 11: lastday = 30; break;
	case 2:
		if (ynum % 4 == 0 && (ynum % 100 != 0 || ynum % 400 == 0))  
			lastday = 29;
		else
			lastday = 28;
		break;
	default: lastday = 31; break;
	} 


	if (dnum == lastday) {
		dnum = 1;
		if (mnum == 12) {
			mnum = 1;
			ynum++;
		}
		else
			mnum++;
	}
	else
		dnum++;

	date tmp(ynum, mnum, dnum);

	return tmp;

}

void date::set_date(string s) {

	y = "\0";
	m = "\0";
	d = "\0";

	for (int i = 0; i<4; i++) {
		y += s[i];
	}
	for (int i = 4; i<6; i++) {
		m += s[i];
	}
	for (int i = 6; i<8; i++) {
		d += s[i];
	}
}

bool equal_day(date a, date b) {
	if ((a.y == b.y) && (a.m == b.m) && (a.d == b.d))
		return true;
	else
		return false;
}

int main()
{
	date a(2017, 9, 28), b;  // object a와 b를 생성, a는 2017년 9월 28일로,
							 //  b는 2017년 1월 1일로 초기화
	string d1, dueday;          // 8문자 날짜 표현을 위한 두 개의 string
	int n;

	dueday = "20171026";
	b.set_date(dueday);   // b가 해당 날짜 정보를 저장하도록 함
	n = 0;

	while (equal_day(a, b) == false)   // a와 b가 동일 날짜가 아니면
	{

		n++;
		a = a.next_day();    // 다음 날로 값 변경
	}

	cout << n << "days left until dueday. \n";    // a의 최초값부터 b까지의 날짜수 출력

}
