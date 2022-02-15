#include <iostream.>
#include <conio.h>
using namespace std;
int count;
class tower
{
	
	//int NoDisk;
	char FromTower, ToTower, AuxTower;
	
	public: 
			void hanoi(int, char, char, char);
			
	
};

void tower::hanoi(int NoDisk, char FromTower, char ToTower, char AuxTower)
{
	count+=1;
	// if only one disk, make the move and return
	if(NoDisk == 1)
	{
		cout<<"\n Move disk 1 from tower "<<FromTower<<" to tower "<<ToTower;
		
	    return;
	}
	
	// move top n-1 disks form X to Y, using Z as auxiliary tower
	hanoi(NoDisk-1, FromTower, AuxTower, ToTower);
	
	// move remaining disk form x to z
	cout<<"\n Move disk "<<NoDisk<<" from tower "<<FromTower<<" to tower "<<ToTower;
	
	//move n-1 disk form Y to Z using X as auxiliry tower 
	hanoi(NoDisk-1, AuxTower, ToTower, FromTower);
	return;
	
}

int main(){
	
	int No;
	char option;
	tower obj;
	//clrscr();
	cout<<"\n \t \t \t --- Tower of Hanoi --- \n ";
	
	do{
		count = 0;
	// input the number of disk in the tower
	cout<<"\n Enter the nubmer of disk: ";
	cin>>No;
	
	// we assume that the towers are X, Y and Z
	obj.hanoi(No, 'X', 'Z', 'Y');
	cout<<"\n count : "<<count;
	
	cout<<"\n Do U want to repeat the Tower of Hanoi? Yes(y), No(n): ";
	cin>>option;
}while(option == 'y');
	cout<<"\n press any key to exit... ";
	getch();
	
	return 0;
}
