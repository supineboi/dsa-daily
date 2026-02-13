#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    unordered_map<int,int> hashT;
    int arr[] = {8, 3, 1, 5, -6, 6 , 2, 2};
    int arrSize = sizeof arr/ sizeof arr[0];

    int n;
    cout<<"Enter the Number :: ";
    cin>>n;

    int preSum = 0;
    int largestSubArray = 0;

    for(int i=0; i<arrSize; i++){
        preSum += arr[i];

        if(preSum == n){
            largestSubArray = i+1;
        }

        if(hashT.find(preSum) == hashT.end()){
            hashT[preSum] = i;
        }

        if(hashT.find(preSum - n) != hashT.end()){
            largestSubArray = max(i - hashT[preSum - n] , largestSubArray);
        }
    }

    cout<<"Largest Subarray length :: "<<largestSubArray<<endl;

    return 0;

    // Time Complexity : O(n)
    // Auxiliary Space : O(n)
}