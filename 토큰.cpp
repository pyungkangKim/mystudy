//Homework 02
//Infix표현의 수식(+-*/ %  연산 및  괄호가 포함된 수식)을 입력받아
//Postfix 표현으로 변환하여 출력하는 프로그램을 작성하기
//Stack을 이용하는 algorithm을 적용하여야 함
//21500186 김평강


#include <iostream>
#include <string>
#define MAX 100    
//사이즈를 100으로 충분하게 주기

using namespace std;


class mystack
{
private:  
	int top;
	char pstack[MAX];
	char stack[MAX];
	char *s;
	char *p;


public:    //다른사람이 접근할 수 있는 영역
	mystack();
	void to_use_E(char *str);
	void push(char x);
	char pop();
	int set_token(char x);
	void change();
	void result();
};

mystack::mystack() //초기화
{
	top = 0;
	
	strcpy(pstack, "");
	strcpy(stack, "");
	
	p = pstack;
	s = "";
}
void mystack::push(char x) //원소넣기
{
	stack[top] = x;
	top++;

}

char mystack::pop() //원소빼기
{

	top--;
	char item = stack[top];
	return item;

}

void mystack::to_use_E(char *x)
{
	s = x;
}

void mystack::change()
{
	while (*s)
	{
		
		if (isdigit(*s) || isalpha(*s))  //숫자나 문자가 존재하면 , 숫자 문자 둘다 적용할 수 있도록 하기 위해서
		{
			while (isdigit(*s) || isalpha(*s)) 
			{
				*p = *s;
				s++;
				p++;
			}
		}

		if (*s == '(') //( 을 만나면 push하기.
		{
			push(*s);
			s++;
		}

		char op;

		if (*s == '%' || *s == '-' || *s == '$'||*s == '*' || *s == '+' || *s == '/') //연산자를 만나면
		{
			if (top != 0)
			{
				op = pop(); 
				while (set_token(op) >= set_token(*s))
				{
					*p = op;
					 p++;
					 op = pop();
				}
				push(op);
				push(*s);
			}
			else
				push(*s);
			s++;
		}
		if (*s == ')') // )을 만나면 pop하기
		{
			op = pop();
			while ((op) != '(')
			{
				*p = op;
				p++;
				op = pop();
			}
			s++;
		}
	}
	while (top != 0)
	{
		char opr = pop();
		*p = opr;
		p++;
	}
	*p = '\0';
}
int mystack::set_token(char x) //우선순위
{
	if (x == '(') {
		return 0;
	}
	if (x == ')') {
		return 19;
	}
	if (x == '*') {
		return 12;
	}
	if (x == '/') {
		return 12;
	}
	if (x == '%') {
		return 12;
	}
	if (x == '+') {
		return 10;
	}
	if (x == '-') {
		return 10;
	}
	if (x == '$') {
		return 0;
	}
}
void mystack::result()
{
	cout << pstack;
}
void main()
{
	char x[MAX];
	mystack s;

	cout << "infix 수식을 입력하세요:" ;
	cin.getline(x, MAX); //한줄 다 받아올 수 있도록 getline쓰기.
     
	s.to_use_E(x);
	s.change();

	cout<<endl;
	cout << "postfix수식은 아래와 같습니다." <<endl;
	s.result();
	cout << endl;
	cout << endl;
}