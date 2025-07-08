#include<iostream>

using namespace std;

/*
    Calculating Sum of digits
*/

int sumDigits(int n){
    if(n == 0){
        return 0;
    }
    return n%10 + sumDigits(n/10);
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int sum_digits = sumDigits(n);
    cout<<"Sum of digits :: "<<sum_digits<<endl;

    // Time Complexity :: O(d) -> d - total digits
    // Auxiliary Space :: O(d)
    
    return 0;
}