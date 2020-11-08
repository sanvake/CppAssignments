#define MAX 10

#include <iostream>

using namespace std;




int main()
{   
    int arr1[MAX][MAX],r1,c1,arr2[MAX][MAX],r2,c2,fin=0,i,j;

    cout << "Enter rows and columns for first matrix: "<<endl;
    cin >> r1 >> c1 ;
    cout << endl;
    cout << "Enter rows and columns for second matrix: "<<endl;
    cin >> r2 >> c2 ;
    cout << endl;

    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second."<<endl;

        cout << "Enter rows and columns for first matrix: "<<endl;
        cin >> r1 >> c1;
        cout << endl;
        cout << "Enter rows and columns for second matrix: "<<endl;
        cin >> r2 >> c2;
        cout << endl;
    }

    cout << "Enter elements of matrix A:"<<endl;
    for(i=0;i<r1;i++)
    {
        for( j=0;j<c1;j++)
        {
        cin >> arr1[i][j];
        }
    }
    cout << endl;
    
    cout << "Enter elements of matrix B:"<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
        cin >> arr2[i][j];
        }
    }
    cout <<endl;

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
            fin += arr1[i][k]*arr2[k][j] ;
            }
             cout << fin << " ";
             fin =0;
        }
       cout << endl;
    }




    return 0;
}
