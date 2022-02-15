#include <iostream>

using namespace std;

	int front= -1;
	int rear =-1;
	int arr[5];

bool isEmpty(){
	if(front == -1 && rear == -1){
		return true;
	}else{
		return false;
	}
}


bool isFull(){
	if(rear == 4){
		return true;
	}else{
		return false;
	}
}

void enqueue(int value){
	
	if(isFull()){
		cout<<"\n Queue is full ";
		return;
	
	}else if(isEmpty()){
		rear = 0;
		front = 0;
		arr[rear] = value;
	}else{
		rear++;
		arr[rear]=value;
	}
}



int dequeue(){
	int x;
	if(isEmpty()){
		cout<<"\n Queue is already empty ";
		return 0;
	}else if(front == rear){
		x = arr[front];
		arr[front]=0;
		rear = -1;
		front =  -1;
		return x;
	}else{
		x = arr[front];
		arr[front]=0;
		front++;
		return x;
	}
}

int count(){
	if(rear == -1 && front == -1){
		return 0;
	}else{
		return(rear - front + 1);
	}
}

void display()
{
	int i;
	if(isEmpty()){
		cout<<"\n Queue is empty, nothing for showing";
	}else{
		
		cout<<"\n All elements of queue are: ";
		for(i=front; i<rear+1; i++){
			cout<<arr[i]<<" ";
		}
	}
}


int main(){
	
	int value, option;
	
	do{
		
		
		cout<<"\n What operation would you like to perform on queue? Select 0 to exit \n";
		cout<<"1. Enqueue \n";
		cout<<"2. Dequeue \n";
		cout<<"3. isEmpty \n";
		cout<<"4. isFull \n";
		cout<<"5. count \n";
		cout<<"6. Display \n";
		cout<<"7. Clear screen \n";
		
		cin>>option;
		
		switch(option){
			
			case 0:
					cout<<"\n Good bye \n";
					break;
			case 1:
					cout<<"\n Enqueue operation \n Enter a value to enqueu to queue "<<endl;
					cin>>value;
					enqueue(value);
					break;
			case 2:
					cout<<"\n Dequeue operation \n Dequeued value: "<<dequeue()<<endl;
					break;
			case 3:
					if(isEmpty()){
						cout<<"\n Queue is empty "<<endl;
					}else{
						cout<<"\n Queue is not empty "<<endl;
					}
					break;
			case 4:
					if(isFull()){
						cout<<"\n Queue is full "<<endl;
					}else{
						cout<<"\n Queue is not full "<<endl;
					}
					break;
			case 5:
					cout<<"\n count operation \n count of items in queue: "<<count()<<endl;
					break;
			case 6:
					cout<<"\n Display function called ";
					display();
					cout<<endl;
					break;
			case 7:
					system("cls");
					break;
			default:
				cout<<"\n Incorrect input for queue operation ";
				break;
		}
		
	}while(option != 0);
	
		
	
	
	return 0;
}
