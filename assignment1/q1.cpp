#include <stdio.h>
#include <iostream>

using namespace std; 

int main(){
    int n;
    float f;
    cout<<"Enter a floating point number and an integer\n";
    cin>>f;
    cin>>n;
    if(f>4.14){
        n+=10;
    }
    cout<<"\n float: "<<f<<"\n integer: "<<n<<"\n";
    return 0;
}