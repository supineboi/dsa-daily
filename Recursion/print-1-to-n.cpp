#include<iostream>

using namespace std;

void printNumbers(int n){
    if(n == 0){
        return ;
    }
    printNumbers(n -1);
    cout<<n<<" ";
}

int main(){
    int n;  
    cout<<"Value of n :: ";
    cin>>n;

    printNumbers(n);
    cout<<endl;

    // recurrence relation :: T(n) = T(n-1) + Theta(1)
    // Time Complexity :: O(n)
    // Auxiliary Space :: O(n)

    return 0;
}