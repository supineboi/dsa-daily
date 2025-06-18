#include<iostream>
using namespace std;

/*
    ( Unsorted Array )
    Search the given element and return its index, if now found than return -1
*/

int main(){
    int arr[]{4,16,13,8,12};
    int n;
    cout<<"Element that you want to search ? : ";
    cin>>n;

    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int i;

    for(i=0; i< arrSize; i++){
        if(arr[i] == n){
            cout<<"Element Index :"<<i<<endl;
            break;
        }
    }

    if(i == arrSize){
        cout<<"Element Not Found :"<<-1<<endl;
    }
    return 0;

    // Time Complexity: O(n)
    // Space Complexity: O(1)
}