#include<iostream>
using namespace std;
int main ()
{   
    char c[200];
    cout << "Enter a name : ";
    cin.get(c,200);
    for(int i=0;c[i]!='\0';i++){
    cout << "ASCII value of " << c[i] <<" is :  " << (int)c[i]<<endl;
    }
    return 0;
}