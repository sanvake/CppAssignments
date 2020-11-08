#include <stdio.h>
#include<iostream>

using namespace std;


int main()
{
    int dividend,divisor,rem;
    float quo;
    cout<<"Enter dividend and divisor\n";
    cin>>dividend>>divisor;
    if (divisor>0){
        quo=dividend/divisor;
        rem=dividend%divisor;
        cout<<"Remainder : "<<rem;
        cout<<"Quotient : "<<quo;
    }
    return 0;
}