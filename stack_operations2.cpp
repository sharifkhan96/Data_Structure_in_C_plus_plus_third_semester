#include <iostream>

using namespace std;

class STACK{
	
	private:
		int top;
		int stack[5];
		
		public: 
			STACK(){
				
				top = -1;
				for(int i=0; i<5; i++){
					
					stack[i] = 0;
					
				}
				
			}
		
		
		bool isFull(){
			
			if(top == 4){
				return true;
			}else{
				return false;
			}	
		}
	
		bool isEmpty(){
			
			if(top == - 1){
				return true;
			}else{
				return false;
			}	
		}
		
		void push(int value){
			
			if(isFull()){
				cout<<"\n stack overflow \n ";
			}else{
				top++;
				stack[top]=value;
			}
			
		}
		
		int pop(){
			
			if(isEmpty()){
				cout<<"\n stack underflow \n ";
				return 0;
			}else{
				int poptemp  = stack[top];
				stack[top]=0;
				top--;
				return poptemp;
			}
			
		}
		
		
		void display(){
			
			cout<<"\n all values in the stack are: \n";
			for(int i=4; i>=0; i--){
				cout<<stack[i]<<endl;
			}
			
		}
		
		void change(int pos, int value){
			
			stack[pos] = value;
			cout<<"the "<<value<<" value changed at location "<<pos<<endl;
			
		}
		
		
		int peek(int pos){
			
			if(isEmpty()){
				
				cout<<"stack underflow \n";
				return 0;
				
			}else{
				
				return stack[pos];
				
			}
			
		}
		
		int count(){
			return (top + 1);
		}
		
};


int main(){
	
	STACK STK;
	int option, pos, value, countemp;
	
	
	do{
			cout<<"\n Enter your choice for operating on the stack: Enter 0 to exit \n";
			cout<<"\n 1: Push() ";
		    cout<<" 2: Pop() ";
		    cout<<" 3: Print of stack() ";
		    cout<<" 4: isFull() ";
		    cout<<" 5: isEmpty() ";
		    cout<<" 6: change() ";
		    cout<<" 7: count() ";
			cout<<" 8: peek() ";
			cout<<" 9: clear screen \n";
			
			cin>>option;
		
			switch(option){
				
				case 1: 
						cout<<"\n enter any value to push into the stack: ";
						cin>>value;
						STK.push(value);
						break;
						
				case 2: 
						cout<<"Popped value is: "<<STK.pop()<<endl;
						break;
						
				case 3: 
						STK.display();
						break;
				
				case 4:
						if(STK.isFull()){
							cout<<"\n stack is FULL \n";
						}else{
							cout<<"\n stack is NOT full \n";
						}
						break;
						
				case 5:
					
						if(STK.isEmpty()){
							cout<<"\n Stack is EMPTY \n";
						}else{
							cout<<"\n Stack is NOT EMPTY \n";
						}
						break;
						
				case 6:
					
						cout<<"\n enter the postion where u want insertion: ";
						cin>>pos;
						cout<<"\n enter new value for the "<<pos<<" postion: ";
						cin>>value;
						STK.change(pos, value);
						break;
						
						
				case 7:
					    countemp = STK.count();
						cout<<"\n Number of items in the stack are: "<<countemp<<endl;
						break;
						
				case 8:
						cout<<"\n enter the postion where u want to access the element: ";
						cin>>pos;
					    cout<<"value at position "<<pos<<" is "<<STK.peek(pos);
						break;
						
				case 9:
						system("cls");
						break;
						
				default: 
						cout<<"\n enter proper option "<<endl;
				
			}
		
	}while(option != 0);
	
	return 0;
}
