#include<iostream>

using namespace std;

/*
    Remove Duplicate from the sorted array
*/

int main(){
    int arr[]{10,20,20,20,30,30};
    int arrLength = sizeof(arr)/sizeof(arr[0]);

    int res = 1;
    for(int i=1; i< arrLength; i++){
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }

    cout<<"Final Array :";
    for(int j=0; j< res; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    // Time Complexity: O(n)
    // Space Complexity: O(1)

    return 0;
}