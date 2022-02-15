#include <iostream>
using namespace std;
int linearSearch(int a[], int size, int key);
void linearSearch2(int a[][4], int r, int c, int key);

int main()
{
	int numbs[] = {2, 9, -1, 4, 3};
	cout<<"Enter a value to search for: ";
	int value;
	cin>>value;
	int index = linearSearch(numbs, 5, value);
	if(index != -1)
	{
		cout<<value<<" found at index "<<index<<endl;
	}
	else
		cout<<value<<" was not found in the array.\n";
		
//	int a[][4] = {{2, 5,1,6}, {8,1, 6, 7}};
//	linearSearch2(a, 2, 4, 8);
	return 0;
}

int linearSearch(int a[], int size, int key)
{
	for(int i=0; i<size; i++)
		if(key == a[i])
			return i;
		
	return -1;
}


void linearSearch2(int a[][4], int r, int c, int key)
{
	int i, j;
	bool isFound = false;
	for(i=0; i<r; i++)
		for(j=0; j<c; j++)
			if(key == a[i][j])
			{
				isFound = true;
				break;
			}
	if(isFound)
		cout<<key<<" found at row "<<i<<" and column "<<j<<endl;
	else
		cout<<key<<" was not found.\n";
}
