#include <iostream>
using namespace std;

int search(int A[], int key, int Size){

	for(int i=0; i<Size; i++){
		
		if(A[i] > key){
			return -1;
		}else if(A[i] == key){
			return i;
		}
	
	}
	return -1;
}

int main(){
	
	int const Size = 10;
	int A[Size] = {3, 4, 5, 6 ,7 ,8 , 9};
	
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
