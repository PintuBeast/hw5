#include<iostream>
using namespace std;
double factorial=1.0;

double eApprox(int n)
{ 
    double e = 1.0;
    factorial = 1.0;
    for(int i = 1 ; i <= n ; i++)
    {   factorial *= i;
        e += 1.0 / factorial; 
        
    }
    return e;
}
int main()
{
    
    int num;
    cout<<"Please enter a positive integer n: ";
    cin>>num;

    cout.precision(30);

    for(int n = 1 ; n <= num ; n++)
    {   
        cout<<"n = "<<n<<"\t"<<eApprox(n)<<"\n";
    }
    
    
    return 0;
}