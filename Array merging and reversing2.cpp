#include<iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;
void Marge(int *t1,int *t2,int N);
void Reverse(int *M);
int main()
{ 
	int s = 5;
	int *p1 = new int[s];
	int *t1 = p1;
	cout<<"Enter the elements of first array\n";
	for (int i=0; i<s; i++)
	{
		cin>>p1[i];
	}
	cout<<"First Array Elements: "<<endl;
	for (int i=0; i<5; i++)
	{ 
    	cout<<p1[i]<<"  ";
	}
 	cout<<endl<<endl;
	t1 = p1;
	
//====================================
	
	int *p2 = new int[s];
	int *t2 = p2;
	cout<<"Enter the elements of second array\n";
	for (int i=0; i<s; i++)
	{
		cin>>p2[i];
	}
	cout<<"Second Array Elements:\n"<<endl;
	for (int i=0; i<5; i++)
	{ 
    	cout<<p2[i]<<"  ";
	}
	cout<<endl;
	t2 = p2;
	cout<<endl<<"================   Marge Function    ===============\n"<<endl;
	Marge(t1,t2, s);
}

void Marge(int *t1,int *t2,int N)
{
	int size = N*2;
	int *Marge_elements = new int[size];
	int *M = Marge_elements;
	for (int i=0; i<size; i++)
	{
    	Marge_elements[i] = *t1;
		t1++;
    	i++;
    	Marge_elements[i] = *t2;
    	t2++;
	}
	for(int i=0; i<size; i++)
	{
		cout<<Marge_elements[i]<<"  ";
	}
	M = Marge_elements;
	cout<<endl;
	cout<<endl<<"================   Reverse Function    ===============\n"<<endl;
	Reverse(M);
}

void Reverse(int *M)
{
	for(int i=9; i>=0; i--)
	{
		cout<<M[i]<<"  ";
	}
}
