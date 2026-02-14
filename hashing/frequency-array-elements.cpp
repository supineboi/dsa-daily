#include<iostream>
#include<unordered_map>

using namespace std;

/*
    Find the Number of Frequencies of the elements present in the array
*/

int main(){
    int arr[] = {10, 12 , 10, 15, 10, 20 , 12, 12};
    int n = sizeof arr/ sizeof arr[0];
    unordered_map<int, int> hashT;

    for(int i=0; i<n; i++){
        if(hashT.find(arr[i]) != hashT.end()){
            hashT[arr[i]] += 1;
        }else {
            hashT[arr[i]] = 1;
        }

        // more optimze solution 
        // hashT[arr[i]]++; as if key not present than it creates and assign it 0 value
    }
    for (auto &[key, value] : hashT) {
        cout << "Number " << key
            << " appears " << value << " times\n";
    }

    // Time Complexity : O(n)
    // Auxiliary Space : O(n)

    return 0;
}