#include "Selection_Sort.h"



Selection_Sort::Selection_Sort()
{
}


Selection_Sort::~Selection_Sort()
{
}

void Selection_Sort::Sort(int * mArray, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (mArray[j] < mArray[i])
			{
				int temp;
				temp = mArray[i];
				mArray[i] = mArray[j];
				mArray[j] = temp;
			}
		}
	}
}
