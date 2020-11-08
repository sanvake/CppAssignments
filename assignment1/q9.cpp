#include <stdio.h>
#include <iostream>

using namespace std; 

int main(){
    int dobd,dobm,doby,age,dated,datem,datey;
    cout<<"Enter today's date in dd mm yy format\n";
    cin>>dated>>datem>>datey;
    cout<<"Enter your date of birth in dd mm yy format\n";
    cin>>dobd>>dobm>>doby;
    datey+=2000;
    if(doby>50){
        doby+=1900;
    }
    else{
        doby+=2000;
    }
    age=datey-doby;
    if(datem<dobm){
         age-=1;
    }
    cout<<"\n Your age is:"<<age;
    return 0;
}