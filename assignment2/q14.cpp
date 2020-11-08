#include<iostream>
using namespace std;
#define MAX 300
int main ()
{   int n,i,j,k,it,passes=0;
    bool swapped = true;
    char c[MAX][MAX],temp[MAX];
    cout << "Enter number of students : ";
    cin >> n;
    cout << "Enter names of students: ";
    
    for(i=0;i<n;i++){
        //cin.get(c[i],MAX);
        cin >> c[i];
    }
    //for(it=0;it<n-1;it++)
    while(swapped){  //while until sorted
        swapped = false;
    for(i=0;i<n;i++){ //for iterating through words
        
        for(j=0;c[i+1][j]!='\0';j++){ // for iterating through each letter
            if(c[i][j]==c[i+1][j]){
                
                continue;
                }
            else if(c[i][j]>c[i+1][j]){
                swapped = true;
                //swap c[i][j] and c[i+1][j]
                for(k=0;c[i][k]!='\0' ;k++){
                temp[k] = c[i][k];
                }
                temp[k]='\0';
                for(k=0;c[i+1][k]!='\0' ;k++){
                    c[i][k] = c[i+1][k];

                }
                c[i][k]='\0';
                for(k=0;temp[k]!='\0' ;k++){
                    c[i+1][k] = temp[k];

                }
                c[i+1][k] = '\0';
                break;

            }else{ 
                
                    break;
             }
         }
        
        }
        if(!swapped){
            //cout << "Done" <<endl;
            break;
        }
        passes++;  //counting num of passes
    
    }



    cout << "The number of passes is : " << passes <<endl;
    
    //Printing output
     for(i=0; i<n;i++){
        
        cout << c[i];
        
        cout <<endl;
    }

    
    
    
    
    
    
    
    return 0;
}