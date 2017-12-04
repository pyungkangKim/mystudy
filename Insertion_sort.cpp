#include "Insertion_Sort.h"



Insertion_Sort::Insertion_Sort()
{
}


Insertion_Sort::~Insertion_Sort()
{
}

int Insertion_Sort::Sort(int * mArray, int size)
{
	for (int i = 1; i < size; i++)
	{
		int key = mArray[i];
		int j = i - 1;
		
		while (j >= 0 && key < mArray[j])
		{
			int temp;

			temp = mArray[j];
			mArray[j] = mArray[j + 1];
			mArray[j + 1] = temp;
			
			j--;
		}

		mArray[j + 1] = key;
	}
}
