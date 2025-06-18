#include<iostream>
using namespace std;

/*
    Delete the given element if its exist in the array than push fill the position by shifting the elements
*/

int main(){
    int n;
    cout<<"Provide Element that you want to delete :";
    cin>>n;

    int arr[]{7,3,9,13,26,17};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    bool isGotIt = false;
    for(int i=0; i< arrSize; i++){
        if(arr[i] == n or isGotIt){
            arr[i] = arr[i+1];
            isGotIt = true;
        }
    }

    for(int j=0;j< arrSize - (isGotIt ? 1 : 0); j++){
        cout<<arr[j]<<" ";
    }

    // Time Complexity: O(n)
    // Space Complexity: O(1)

    return 0;
}