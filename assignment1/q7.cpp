#include <stdio.h>
#include <iostream>
#include <algorithm>


using namespace std;



int main()
{
    int n1,n2,n3,checknum;
    cout<<"Enter 3 numbers";
    cin>>n1>>n2>>n3;
    cout<<"\n1 ---- Calculate Total\n2 ---- Calculate Average\n3 ---- Display the smallest value\n4 ---- Display the largest value\n"<<endl;
    check:
    cin>>checknum;
    
    switch(checknum) {
    case 1: // For calculating total
        cout<<n1+n2+n3;
        break;
    case 2: // For calculating average
        cout<<(n1+n2+n3)/3;
        break;
    case 3: // For displaying the smallest value
        cout<<min(n1,min(n2,n3));
        break;
    case 4: // For displaying the largest value
        cout<<max(n1,max(n2,n3));
        break;
    default:
        cout<<"\nPlease enter one of the aforementioned numbers"<<endl;
        goto check;
    
}
    return 0;
}