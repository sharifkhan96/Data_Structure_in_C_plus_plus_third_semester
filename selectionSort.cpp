#include <iostream>

using namespace std;

void selectionSort(int arr[], int Size)
{
	
	for(int i=0; i<Size-1; i++)   // this outer loop is for the overall size-1 steps 
	{
		int min=i;
		
	   for(int j= i+1; j<Size; j++) // this inner loop is for finding the minimum value in the unsorted array 
	   {
	
		  if(arr[j] < arr[min])     // it's in ascending order; if you want the entire program
		  {							// to be in descending order, then only change '<' to '>' sign
		  	 min = j;
		  }
		
	   }
	
	   if(min != i) // this block will compare value of i with min, if not same, then swap will happen
	   {
	   	
	   		int temp = arr[min];
	   		arr[min] = arr[i];
	   		arr[i] = temp;
	   	
	   }
	
	}	
	
}


int main()
{
	int repeat;
	do{
	
	int Size;
	cout<<"\n Enter your array size: ";
	cin>>Size;
	int arr[Size];
	cout<<"\n Enter random array elements to be sorted: ";
	for(int i=0; i<Size; i++)
	{
		cin>>arr[i];
	}
	cout<<"\n Unsorted array elements are: ";
	for(int i=0; i<Size; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	selectionSort(arr, Size);
	
	cout<<"\n Sorted array is: ";
	for(int i=0; i<Size; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<"\n\n\n Do you want to repeat: yes(1): ";
	cin>>repeat;
	}while(repeat == 1);
	
	
	return 0;
}
