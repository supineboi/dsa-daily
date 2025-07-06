#include<iostream>
#include<climits>

using namespace std;

/*
    Second Largest Element in the array
*/

int main(){
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int largestElement = arr[0];
    int secondLargestElement = INT_MIN;

    for(int i=1; i<n; i++){
        if(largestElement < arr[i]){
            secondLargestElement = largestElement;
            largestElement = arr[i];
        }else if(largestElement != arr[i] && secondLargestElement < arr[i]){
                secondLargestElement = arr[i];
        }
    }

    cout<<"First Largest Element : "<<largestElement<<endl;

    if(secondLargestElement == INT_MIN){
        cout<<"Not Found second largest element"<<endl;
    } else {
        cout<<"Second Largest Element : "<<secondLargestElement<<endl;
    }
    
    // Time Complexity: O(n)
    // Space Complexity: O(1)

    return 0;
}