#include<iostream>
#include <windows.h>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    int terms=0;
    int count=0;
    int sum=0;

    cout<<"FIBONACCI SERIES!!!"<<endl;
    cout<<"ENTER NUMBER OF TERMS:";
    cin>>terms;
    if(terms<=0)
    {
        cout<<"ENTER POSITIVE INTEGER!!!!!"<<endl;
    }
    else if(terms==1)
    {
        cout<<a;
    }
    else
    {
        cout<<"Fibonacci series with"<<" "<<terms<<" terms."<<endl;
        do
        {
         int series,sum;
         sum=a+b+1;
         series=+sum;
         cout<<" "<<series;
         count++;


        }while(count<terms);
    }




    return 0;
}
