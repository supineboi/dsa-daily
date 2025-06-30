#include<iostream>
using namespace std;

/*
    Search the second largest element index in the array
*/

int main(){

    // Naive Approach - 2 travelsal
    int arr[]{2,14,4,23,20,8};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    int largestElementIndex = 0;
    int secLargestElement = -1;

    for(int i=1; i< arrSize; i++){
        if(arr[largestElementIndex] < arr[i]){
            largestElementIndex = i;
        }
    }
    
    for(int j=1; j< arrSize; j++){
        if(arr[largestElementIndex] != arr[j]){
            if(secLargestElement == -1){
                secLargestElement = j;
            } else if(arr[secLargestElement] < arr[j]){
                secLargestElement = j;
            }
        }
    }

    cout<<"Naive Approach Results -->>"<<endl;
    cout<<"First Largest Element Index : "<<largestElementIndex<<endl;
    cout<<"Second Largest Element Index : "<<secLargestElement<<endl;
    cout<<endl;
    
    // efficient approach - 1 travelsal
    largestElementIndex = 0;
    secLargestElement = -1;
    
    for(int k=1;k<arrSize; k++){
        if(arr[largestElementIndex] < arr[k]){
            secLargestElement = largestElementIndex;
            largestElementIndex = k;
        } else if(arr[k] != arr[largestElementIndex]){
            if(secLargestElement == -1 || arr[secLargestElement] < arr[k] ){
                secLargestElement = k;
            }
        }
    }

    cout<<"Efficient Approach Results -->>"<<endl;
    cout<<"First Largest Element Index : "<<largestElementIndex<<endl;
    cout<<"Second Largest Element Index : "<<secLargestElement<<endl;
    
    // Time Complexity: O(n)
    // Space Complexity: O(1)

    return 0;
}