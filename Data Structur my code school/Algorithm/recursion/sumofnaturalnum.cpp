#include<iostream>
using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }
    int partialAns = sum(n-1);
    return n+partialAns;
}
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout << "invalid number";
    } else {
        cout << sum(n);
    }
    return 0;
}