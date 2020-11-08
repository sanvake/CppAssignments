#include<iostream>
using namespace std;
int main ()
{   
    int count=0;
    char c[200];
    cout << "Enter string : ";
    cin.get(c,200);
    for(int i=0;c[i]!='\0';i++){
        if(c[i]=='a'||c[i]=='A'||c[i]=='e'||c[i]=='E'||c[i]=='i'||c[i]=='I'||c[i]=='o'||c[i]=='O'||c[i]=='u'||c[i]=='U'){
            count++;
        }}

    cout << "Total number of vowels is : " << count ;
    
    return 0;
}