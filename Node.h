#pragma once
#include "Student.h"

class Node
{
private :
	Student		mStudent;
public :
	Node*		next = 0;
	Student*	GetStudent() { return &mStudent; }
public:
	Node();
	~Node();
};

