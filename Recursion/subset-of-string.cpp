#include<iostream>
#include<string>

using namespace std;

/*
    Find out the subset of the given string (distinct string)
*/

void subsetStr(string str, string curr = "", int i = 0){
    if(i == str.length()){
        cout<<curr<<" ";
        return;
    }

    subsetStr(str, curr, i+1);
    subsetStr(str, curr+str[i], i+1);
}

int main(){
    string str;
    cout<<"Enter the distinct string :: ";
    cin>>str;

    subsetStr(str);

    // Time Complexity :: O(2^n)
    // Auxiliary Space :: O(n)

    return 0;
}