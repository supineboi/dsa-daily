#include<iostream>

using namespace std;

/*
    Print Number from give n to 1
*/

void printNumbers(int n){

    if(n == 0){
        return;
    }

    cout<<n<<" ";
    printNumbers(n-1);
}

int main(){
    int n;
    cout<<"Value of n :: ";
    cin>>n;

    printNumbers(n);
    cout<<endl;

    return 0;

    // recurrence relation :: T(n) = T(n-1) + Theta(1)
    // Time Complexity :: O(n)
    // Auxiliary Space :: O(n)
}