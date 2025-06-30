#include<iostream>

using namespace std;

/*
    Left rotate an array by d
*/

void easyReverseArr(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void reverseArr(int arr[], int startArr, int endArr){
    for(int i = startArr; i <= (startArr + endArr)/2; i++){
        int temp = arr[i];
        arr[i] = arr[endArr - (i - startArr)];
        arr[endArr - (i - startArr)] = temp;
    }
}

int main(){
    // METHOD - 1
    int arr[]{6, 2, 10, 14};
    int arrLength = sizeof(arr)/sizeof(arr[0]);

    int d;
    cout<<"Left rotate an array by : ";
    cin>>d;

    int temp[d];

    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }

    for(int j=d;j<arrLength;j++){
        arr[j - d] = arr[j];
    }

    for(int i=0; i<d; i++){
        arr[arrLength - d + i] = temp[i];
    }

    cout<<"Final Array Method - 1:";
    for(int j=0; j< arrLength; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    // Time Complexity: O(n)
    // Space Complexity: O(d)

    // METHOD - 2
    int arr2[]{6, 2, 10, 14};
    int arr2Length = sizeof(arr2)/sizeof(arr2[0]);

    reverseArr(arr2, 0, d-1);
    reverseArr(arr2, d, arr2Length - 1);
    reverseArr(arr2, 0, arr2Length - 1);

    cout<<"Final Array Method - 2:";
    for(int j=0; j< arr2Length; j++){
        cout<<arr2[j]<<" ";
    }
    cout<<endl;

    // Time Complexity: O(n)
    // Space Complexity: O(1)

    return 0;
}