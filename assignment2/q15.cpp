#include<iostream>
using namespace std;
#define MAX 200
int main ()
{   int count=0,i,j,tempi,tempj;
    
    char c[MAX],pat[MAX];
    cout << "Enter text : ";
    cin >> c;
    cout << "Enter the pattern to search : \n" ;
    cin >> pat;
    //for(j=0;pat[j]!='\0';j++)
    for(i=0;c[i]!='\0';i++){
        j=0;
        
        tempi= i;
        
        while(c[i]==pat[j]&&c[i]!='\0'){
            i++;
            j++;

        }
        if (pat[j]=='\0'){
            count++;
            //cout << "Found one at " <<tempi <<endl;
            i = tempi;
        }
        
        
         
    
    }
        
        
    cout << "The number of times '" <<pat<<"' has appeared is : "<<count;
     
  
    
    return 0;
}