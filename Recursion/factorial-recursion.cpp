#include<iostream>

using namespace std;

int getFactorial(int n){
    if(n <= 1){
        return 1;
    }
    return n*getFactorial(n-1);
}

// Efficient Tail Recusrive Approach
int tailRecursiveFactorial(int n, int k = 1){
    if(n == 0 || n == 1){
        return k;
    }
    return tailRecursiveFactorial(n-1, k*n);
}

int main(){
    int num;
    cout<<"Factorial of : ";
    cin>>num;

    cout<<"Factorial of "<<num<<" is : "<<getFactorial(num)<<endl;
    cout<<"Factorial of "<<num<<" is (using tail recursive): "<<tailRecursiveFactorial(num)<<endl;
    
    return 0;
}