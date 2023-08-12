#include<iostream>
using namespace std;
int printMonthCalender(int numOfDays, int startingDay);
int printMonthCalender(int numOfDays, int startingDay)
{
    int dayCounter, dayNumber;
    dayCounter=startingDay;
    dayNumber=1;
    cout<<"Mon\tTue\tWed\tThr\tFri\tSat\tSun\n";
    for(int i=1;i<=dayCounter-1;i++)
    {
        cout<<"\t";
    }
    while(dayNumber<=numOfDays)
    {
        cout<<dayNumber<<"\t";
        if(dayCounter%7==0)
        {
            dayCounter=1;
            cout<<"\n";
        }
        else
        {
            dayCounter++;
        }
        dayNumber++;
    }
    if(dayCounter==1)
    {
        dayCounter=8;

    }
    
    return dayCounter-1;

}
int main()
{   
    int numDays,startingDay;
    cout<<"Please enter the number of Days and the starting day(Monday=1 to Sunday=7): ";
    cin>>numDays>>startingDay;
    int x= printMonthCalender(numDays,startingDay);
    cout<<"\n The last day of the Month is: "<<x;

}