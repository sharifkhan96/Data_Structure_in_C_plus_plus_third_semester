#include<iostream>
#include<conio.h>

using namespace std;

void ReverseArray(int arr[], int n)
{
    int i;
    if(n>0)
    {
        i=n-1;
        cout<<arr[i]<<"";
        ReverseArray(arr,i);
    }
}
int main()
{
    int n=5,i;
    int arr[n]; //= {1,2,3,4,5};
    cout<<"\n Enter the value for the array: ";
    for(int i=0; i<n; i++)
    {
    	cin>>arr[i];
	}
	cout<<"Before reversing. \n";
    for(int i=0; i<5; i++)
    {
    	cout<<arr[i]<<"  ";
	}
    cout<<endl<<"After reversing Array Element Are.\n";
    ReverseArray(arr,n);
    
	getch();
    return 0;
}
