#include <iostream>

using namespace std;


void listMerger(int arr[], int start, int mid, int end)
{
	
	int i = start;
	int j = mid+1;
	int k = 0;
	int size = (end - start)+1;
	int temp[size];
	
	while(i <= mid && j <= end)
	{
		
		if(arr[i] <= arr[j])
		{
			temp[k] = arr[i];
			k++;
			i++;
		}else{
			
			temp[k] = arr[j];
			k++;
			j++;
			
		}
	}
	
	while(i <= mid)
	{
		temp[k] = arr[i];
		k++;
		i++;
	}
	
	while(j <= end)
	{
		temp[k] = arr[j];
		k++;
		j++;
	}
	
	for(int x = start, y=0; x<=end; x++, y++)
	{
		arr[x] = temp[y];
	}
	
}


void mergeSort(int arr[], int start, int end)
{
	if(start < end)
	{
		
		int mid = (start + end)/2;
		mergeSort(arr, start, mid);	
		mergeSort(arr, mid+1, end);
		listMerger(arr, start, mid, end);
	}
	
}


int main()
{
	
	int size;
	cout<<"\n enter your size for the array: ";
	cin>>size;
	
	int myarr[size];
	cout<<"\n enter array elements: ";
	for(int i=0; i<size; i++)
	{
		cout<<" ";
		cin>>myarr[i];
	}
	
	cout<<"\n before the sorting ";
	for(int j=0; j<size; j++)
	{
		cout<<myarr[j]<<" ";
	}
	
	mergeSort(myarr, 0, (size-1));
	
	cout<<"\n before the sorting ";
	for(int j=0; j<size; j++)
	{
		cout<<myarr[j]<<" ";
	}
	
	
	return 0;
}
