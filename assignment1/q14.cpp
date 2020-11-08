#include <stdio.h>
#include <iostream>

using namespace std; 

int main(){
    int n,d=0,t;
    cout<<"Enter a number\n";
    cin>>n;
    t=n;
    while(t!=0){
        d++;
        t/=10;
    }
    cout<<"\n digits in "<<n<<": "<<d<<"\n";
    return 0;
}