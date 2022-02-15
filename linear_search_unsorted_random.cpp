#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int search(int A[], int key){
	
	int index = -1;
	
	for(int i=0; i<20; i++){
		
		if(A[i] == key){
			index = i;
			break;
		}
	}
	
	return index;
}

int main(){
	
	int A[20];
	srand(time(NULL));
	
	for(int j=0; j<20; j++){
		
		A[j] = (rand() % 50)+1;
		
	}
	cout<<"Array Elements Are : \n";
	for(int j=0; j<20; j++)
	{
		
		cout<<A[j]<<" ";
		
	}
	
	int option;	
	int key;
	int extra;
	do{
	
	
	cout<<"\n Enter the key to be found: ";
	cin>>key;
	extra = search(A, key);
	if(extra == -1)
	{
		cout<<"\n Key is not found ";
	}
	else
	{
		
		cout<<"\n Key "<<key<< " is found at index "<<extra;
	}
	
	cout<<"\n\n\n Do u want to repeat Yes(1) ";
	cin>>option;
	}while(option == 1);
	
	return 0;
}
