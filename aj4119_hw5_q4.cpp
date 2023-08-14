#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void printDivisors(int n);

void printDivisors(int n)
{
    string forwardString = " ", backwardString = " ";
    for(int i = 1 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            forwardString = forwardString + " " + to_string(i) ;
            if(i != n / i)
            {
                backwardString = to_string(n / i) +" "+ backwardString;
            }
        }
    }
    cout<<forwardString<<" "<<backwardString;

}
int main()
{
    int num;
    cout<<"Please enter a positive integer >=2: ";
    cin>>num;
    printDivisors(num);
    return 0;
}