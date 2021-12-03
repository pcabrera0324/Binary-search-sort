#include<iostream>
 
using namespace std;
 int search(int [],int,int);
 void swap (int array[],int x, int k);
void print(int [],int);
void sorting(int [],int);
int main()
{
    
    int n,i,a[100],e,res;
    cout<<"How Many Elements:";
    cin>>n;
    cout<<"\nEnter Elements of Array \n";
    
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    
    cout<<"\nEnter element to search:";
    cin>>e;
    
    
    swap(a, 2,3);
	sorting(a,n);
    
    res=search(a,n,e);
    
    if(res!=-1)
        cout<<"\nElement found at position "<<res+1;
    else
        cout<<"\nElement is not found....!!!";
 
    return 0;
}
 
int search(int a[],int n,int e)
{
    int f,l,m;
    f=0;
    l=n-1;
    
    while(f<=l)
    {
        m=(f+l)/2;
        if(e==a[m])
            return(m);
        else
            if(e>a[m])
                f=m+1;
            else
                l=m-1;
    }
    
    return -1;
}


void swap (int array[],int x, int k)
{
	int temp=array[x];
	array[x]=array[k];
	array[k]=temp;
	}




void print(int array [],int size)

{
	for(int i=0;i<size;i++)
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


void sorting(int array [],int size)
{
	for (int i=0;i<size;i++)
	{
		for (int i=0;i<size;i++)
		{
			if (array[i] > array[i+1])
			swap(array,i,i+1);
			
		}
		print(array,size);
	}
}
