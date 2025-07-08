#include<iostream>

using namespace std;

/*
    find n Natural number sum 
*/

int naturalNumSum(int n){
    if(n == 0){
        return 0;
    }

    return n + naturalNumSum(n-1);
}

int main(){
    int n;
    cout<<"Enter the value of n :: ";
    cin>>n;

    int num_sum = naturalNumSum(n);
    cout<<"Natural number sum is :: "<<num_sum<<endl;

    // Time Complexity :: O(n)
    // Auxiliary Space :: O(n) due to recursion call stack 
    // using tail recusrion we can make auxiliary space O(1)

    return 0;
}