#include<iostream>
using namespace std;

/*
    Insert element in the array at a given position
*/

int main(){
    int n,pos;
    cout<<"Element to be insert : ";
    cin>>n;

    cout<<"Element at a position : ";
    cin>>pos;

    int arr[5] = {6, 2, 10, 14};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    for(int i=arrSize-1; i>=pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = n;
    
    for (int j = 0; j < arrSize; j++)
    {
        cout<<arr[j]<< " ";
    }

    return 0;

    // Time Complexity: O(n)
    // Space Complexity: O(1)
}