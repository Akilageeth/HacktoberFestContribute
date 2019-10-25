#include <iostream>
using namespace std;

void bubbleSort(int A[],int n)
{
	int i,j;
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}

int main()
{
	int x;
	cout<<"Enter the size of the array\n";
	cin>>n;
	int a[x];
	cout<<"Enter the element\n";
	for(int i=0;i<x;i++)
	{
		cin>>a[i];
	}
	bubbleSort(a,x);
	cout<<"The Sorted array is :";
	for(int i=0;i<x;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
