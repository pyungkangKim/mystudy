// 전처리문이란?
// 코드 컴파일 이전에 미리 처리되는 문장을 가르킵니다.
// (전처리문처리 후에 코드를 컴파일 합니다.)

// #include - 파일 처리
// 헤더파일같은 외부 파일을 읽어서 포함시킬 때 사용합니다.

// #define, #undef - 정의
// 상수값이나 매크로를 지정하기 위해 사용합니다.

// #if, #ifdef, #ifndef, #else, #elif #endif - 조건
// 구문의 컴파일 유무를 설정하기 위해 사용합니다.

// #error - 에러 처리
// 전처리문 에러를 확인하기 위해 사용합니다. 소스코드에 직접 에러메세지를 출력합니다.

// #line - 디버깅
// 소스 코드의 행번호를 지정하기 위해 사용합니다.

// #pragma - 컴파일 옵션
// 각종 컴파일 옵션이나, lib, dll파일을 호출하기 위해 사용합니다.

#include <iostream>

#define Sum(x) ((x) = (x) + (x))
#define INDEX_001 10

#undef Sum(x)
#undef INDEX_001

#define IOS		0
#define ANDORID 1
#define PC		2

#define PLATFORM ANDORID

#pragma warning (disable : 4996)
#pragma once
#pragma comment (lib, "d3dx.lib")
using namespace std;

void main()
{
#if (PLATFORM == IOS)
	cout << "이 프로그램 코드는 IOS용 프로그램 코드입니다." << endl;
#elif(PLATFORM == ANDORID)
	cout << "이 프로그램 코드는 Andorid용 프로그램 코드입니다." << endl;
#elif(PLATFORM == PC)
	cout << "이 프로그램 코드는 PC용 프로그램 코드입니다." << endl;
#else
	cout << "플랫폼 종류를 알 수 없습니다." << endl;
#endif

#ifdef CHECK
	#error This program must be compiled in large memory mode.
#endif

#line 100
	cout << __LINE__ << "line" << endl;
}

#define USEABLE_SUM
#undef USEABLE_SUM

#ifdef USEABLE_SUM
void Sum(int N, int M)
{
	int res = N + M;
	cout << res << endl;
}
#endif




#ifndef USER_INFO
#define USER_INFO

class UserInfo
{
public :
	char*	name;
	int		age;
};
#endif