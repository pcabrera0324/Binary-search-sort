#include <iostream>

using namespace std;


void swap (int array[], int i , int j)
{
	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}



void printarray (int array[], int size)
{
	for (int i=0;i<size;i++)
	{
		cout << array[i];
		
		if (i != size-1)
		{
				 cout <<" - ";
		} else
		{
				 cout << endl;
		}
	}
}



void reloadarray(int array[],int left[],int right[],int privot,int arraysize,int leftsize,int rightsize)
{
	int arraycounter=0;
	
	for (int i=0;i<leftsize;i++)
	{
		array[arraycounter++] = left[i];
	}
	array[arraycounter++] = privot;

	for (int i=0;i<rightsize;i++)
	{
		array[arraycounter++] = right[i];
	}
	cout << "***";
	printarray(array, arraysize);
}

void quicksort(int array[],int size)
{
	int privot= array[size-1];
	int left[size-1];
	int right[size-1];
	
	int leftsize=0;
	int rightsize=0;
	
	for (int i=0;i<(size-1);i++)
	{
		if (array[i] < privot)
		{
			left[leftsize++] = array[i];
		} else
		right[rightsize++] = array[i];
	}
	
	cout << "--------------------------------" << endl;
	printarray(left,leftsize);
	cout << "pivot= " << privot << endl;
	
	printarray(right,rightsize);
		cout << "----------------------------" << endl;
		
		
		
		reloadarray(array, left , right, privot, size, leftsize , rightsize);
		
		if (leftsize> 1) quicksort(left,leftsize);
		if (rightsize> 1) quicksort(right,rightsize);
		
			reloadarray(array, left , right, privot, size, leftsize , rightsize);
}









int main(int argc, char** argv) {
	
	
	int val=0;
	int SIZE=6;
	int numbers[] = {66,57,61,7,16,44};

	printarray(numbers,SIZE);
	quicksort(numbers,SIZE);
	printarray(numbers,SIZE);


		
		
return 0;








}













	






