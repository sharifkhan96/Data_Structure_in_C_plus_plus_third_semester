#include <iostream>
#include <conio.h>
using namespace std;

int Bin_Search_Rec(int arr[], int key, int start, int last)
{
	int index;
	
	if(start > last)
	{
		index = -1;
	
	}
	else{
	
		int mid = (start + last) / 2;
		
		if(key == arr[mid])
			index = mid;
		else if(key < arr[mid])
			index = Bin_Search_Rec(arr, key, start, mid-1);
		else
			index = Bin_Search_Rec(arr, key, mid+1, last);	
	}
	
	return index;
}

int main(int argc, char** argv)
{

	int const Size = 10;
	int A[Size] = {3, 5, 8, 9, 10, 11, 12, 15, 22, 23};
	cout<<"\n Array elements are: ";
	for(int j=0; j<Size; j++){
		
		cout<<A[j]<<" ";
	
	}
	
	int key;
	int start=0;
	cout<<"\n\n Enter key to be found: ";
	cin>>key;
	
	int output = Bin_Search_Rec(A, key, start, Size);    
	if(output== -1)
	{
		cout<<"\n Given value has not been found in the array. \n";
	}else{
		cout<<"\n The key "<<key<<" is found in the "<<output<<" index position. \n";
	}
	

	getch();
	return 0;
}
