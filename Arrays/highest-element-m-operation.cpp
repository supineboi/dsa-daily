#include<iostream>

using namespace std;

/*
    Perform given m number of operation (add +100) to the given range
    than find the highest element in the resultant array
*/

// Method - 1 Naive approach
void firstMethod(int arr[], int m){
    for(int i=0; i< m; i++){
        int a,b;
        cout<<"Give range for operation "<<i+1<<" (comma separated) :: ";
        cin>>a>>b;

        for(int j=a-1; j<b; j++){
            arr[j] = arr[j] + 100;
        }
    }
    // Time Complexity :: O(m*n)
    // Auxiliary Space :: O(1)
}

// Method - 2 using prefix sum array (efficient)
void secondMethod(int arr[], int n, int m){
    int diff[n + 1] = {0};

    for(int i=0; i< m; i++){
        int a,b;
        cout<<"Give range for operation "<<i+1<<" (comma separated) :: ";
        cin>>a>>b;

        diff[a-1] += 100;
        diff[b] -= 100;
    }
    
    int currSum =0;
    for(int i=0; i<n; i++){
        currSum += diff[i];
        arr[i] += currSum;
    }

    // Time Complexity :: O(m + n)
    // Auxiliary Space :: O(n)
}

int main(){
    int arr[]{3,6,2,1,100,38,9};
    int arrLen = sizeof(arr)/sizeof(arr[0]);

    int m; 
    cout<<"Number of Operations :: ";
    cin>>m;

    // firstMethod(arr, m);
    secondMethod(arr, arrLen, m);

    int largest_num = arr[0];
    for(int i=1; i<arrLen; i++){
        if(arr[i] > largest_num){
            largest_num = arr[i];
        }
    }

    cout<<"Largest Number in the array :: "<<largest_num<<endl;

    return 0;
}