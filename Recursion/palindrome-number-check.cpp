#include<iostream>

using namespace std;

/*
    Check whether the given number is palindrome or not
*/

int countDigits(int n){
    if(n == 0) return 0;
    return 1 + countDigits(n/10);
}

int power10(int n){
    if(n == 0) return 1;
    return 10*power10(n-1);
}

bool checkPalin(int n, int d){
    if(d <= 1) return true;

    int leftDigit = n/power10(d-1);
    int rightDigit = n%10;

    if(leftDigit != rightDigit) return false;

    n = (n%power10(d-1))/10;
    return checkPalin(n, d-2);
}

bool isPalindrome(int n){
    if(n <= 0) return false;
    if(n < 10) return true;
    
    int initialDigitCount = countDigits(n);
    return checkPalin(n, initialDigitCount);
}

int main(){
    cout<<"Enter the number :: ";
    int n;
    cin>>n;

    bool isPal = isPalindrome(n);

    cout<<"The Given number is "<<(isPal? "" : "Not ")<<"Palindrome"<<endl;
    return 0;
}

/*
    Note: we can also solve this using the number reverse method
*/