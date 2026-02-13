#include<iostream>
#include<unordered_set>
using namespace std;

/*
    Find Subarray with zero sum is present or not
*/

int main(){
    unordered_set<int> hashT;

    int n;
    cout<<"Enter the length of the Input Elements :: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the Elements :: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int preSum = 0;
    int i =0;
    for(i; i<n; i++){
        preSum += arr[i];

        if(preSum == 0 ){ // Can avoid this by initially puttin 0 as the value in the hash table
            cout<<"Given Array of Elements contain Zero sum subarray!"<<endl;
            break;
        }
        
        if(hashT.find(preSum) != hashT.end()){
            cout<<"Given Array of Elements contain Zero sum subarray!"<<endl;
            break;
        }
        
        hashT.insert(preSum);
    }

    if(i == n){
        cout<<"Given Array of Elements doesn't contain Zero sum subarray!"<<endl;
    }
    return 0;

    // Time Complexity : O(n)
    // Auxiliary Space : O(n)
}