//Assignment-2, Q3


#include <iostream>
#include <cmath>

using namespace std;




int main()
{   
    int num,arr[100],checknum,i;
    float mean=0,variance=0,sum=0;


    cout << "Enter the number of elements in the array: " <<endl;
    cin >> num;

    cout << "Enter the elements in the array :" <<endl;
    for(i=0;i<num;i++)
        cin >> arr[i];


    //Calculating sum
    for(i=0;i<num;i++){
        sum +=arr[i];
    }

    //Calculating Variance
    
    for(i=0;i<num;i++){
        variance += pow(arr[i]-(sum/num),2);
    }
    variance /=num;


    cout << endl << "1 ---- Sum\n2 ---- Mean\n3 ---- Variance\n4 ---- Standard Deviation\n"<<endl;
    
    cin >> checknum;
    cout <<endl;
    
    switch(checknum) {
  case 1: // For total
    
    cout << "Sum of all elements = " << sum ;
    break;
  case 2: // For mean
    cout << "Mean = " << sum/num;
    break;
  case 3: // For variance
    cout <<"Variance = " << variance ;
    break;
  case 4: // For Standard deviation
    cout << "Standard deviation = " << sqrt(variance);
    break;
  default:
    cout << "Please enter any one of the aforementioned numbers";
    break;
    }
return 0;
}
