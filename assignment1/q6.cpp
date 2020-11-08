#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int n1,n2;
    cin >> n1 >> n2 ;
    cout << endl;


    if (n1%n2==0){
        cout << n1 << " is a multiple of " << n2  << endl;
    }else{
        cout << n1 << " is not a multiple of " << n2  << endl;
    }
    return 0;
}