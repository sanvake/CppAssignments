#include <iostream>
#include <cmath>

using namespace std;




int main()
{   
    int num,arr[100][100],i,j,sum=0,a,b;
    


    cout << "Enter the size of the 2D-array: " <<endl;
    cin >>a>>b;

    cout << "Enter the elements in the array :" <<endl;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cin >> arr[i][j];
            if (i==j){
                sum+=arr[i][j];
            }
            
        }
        }

    
        
    cout << "Sum of all diagonal elements in the array = " << sum <<endl;
    
return 0;
}
