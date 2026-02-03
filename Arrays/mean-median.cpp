#include<iostream>

using namespace std;

/*
    Mean: The average value of the given array.
    Median (sorted array needed): If the length is odd, the middle value is the median; 
            if the length is even, the median is the average of the two middle elements.
*/

// mean
int meanCalculate(int arr[], int n){
    int arr_sum = 0;
    for(int i=0; i<n; i++){
        arr_sum += arr[i];
    }
    return arr_sum/n;
}

// median
int medianCalculate(int arr[], int n){
    int i=0,j=0;

    while(){
        
    }
}

int main(){
    int arr[] = {1, 2, 19, 28, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int meanVal = meanCalculate(arr, n);
    int medianVal = medianCalculate(arr, n);

    cout<<"Mean equal to "<<meanVal<<endl;
    cout<<"Median equal to "<<medianVal<<endl;

    return 0;
}