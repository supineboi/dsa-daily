#include<iostream>

using namespace std;

/*
  Merge two sort array such that 
  resultant array also sort  
*/

int main(){
    int arr1[] = {6, 19, 25, 50, 55};
    int arr2[] = {4, 8, 21, 49, 53, 55, 56, 60};
    
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[m+n];

    int i = 0, j = 0, k =0;

    while(i<m && j<n){
        if(arr1[i] > arr2[j]){
            arr3[k++] = arr2[j++];
        }
        else if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr1[i++];
            arr3[k++] = arr2[j++];
        }
    }

    while (i<m)
    {
        arr3[k++] = arr1[i++];
    }

    while (j<n)
    {
        arr3[k++] = arr2[j++];
    }
    
    cout<<"Merge Sort Array is :: ";
    for(int i=0; i<m+n;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    // Time Complexity :: O(m + n)
    // Auxiliary Space :: O(m + n)

    return 0;
}