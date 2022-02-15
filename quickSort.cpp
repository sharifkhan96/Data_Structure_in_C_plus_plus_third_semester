#include <iostream>
#include <cstdlib>
using namespace std;

int partition(int arr[], int start, int end)
{
	int pivot = arr[end];
	int pIndex = start;
	
	for(int i=start; i<end; i++)
	{
		if(arr[i] <= pivot)
		{
			int temp = arr[i];
			arr[i] = arr[pIndex];
			arr[pIndex]= temp;
			
			pIndex++;
		}
	}
	
	int temp = arr[end];
	arr[end] = arr[pIndex];
	arr[pIndex] = temp;
	
	return pIndex;
}

void quickSort(int arr[], int start, int end)
{
	if(start < end)
	{
		int p = partition(arr, start, end);
		quickSort(arr, start, (p-1));  // recursive QS function for the left portion
		quickSort(arr, (p+1), end); // recursive QS function for the right portion 
	}
	
	
}


int main()
{
	
	int size;
	cout<<"\n enter the size for the array: ";
	cin>>size;
	cout<<"\n enter "<<size<<" number of elements to array: ";
	int myarr[size];
	for(int i=0; i<size; i++)
	{	
		cin>> myarr[i]; //= rand()%100+5;
	}
	
	cout<<"\n Before sorting: ";
	for(int i=0; i<size; i++)
	{	
		cout<<myarr[i]<<" ";
	}
	
	quickSort(myarr, 0, (size-1));
	
	cout<<"\n After sorting: ";
	for(int i=0; i<size; i++)
	{	
		cout<<myarr[i]<<" ";
	}
	
	return 0;
}
