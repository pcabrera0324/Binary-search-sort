#include <iostream>

using namespace std;

/* int FindUsingLinearsearch( int val, int array[], int size);

int findMid (int low, int high) {
return	low + ((high - low) / 2);
}

int findUsingBinarySearch(int val, int array[], int size)
{
	int start= 0;
	int end = size -1;
	
	while (end >= start) 
	{
		int mid = findMid(start, end);
		 if (array[mid]==val) return mid;
		 if (array[mid]>val) 
		 {
		 		end = mid -1;
		 }	else 	{
		 	            start = mid +1;
		 			}
	}
	return -1;
}

*/
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

void sortusingbubbles(int array[], int size)
{
	for (int j=0;j<size;j++) {
	
	for (int i=0;i<(size-1);i++)
	{
		if (array[i] > array[i+1]) swap(array, i , i+1);
	}
	printarray(array, size);
}
}




int main(int argc, char** argv) {
	
	
	int val=0;
	int SIZE=6;
	int numbers[] = {66,57,98,7,16,2};
printarray(numbers,SIZE);
swap(numbers, 2,3);
printarray(numbers,SIZE);
sortusingbubbles (numbers, SIZE);
printarray(numbers,SIZE);
/*	int val=0;
	int SIZE=5;
	int numbers[] = {2,34,66,79,99};
	cout << "Enter a number to search for ";
	cin >> val;

	  int index =  findUsingBinarySearch( val,  numbers,  SIZE);
	
	cout << "The value " << val << " was found at index " << index;
	
		*/
		
return 0;








}













	
/*	int val=0;
	int SIZE=6;
	int numbers[] = {66,57,98,7,16,2};
	cout << "Enter a number to search for: ";
	cin >> val;
	
	int index = FindUsingLinearsearch(val, numbers, SIZE);
	cout << "The value " << val << " was found at index " << index;
	
	
	return 0;
}
*/

/* int FindUsingLinearsearch( int val, int array[], int size)
{
	int index = -1;
	
	for (int i=0; i<size;i++)
	{
		if (array[i]==val) 
		return i;
		
	}
	return index;
	
} */






