#include<iostream>
using namespace std;

int fact(int n){
    if(n==1) return 1; 
    int fn1=fact(n-1);
    int f=n*fn1;
    return f;
}

int main(){
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
}