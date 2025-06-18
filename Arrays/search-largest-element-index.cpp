#include<iostream>
using namespace std;

/*
    search the largest element index in the array
*/

int main(){
    int arr[]{8,10,23,20,21};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    int largestEleIndex = 0;

    for(int i=1; i< arrSize; i++){
        if(arr[i] > arr[largestEleIndex]){
            largestEleIndex = i;
        }
    }

    cout<<"Largest Element : "<<largestEleIndex<<endl;
    
    return 0;
    
    // Time Complexity: O(n)
    // Space Complexity: O(1)
}