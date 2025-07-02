#include<iostream>

using namespace std;

int getFactorial(int n){
    if(n <= 1){
        return 1;
    }
    return n*getFactorial(n-1);
}

int main(){
    int num;
    cout<<"Factorial of : ";
    cin>>num;

    cout<<"Facotril of "<<num<<" is : "<<getFactorial(num);
    
    return 0;
}