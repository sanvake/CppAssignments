#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std; 
  
int main(){   
    int n,p=0,i=0,k=0;
    cout<<"Enter number to test\n";
    cin>>n;
    if( n%2!=0){
        cout<<n<<" is not a power of 2\n";
        return 0;
    }
    while(p<=n){
        p=pow(2,i);
        if(p==n){
            k=1;
            break;
        }
        i++;
    }
    if(k==1)
        cout<<n<<" is the "<<i<<"th power of 2\n";
    else
        cout<<n<<" is not a power of 2\n";
    return 0;    
} 