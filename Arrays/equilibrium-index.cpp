#include<iostream>

using namespace std;

/*
    Equilibrium Index ( balance node) => 
    when sum of element at the lower index is equal to the 
    sum of element at the higher index
*/
int main(){
    int arr[]{-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Naive Approach
    for(int i=0; i< n; i++){

        // sum of elements at lower index
        int lower_sum = 0;
        for(int j=i-1; j>=0; j--){
            lower_sum += arr[j];
        }

        // sum of elements at higher index
        int higher_sum = 0;
        for(int k=i+1; k<n; k++){
            higher_sum += arr[k];
        }

        if(lower_sum == higher_sum){
            cout<<"Equilibrium Index is (Naive Approach) :: "<<i<<endl;
            break;
        }
    }

    // Time Complexity :: O(n^2)
    // Auxiliary Space :: O(1)

    // Efficient Approach -> using prefix sum array
    for(int i=1; i<n; i++){
        arr[i] += arr[i-1];
    }

    for(int i=0; i<n; i++){
        int left_sum = i!=0 ? arr[i-1] : 0;
        int right_sum = i != (n-1) ? arr[n-1] - arr[i] : 0;
        
        if(left_sum == right_sum){
            cout<<"Equilibrium Index is (Efficient Approach) :: "<<i<<endl;
            break;
        }
    }

    // Time Complexity :: O(n)
    // Auxiliary Space :: O(1)
    
    return 0;
}