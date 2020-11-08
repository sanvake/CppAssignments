#include <stdio.h>
#include <iostream>

using namespace std; 

int main(){
    int units;
    float bill;
    cout<<"Enter units consumed\n";
    cin>>units;
    if(units<=150){
        bill=units*3;
    }
    else if(units>150&&units<=350){
        bill=100+(units-150)*3.75;
    }
    else if(units>350&&units<=450){
        bill=250+(units-350)*4;
    }
    else if(units>450&&units<=600){
        bill=300+(units-150)*4.25;
    }
    else{
        bill=400+(units-600)*5;
    }
    cout<<"\nYour electricity bill is Rupees "<<bill<<"\n";
    return 0;
}