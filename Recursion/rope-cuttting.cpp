#include<iostream>
#include<algorithm>

using namespace std;

/*
    Given Rope lenth , need to cut the rope in maximum pieces
    such piece will only have the length of either a,b or c
*/

int cutToMaxPieces(int n, int a, int b, int c){
    if(n < 0){
        return -1;
    }else if ( n == 0){
        return 0;
    }

    int res = max(
        cutToMaxPieces(n-a, a, b, c),
        max(
            cutToMaxPieces(n-b, a, b, c),
            cutToMaxPieces(n-c, a, b, c)
        )
    );  

    if(res == -1){
        return -1;
    }
    return res + 1;
}

int main(){
    int n,a,b,c;

    cout<<"Enter the size of the rope (n) : ";
    cin>>n;

    cout<<"Enter the value of a,b,c comma separated : ";
    cin>>a>>b>>c;

    int max_num = cutToMaxPieces(n, a, b, c);

    if(max_num <= 0){
        cout<<"rope cutting is not possible"<<endl;

    }else {
        cout<<"Maximum Pieces : "<<max_num<<endl;
    }

    // Time Complexity O(3^n)
    // can be better using dp

    return 0;
}