#include<iostream>
using namespace std;
int main ()
{   
    char c[200];
    cout << "Enter a name : ";
    cin.get(c,200);
    for(int i=0;c[i]!='\0';i++){
        if(c[i]>='A' && c[i]<='Z'){
            c[i]+=32;
        }
    }
    cout << "Lowercase : " << c ;
    
    return 0;
}