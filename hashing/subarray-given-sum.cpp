#include<iostream>
#include<unordered_set>

using namespace std;

/*
    Find Subarray is present or not of the given number sum
*/

int main(){
    unordered_set<int> hashT;
    int arr[] = {5, 8 , 6, 13, 3 , -1};
    int arrSize = sizeof arr/ sizeof arr[0];

    int n;
    cout<<"Enter the Number :: ";
    cin>>n;

    int preSum =0;
    int i =0;
    for(i; i<arrSize; i++){
        preSum += arr[i];

        if(preSum == n){
            cout<<"Subarray is present for the given number!"<<endl;
        }
        
        if(hashT.find(preSum - n) != hashT.end()){
            cout<<"Subarray is present for the given number!"<<endl;
        }

        hashT.insert(preSum);
    }

    if(i == arrSize){
        cout<<"Subarray is not present for the given number!"<<endl;
    }
    return 0;

    // Time Complexity : O(n)
    // Auxiliary Space : O(n)
}