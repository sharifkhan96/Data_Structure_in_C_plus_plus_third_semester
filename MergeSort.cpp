#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

// listMerger function to sortly combine the array elements
void listMerger(int arr[], int l, int m, int r)
{
	
	int i = l;
	int j = m+1;
	int k = 0;
	int size = (r-l)+1;
	int temp[size];
	
	while(i <= m && j <= r)
	{
		
		if(arr[i] <= arr[j])
		{
			temp[k] = arr[i];
			i++;
			k++;
		}else{
			temp[k] = arr[j];
			j++;
			k++;
		}
		
	}
	
	while(i <= m)
	{
		
		temp[k] = arr[i];
		i++;
		k++;
		
	}
	
	while(j <= r)
	{
	 	
		temp[k] = arr[j];
		j++;
		k++;
		
	}
	
	for(int i=l ,v=0; i<=r; v++, i++)
	{	
		arr[i] = temp[v];
	}
	
} 


// Merge function 
void Merge(int arr[], int l, int r)
{
	
	if(l < r)
	{
		int m = (l+r)/2;
		Merge(arr, l, m);
		Merge(arr, m+1, r);
		listMerger(arr, l, m, r);
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
		cin>> myarr[i]; //= rand() / 100 +5;
	}
	
	cout<<"\n before sorting: ";
	for(int i=0; i<size; i++)
	{	
		cout<<" ";
		cout<<myarr[i]; 
	}
	int start = 0;
	Merge(myarr, start, (size-1));
	
	cout<<"\n After sorting: ";
	for(int i=0; i<size; i++)
	{	
		cout<<" ";
		cout<<myarr[i];
	}
	
	getch();
	return 0;
}

