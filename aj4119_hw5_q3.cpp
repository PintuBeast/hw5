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
    cout<<"\n\n";
    return dayCounter-1;

}
bool isLeapYear(int year);

bool isLeapYear(int year)
{   bool isLeap =false;
    if(year % 400 ==0)
    {
        isLeap=true;
    }
    else if(year % 4==0 && year % 100 !=0)
    {
        isLeap=true;
    }
    return isLeap;

    
}

void printYearCalender(int year, int startingDay);

void printYearCalender(int year, int startingDay)
{
    
    for(int i=1;i<=12;i++)
    {
        switch(i)
        {
            case 1:
                cout<<"January "<<year<<"\n\n";
                startingDay=printMonthCalender(31,startingDay) % 7 + 1; 
                break;
            case 2:
                cout<<"February "<<year<<"\n\n";
                if(isLeapYear(year))
                {
                    startingDay=printMonthCalender(29,startingDay) % 7 + 1;
                }
                else
                {
                    startingDay=printMonthCalender(28,startingDay) % 7 + 1;

                }
                break;

            case 3:
                cout<<"March "<<year<<"\n\n";
                startingDay=printMonthCalender(31,startingDay) % 7 + 1; 
                break;            
            case 4:
                cout<<"April "<<year<<"\n\n";
                startingDay=printMonthCalender(30,startingDay) % 7 + 1; 
                break;            
            case 5:
                cout<<"May "<<year<<"\n\n";
                startingDay=printMonthCalender(31,startingDay) % 7 + 1; 
                break; 
            case 6:
                cout<<"June "<<year<<"\n\n";
                startingDay=printMonthCalender(30,startingDay) % 7 + 1; 
                break;                   
            case 7:
                cout<<"July "<<year<<"\n\n";
                startingDay=printMonthCalender(31,startingDay) % 7 + 1; 
                break;  
            case 8:
                cout<<"August "<<year<<"\n\n";
                startingDay=printMonthCalender(31,startingDay) % 7 + 1; 
                break; 
            case 9:
                cout<<"September "<<year<<"\n\n";
                startingDay=printMonthCalender(30,startingDay) % 7 + 1; 
                break;   
            case 10:
                cout<<"October "<<year<<"\n\n";
                startingDay=printMonthCalender(31,startingDay) % 7 + 1; 
                break;    
            case 11:
                cout<<"November "<<year<<"\n\n";
                startingDay=printMonthCalender(30,startingDay) % 7 + 1; 
                break;  
            case 12:
                cout<<"December "<<year<<"\n\n";
                startingDay=printMonthCalender(31,startingDay) % 7 + 1; 
                break;                                                                                
        }
    }

}
int main()
{   
    int year,startingDay;
    
    cout<<"Please enter a year and the starting day(Monday=1 to Sunday=7): ";
    cin>>year>>startingDay;
    //int x= printMonthCalender(numDays,startingDay);
   // cout<<"\n The last day of the Month is: "<<x;
    
    printYearCalender(year,startingDay);

}