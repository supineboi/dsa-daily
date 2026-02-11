#include<iostream>
using namespace std;

/*
    Open Addressing - Linear Probing (rough logic)
*/

int hashFunction(int n, int s){
    return n%s;
}

int findNearestPrime(int n){
    int p = 0;

    while(!p){
        int i=2;
        for(i; i<n; i++){
            if(n%i == 0){
                break;
            }
        }
        if(i == n){
            p = n;
            break;
        }
        n = n+1;
    }
    return p;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    if(n <= 0){
        cout<<"Invalid Number!"<<endl;
        return 0;
    }

    int arr[n];

    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int m = findNearestPrime(n);
    int hashTableArr[m] = {0};

    for(int i =0; i<n; i++){
        int pos = hashFunction(arr[i], m);
        if(hashTableArr[pos]){
            int j = pos+1;

            if(j == m){
                j = 0;
            }

            for(j; j<m; j++ ){
                if(!hashTableArr[j]){
                    hashTableArr[j] = arr[i];
                    break;
                }
                if(j == m - 1){
                    j = 0;
                }
            }
        } else {
            hashTableArr[pos] = arr[i];
        }
    }

    cout<<"Final Hash Table :: "<<endl;

    for(int i =0; i<m; i++){
        cout<<"At Index "<<i<<" : "<<hashTableArr[i]<<endl;
    }
    
    return 0;
}