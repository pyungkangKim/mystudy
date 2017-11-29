#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Student
{
private :
	char	m_Name[256];
	int		m_ID;
	int		m_Age;

public :
	void	SetName(char* value)	{ strcpy(m_Name, Serialize(value)); }
	void	SetID(int value)		{ m_ID = Serialize(value); }
	void	SetAge(int value)		{ m_Age = Serialize(value); }

	char*	GetName()				{ return m_Name; }
	int		GetID()					{ return DeSerialize(m_ID); }
	int		GetAge()				{ return DeSerialize(m_Age); }

	void	PrintInfo();

	int		Serialize(int value)	{ return value << 5; };
	int		DeSerialize(int value)	{ return value >> 5; };

	char*	Serialize(char *value);
	char*	DeSerialize(char *value);
public:
	Student();
	~Student();
};

