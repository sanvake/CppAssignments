#include <iostream>


using namespace std;




int main()
{   
    int arr[100][100],i,j,sum=0,a,b;
    


    cout << "Enter the size of the 2D-array: " <<endl;
    cin >>a>>b;

    cout << "Enter the elements in the array :" <<endl;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cin >> arr[i][j];
            sum+=arr[i][j];
        }
        }

   
    cout << "Sum of all elements in the array = " << sum <<endl;
    cout << "Mean = " << sum/(a*b) << endl;
return 0;
}
