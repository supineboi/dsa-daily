#include<iostream>

using namespace std;

/*
    Reverse An Array
*/

int main(){
    int arr[]{6, 2, 7, 10, 14, 0, 22};

    int arrLength = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i< arrLength/2; i++){
        int temp = arr[i];
        arr[i] = arr[arrLength - (i + 1)];
        arr[arrLength - (i + 1)] = temp;
    }
    
    cout<<"Reverse Array Elements :";
    for(int j=0; j< arrLength; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    // Time Complexity: O(n)
    // Space Complexity: O(1)

    return 0;
}