#include <stdio.h>
#include <iostream>

using namespace std; 

int main(){
    int a,b,c;
    a=1;
    for (b=0;b<5;b++){
        for(c=0;c<=b;c++){
            cout<<a<<" ";
            a++;
        }
        cout<<"\n";
    }
    return 0;
}