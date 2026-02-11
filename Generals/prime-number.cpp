#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int i;
    for(i=2; i<n; i++){
        if(n%i == 0){
            break;
        }
    }
    if(n <= 1 || i != n){
        cout<<"Given number is not a Prime!"<<endl;
    }else {
        cout<<"Given number is Prime!"<<endl;
    }
    return 0;
}