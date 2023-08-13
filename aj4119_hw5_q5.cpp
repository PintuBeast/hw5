#include<iostream>
#include<cmath>
#include<string>
using namespace std;
long outSumDivs=0,outCountDivs=0;
string strPerfect=" ",strAmicable=" ";
void analyzeDividors(long num, long& outCountDivs, long& outSumDivs);

void analyzeDividors(long num, long& outCountDivs, long& outSumDivs)
{
    outCountDivs = 1;
    outSumDivs = 1;
    for(long i=2;i<=sqrt(num);i++)
    {
        if(num % i == 0)
        {   outCountDivs +=2;
            outSumDivs += i+ num/i;
        }
    }
   // cout<<"Number of Divisors:"<<outCountDivs<<"\nSum of Divisors:"<<outSumDivs<<"\n"; 
}

bool isPerfect(long num);

bool isPerfect(long num)
{
    bool outPerfect=false;
    analyzeDividors(num, outCountDivs,  outSumDivs);
    if(outSumDivs==num)
    {
        outPerfect=true;
    }
    return outPerfect;
 
}

int main()
{
    long num,temp=0;;
    cout<<"Please enter a positive integer >=2: ";
    cin>>num;
    long i=2;
    while(i<=num)
    {   
        if(isPerfect(i))
        {
          //  cout<<"Found Perfect:"<<i<<"\n";
            strPerfect += to_string(i)+" ";
        }
        else if(outSumDivs<=num && outSumDivs > i)
        {
            temp = outSumDivs;
            isPerfect(temp);
            if(i == outSumDivs )
            {
               // cout<<" Found Amicable pairs "<<i<<" and "<<temp<<"\n";
                strAmicable += "(" + to_string(i)+", "+ to_string(temp)+")  ";
                temp=0;
            }    
        }
        i++;
    }

    
    cout<<"Perfect Numbers: "<<strPerfect<<"\n"
        <<"Amicable Numbers: "<<strAmicable;
    return 0;
}