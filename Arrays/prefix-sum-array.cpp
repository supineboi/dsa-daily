#include<iostream>

using namespace std;

/*
    Prefix Sum Array: The prefix sum array of any array, 
        arr[] is defined as an array of same size say, 
        prefixSum[] such that the value at any index i in 
        prefixSum[] is sum of all elements from indexes 0 to i in arr[].
*/

int main(){
    int arr[] = {10, 20, 10, 5, 15};
    int arrLen = sizeof(arr)/sizeof(arr[0]);

    int temp[arrLen] = {arr[0]};

    for(int i=1; i<arrLen; i++){
        temp[i] = temp[i-1] + arr[i];
    }

    cout<<"Prefix Sum Array :: ";
    for(int i=0; i< arrLen; i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;

    // Time Complexity :: O(n)
    // Auxiliary Space :: O(n)

    return 0;
}