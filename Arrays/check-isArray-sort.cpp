#include<iostream>
using namespace std;

/*
    Check if an array is sorted or not (ascending order)
*/

void isSorted(int arr[], int arrSize){
    int i;
    for(i=1; i< arrSize; i++){
        if(arr[i] < arr[i-1]){
            cout<<"Array is not sorted"<<endl;
            break;
        }
    }

    if(i == arrSize){
        cout<<"Array is sorted"<<endl;
    }

    // Time Complexity: O(n)
    // Space Complexity: O(1)
}

int main(){
    int arr1[]{4,9,14,19};
    int arr2[]{4,9,5,19};

    int arr1Size = sizeof(arr1)/sizeof(arr1[0]);
    int arr2Size = sizeof(arr2)/sizeof(arr2[0]);

    isSorted(arr1, arr1Size);
    isSorted(arr2, arr2Size);

    return 0;
}