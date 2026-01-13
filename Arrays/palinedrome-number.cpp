#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number :: ";
    cin>>n;

    int endNum = n%10;
    int startNum = n;

    while(true){
        if(endNum <= 9){
            if(startNum == endNum){
                cout<<"Given Number is not palindrome"<<endl;
                break;
            }
        }
        endNum = endNum%10;
    }

    return 0;
}