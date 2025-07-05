#include<iostream>

using namespace std;

/*
    Reversing of an array using Juggling Method
*/

// Greatest Common Divisior (recursive function)
int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b); // gcd(a,b) = gcd(b, a%b) - according to euclidean alogrithm
}

int main(){
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int arrLen = sizeof(arr)/sizeof(arr[0]);
    int d;

    cout<<"Array rotation by :: ";
    cin>>d;

    d = d % arrLen;
    int g_c_d = gcd(arrLen, d);
    
    cout<<"GCD of two numbers :"<<g_c_d<<endl;

    for(int i=0; i< g_c_d; i++){
        int temp = arr[i];
        int j = i;
        while(1){
            int k = j+d;

            if(k >= arrLen){
                k = k - arrLen;
            }

            if(k == i){
                break;
            }

            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }

    cout<<"Reverse Array Elements :";
    for(int j=0; j< arrLen; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    // Time Complexity: O(n)
    // Space Complexity: O(1)

    return 0;
}