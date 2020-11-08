#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std; 
  
int main(){   
    int n;
    cout<<"Enter number whose prime factors are to be found\n";
    cin>>n;
    cout<<"the prime factors of "<<n<<" is/are:\n";
    while (n % 2 == 0){  
        cout << 2 << " ";  
        n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2){  
        while (n % i == 0)  
        {  
            cout << i << " ";  
            n = n/i;  
        }  
    }  

    if (n > 2)  
        cout << n << " ";  
    return 0;    
} 