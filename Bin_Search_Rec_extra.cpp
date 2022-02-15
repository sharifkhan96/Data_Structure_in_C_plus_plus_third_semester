#include <iostream>
#include <conio.h>
using namespace std;

void Bin_Search_Rec(int arr[], int key, int start, int last)
{
	int mid = start + (last - start) / 2;
	
	if(start > last)
	{
		cout<<"\n Given value has not been found in the array. \n";
		return;
		
	}else if(arr[mid] == key)
	{
		cout<<"\n The key "<<key<<" is found in the "<<mid<<" index position. \n";
		return;
		
	}else if(key < arr[mid])
	{
		last = mid-1;
		
	}else if(key > arr[mid])
	{
		start = mid +1;
	}
	
	Bin_Search_Rec(arr, key, start, last);
	
}

int main()
{

	int const Size = 10;
	int A[Size] = {3, 5, 8, 9, 10, 11, 12, 15, 22, 23};
	cout<<"\n Array elements are: ";
	for(int j=0; j<Size; j++){
		
		cout<<A[j]<<" ";
	
	}
	
	int loop;
	do{
	int key;
	int start=0;
	cout<<"\n\n Enter key to be found: ";
	cin>>key;	
	Bin_Search_Rec(A, key, start, Size);    
	 
	cout<<"\n Do U want to research any value ? click 1 : ";
	cin>>loop;
}while(loop ==1);

	getch();
	return 0;
}
