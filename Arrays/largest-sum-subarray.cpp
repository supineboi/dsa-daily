#include<iostream>
#include<climits>

using namespace std;

/*
    Find out the largest sum of the subarray
*/

int main(){
    int arr[]{-3, 4, -1, -2, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Naive approach 
    int largest_sum = INT_MIN;
    
    for(int i=0; i<n; i++){
        int subArray_sum = 0;
        for(int j=i; j<n; j++){
            subArray_sum += arr[j];

            if(subArray_sum > largest_sum){
                largest_sum = subArray_sum;
            }
        }
    }

    cout<<"Largest sum of the subarray :: "<<largest_sum<<endl;

    // Time Complexity :: O(n^2)
    // Auxiliary Space :: O(1)

    // Efficient Approach -> using kadane's algorithm
    int max_so_far = INT_MIN;
    int max_ending_here = 0;

    for(int i=0; i<n; i++){
        max_ending_here += arr[i];

        if(max_so_far < max_ending_here){
            max_so_far = max_ending_here;
        }

        if(max_ending_here < 0){
            max_ending_here = 0;
        }
    }
    cout<<"Largest sum of the subarray using kadane's :: "<<max_so_far<<endl;

    // Time Complexity :: O(n)
    // Auxiliary Space :: O(1)
    
    return 0;
}