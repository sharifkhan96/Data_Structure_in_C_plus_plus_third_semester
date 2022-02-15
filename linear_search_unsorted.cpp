#include <iostream>
using namespace std;

int search(int A[], int key, int Size){
	
	int index = -1;
	
	for(int i=0; i<Size; i++){
		
		if(A[i] == key){
			index = i;
			break;
		}
	}
	
	return index;
}

int main(){
	
	int const Size = 10;
	int A[Size] = {3, 5, 8, 9, 6, 4, 33, 66, 22, 11};
	
	int option;
	
	do{
	
	int key;
	cout<<"\n Enter the key to be found: ";
	cin>>key;
	int extra = search(A, key, Size);
	if(extra == -1){
		cout<<"\n Key is not found ";
	}else{
		cout<<"\n Key "<<key<< " is found at index "<<extra;
	}
	
	cout<<"\n\n\n Do u want to repeat Yes(1) ";
	cin>>option;
	}while(option == 1);
	
	return 0;
}
