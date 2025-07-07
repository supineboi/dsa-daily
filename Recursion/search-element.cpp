#include<iostream>

using namespace std;

/*
    Search element in an unsorted array
*/

bool searchElement(int arr[], int n, int x, int i = 0){

    if(i == n){
        return false;
    }

    if(arr[i] == x){
        return true;
    }
    i++;

    return searchElement(arr, n, x, i);   
}

int main(){
    int arr[] = {1, 9, 3, 0, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x;
    cout<<"Element value :: ";
    cin>>x;

    bool isPresent = searchElement(arr, n, x);

    cout<<"Element is "<<(isPresent ? "Present" : "Not Present")<<endl;

    return 0;
}