//Assignment-2, Q3


#include <iostream>
#include <cmath>

using namespace std;




int main()
{   
    int num,arr[100][100],i,j,count=0,a,b;
    float mean;


    cout << "Enter the size of the 2D-array: " <<endl;
    cin >>a>>b;

    cout << "Enter the elements in the array :" <<endl;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
        cin >> arr[i][j];
        if (arr[i][j]!=0){
            count++;
        }
        }
    }

    cout << "The number of non-zero elements in the array : " << count <<endl;
return 0;
}
