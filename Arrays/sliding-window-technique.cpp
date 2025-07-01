#include<iostream>

using namespace std;

/*
    Sliding Window Technique 
    Our aim is to calculate the maximum sum of 'k' 
    consecutive elements in the array.
*/

int main(){
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int arrLength = sizeof(arr)/sizeof(arr[0]);

    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    
    // Naive Approach 

    int max_sum = 0;
    for(int i=0;i<=arrLength - k; i++){
        int k_sum = 0;

        for(int j=i; j<k+i; j++){
            k_sum += arr[j];
        }
        if(k_sum > max_sum){
            max_sum = k_sum;
        }
    }

    cout<<"Maximum sum of k :"<<max_sum<<endl;

    // Time Complexity: O(n*k)
    // Space Complexity: O(1)
    
    // Using Sliding Technique
    int window_sum = 0;
    for(int i=0; i<k; i++){
        window_sum += arr[i];
    }
    
    int window_max_sum = window_sum;
    for(int j=k; j< arrLength; j++){
        window_sum += arr[j] - arr[j-k];
        
        if( window_max_sum < window_sum){
            window_max_sum = window_sum;    
        }
    }

    cout<<"Maximum sum of k (using sliding window technique):"<<window_max_sum<<endl;

    // Time Complexity: O(n)
    // Space Complexity: O(1)

    return 0;
}