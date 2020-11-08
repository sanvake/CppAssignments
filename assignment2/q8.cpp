//Assignment-2, Q3


#include <iostream>


using namespace std;




int main()
{   
    int num,arr[100][100],i,j,a,b,odd[100],even[100],oddi=0,eveni=0;
    float mean;


    cout << "Enter the size of the 2D-array: " <<endl;
    cin >>a>>b;

    cout << "Enter the elements in the array :" <<endl;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
        cin >> arr[i][j];
        if (arr[i][j]%2){
            odd[oddi]=arr[i][j];
            oddi++;
            }
        else{
            even[eveni]=arr[i][j];
            eveni++;
        }
        }
    }

    cout << "Odd array : ";
    for(i=0;i<oddi;i++)
        cout << odd[i]<<" ";
    cout << endl;
    cout << "Even array : ";
    for(i=0;i<eveni;i++)
        cout << even[i]<<" ";

return 0;
}
