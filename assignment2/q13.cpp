#include<iostream>
using namespace std;
#define MAX 200
int main ()
{   int count=0,i,j=0;
    bool ispal = false;
    char c[MAX],crev[MAX];
    cout << "Enter a name : ";
    cin >> c;
    for(i=0;c[i]!='\0';i++){  //making it lowercase
        if(c[i]>='A' && c[i]<='Z'){
            c[i]+=32;  
        }
    }
    
    
    while(i >= 0){
        crev[j++] = c[--i];
        }
        crev[j] = '\0';
    for(i=0;c[i]!='\0';i++){
        if (c[i]!=crev[i]){
            cout << "The word is a not a palindrome";
            return 0;
            
        }else{
            cout << "The word is a palindrome";
            return 0;
        }
        
        }
    
    
    
    
    
    return 0;
}