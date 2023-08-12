#include<iostream>
using namespace std;

int fib(int n);

int fib(int n)
{
    int previous1=0,previous2=0,current=1;
    for (int i=1;i<=n;i++)
    {
        previous1=previous2;
        previous2=current;
        current=previous1+previous2;
        if(i==1 or i==2)
        {current=1;
        }
       
    }
    return current;
}
int main()
{  int num;
    cout<<"Please enter a positive integer: ";
    cin>>num;
    cout<<fib(num);
    return 0;
}