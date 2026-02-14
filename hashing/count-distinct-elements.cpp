#include<iostream>
#include<unordered_set>
using namespace std;

/*
    Find the Count of the distinct elements present in the array
*/

int main(){
    unordered_set<int> hashT;
    int arr[] = {15, 12, 13, 12, 13, 13, 18}; // solution: 4
    int arrSize = sizeof arr/ sizeof arr[0];

    int distinctCount = 0;
    for(int i=0; i< arrSize; i++){
        if(hashT.find(arr[i]) == hashT.end()){
            distinctCount++;
        }
        hashT.insert(arr[i]);
    }
    cout<<"Count of the distinct elements in the array :: "<<distinctCount<<endl;

    return 0;

    // Time Complexity : O(n)
    // Auxiliary Space : O(n)
}