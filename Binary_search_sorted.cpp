#include <iostream>
using namespace std;

int search(int A[], int key, int Size){
	
	int first = 0;
    int last = Size;
    int middle;
    
    while(first <= last)
    {
    	
    // middle = (first+last)/2;
       middle = first + (last - first)/2;
	       
		if(A[middle] == key)
        {
			return middle;
            break;
    	}
        else if(A[middle] < key)
        {
            first = middle + 1;
        }
        else
            last = middle -1;
    }
    
    return -1;

}

int main(){
	
	int const Size = 10;
	int A[Size] = {3, 5, 8, 9, 10, 11, 12, 15, 22, 23};
	cout<<"\n Array elements are: ";
	for(int j=0; j<Size; j++){
		
		cout<<A[j]<<" ";
	
	}

	int doloop;
	do{

	int key;
	cout<<"\n\n Enter key to be found: ";
	cin>>key;
	int output = search(A, key, Size);
	if(output== -1)
	{
		cout<<"\n Given value has not been found in the array. \n";
	}else{
		cout<<"\n The "<<key<<" is found in the "<<output<<" index position. \n";
	}
	
	cout<<"\n Do you want another search? write 1 for yes: ";
	cin>>doloop;
	}while(doloop == 1);
		
	return 0;
}
