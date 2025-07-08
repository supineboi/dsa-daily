#include<iostream>

using namespace std;

/*
    Fibonacci series -> n numbers of sum
*/
int main(){
    int n;
    cout<<"Enter the value of n :: ";
    cin>>n;

    int a = 0;
    int b = 1;

    if(n <= 0 ){
        cout<<"Invalid Number"<<endl;
    }else {
        int sum = 0;
        
        while(n--){
            sum += a;
            int temp = a;
            a = b;
            b = temp + a;
        }
        cout<<"Sum equal to "<<sum<<endl;
    }

    return 0;
}