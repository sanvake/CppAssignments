#include <stdio.h>
#include <iostream>
#include <math.h>

#define PI 3.14159265 

using namespace std; 
  
int main(){   
    int i,k=0;
    cout<<"sine values of:\n";
    for(i=0;i<=360;i+=15){
        if(i<=90){
            k=i;
            cout<<"sin("<<i<<")="<<sin(k*PI/180)<<"\n";
        }
        else if(i<=180){
            k=180-i;
            cout<<"sin("<<i<<")="<<sin(k*PI/180)<<"\n";
        }
        else if(i<=270){
            k=i-180;
            cout<<"sin("<<i<<")=-"<<sin(k*PI/180)<<"\n";
        }
        else if(i<=360){
            k=270-i;
            cout<<"sin("<<i<<")="<<sin(k*PI/180)<<"\n";
        }
    }
    return 0;    
} 