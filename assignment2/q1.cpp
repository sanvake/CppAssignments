//Assignment-2, Q1
//By Manu Govind,5th sem Mechanical
//Reg.no: 18GAEM9048 

#include <iostream>

using namespace std;




int main()
{   
    int arr[1000],n,sumgiv=0,sumact;
    
    cout << "Enter length of the array : ";
    cin >>n;

    cout << "Enter the numbers in the array :\n";

    sumact = (n*(n+1))/2;  //sum till nth term
    // Taking array input
    for(int k=0;k<n-1;k++){
        cin >> arr[k];
        sumgiv +=arr[k];
    }
    cout << "The missing number is : " << sumact-sumgiv << endl;

    

    
    

    return 0;
}
