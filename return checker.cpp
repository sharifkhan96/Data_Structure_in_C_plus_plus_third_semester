#include <iostream>
#include <conio.h>
using namespace std;


// this program is just a checker that whether after executing the first if block having return, it will exit from the whole 
// khan function or it will simply execute the rest of statements like cout or another if block 
// after conducting the experiment, we realized that after executing the return statement, the program simple goes to the 
// end of khan function & come back to main...

void khan(int a, int b)
{
    if(b == 123)
    {
     return;       
      
    }
    if(a == 20)
    {
      cout<<"\n twenty "<<endl;
    }
    cout<<"hi";
}

int main()
{

    int a = 20;
    int b = 123;
    khan(a, b);

	getch();
    return 0;
}
