#include<iostream>
#include<unordered_map>
#include<algorithm>

using namespace std;

/*
    Find Longest Subarray containing equal number of 0s and 1s
*/
int main(){
    unordered_map<int,int> hashT;
    int arr[] = {1, 0, 1, 1, 1, 0, 0}; // solution: 6
    int arrSize = sizeof arr/ sizeof arr[0];

    // think like normal find largest subarray of the given sum problem
    // approach: replacing 0 with -1 so that subarray sum == 0

    for(int i=0; i<arrSize; i++){
        if(arr[i] == 0){
            arr[i] = -1;
        }
    }
    // new arr = {1, -1, 1, 1, 1, -1, -1}

    int preSum = 0;
    int largestLen = 0;

    for(int j = 0; j<arrSize; j++){
        preSum += arr[j];

        if(preSum == 0){
            largestLen = j+1;
        }

        if(hashT.find(preSum) == hashT.end()){
            hashT[preSum] = j;
        }

        if(hashT.find(preSum) != hashT.end()){
            largestLen = max(largestLen, j - hashT[preSum]);
        }
        
    }

    cout<<"Longest Length of the Subarray :: "<<largestLen<<endl;

    return 0;

    // Time Complexity : O(n)
    // Auxiliary Space : O(n)
}