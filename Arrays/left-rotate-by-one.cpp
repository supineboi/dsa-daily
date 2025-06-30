#include<iostream>

using namespace std;

/*
    Left rotate an array by one
*/

int main(){
    int arr[]{6, 2, 10, 14};
    int arrLength = sizeof(arr)/sizeof(arr[0]);

    int firstElement = arr[0];

    for(int i=1; i < arrLength; i++){
        arr[i-1] = arr[i];
    }
    arr[arrLength - 1] = firstElement;

    cout<<"Final Array :";
    for(int j=0; j< arrLength; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    // Time Complexity: O(n)
    // Space Complexity: O(1)

    return 0;
}