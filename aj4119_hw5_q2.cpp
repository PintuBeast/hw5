#include<iostream>
using namespace std;
void printShiftedTriangle(int n, int m, char symbol);

void printShiftedTriangle(int n, int m, char symbol)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m+n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*(i-1)+1;k++)
        {
            cout<<symbol;
        }
        cout<<"\n";
    }

}

void printPineTree(int n, char symbol);

void printPineTree(int n, char symbol)
{
    for(int i=1;i<=n;i++)
    {
        printShiftedTriangle(i+1,n-i,symbol);
       
    }

}



int main()
{  
    int num;
    char symbol;
    cout<<"Please enter a positive integer and a character\n";
    cin>>num>>symbol;
    printPineTree(num,symbol);
      
    return 0;
}