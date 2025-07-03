#include<iostream>

using namespace std;

/*
    Given an array a[ ] of size N. 
    The task is to check if array is sorted or not. 
    A sorted array can either be increasingly sorted or decreasingly sorted. 
    Also consider duplicate elements to be sorted. [ GFG problem]
*/
int main(){
        int arr[] = {1, 4, 2, 2, 3};
        int n = 5;
        int flag = 0; // neutral = 0, increasingly = 1, decreasingly = -1 
        int isSorted = 1;
        
        for(int i=1; i< n; i++){
            if(flag == 0){
                // decide here
                if(arr[i] > arr[i-1]){
                    flag = 1;
                } else if(arr[i] < arr[i-1]){
                    flag = -1;
                }
            }
            else if(
                (flag == 1 && arr[i] < arr[i-1]) ||
                (flag == -1 && arr[i] > arr[i-1])    
            ){
                isSorted = 0;
                break;
            }
        }

        cout<<"Is Array Sorted ? : "<<(isSorted? "Yes": "No")<<endl;
        
        // Time Complexity :: O(n)
        // Space Complexity :: O(1)
     
    return 0;
}