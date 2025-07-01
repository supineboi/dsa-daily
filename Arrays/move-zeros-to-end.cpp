#include<iostream>

using namespace std;

/*
    Move zeros to end
*/

int main(){
    int arr[]{8,5,0,4,0,0,10,2};
    int arrlength = sizeof(arr)/sizeof(arr[0]);

    // Naive Approach
    for(int i=0; i<arrlength; i++){
        if(arr[i] == 0){
            for(int j=i+1;j<arrlength; j++){
                if(arr[j] != 0){
                    arr[i] = arr[j];
                    arr[j] = 0;
                    break;
                }
            }
        }
    }

    cout<<"Naive Approach Method :";
    for(int j=0; j< arrlength; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)
    
    // Efficient Approach
    int count = 0;
    for(int i=0; i< arrlength; i++){
        if(arr[i] != 0){
            int temp = arr[count];
            arr[count] = arr[i];
            arr[i] = temp;
            count++;
        }
    }
    
    cout<<"Efficient Approach Method :";
    for(int j=0; j< arrlength; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    // Time Complexity: O(n)
    // Space Complexity: O(1)

    return 0;
}