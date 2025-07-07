#include<iostream>
#include<string>

using namespace std;

/*
    Check if a string is palindrome or not
*/

bool checkPalindrome(const string& s, char start, char end){
    if(start >= end){
        return true;
    }

    if(s[start] != s[end]){
        return false;
    }
    start++;
    end--;
    return checkPalindrome(s, start, end );
}

int main(){
    string s = "malayalam";

    bool isPalindrome = checkPalindrome(s, 0, s.size() - 1);
    cout<<"Given String is "<<(isPalindrome ? "Palindrome" : "not palindrome")<<endl;
    
    return 0;
}