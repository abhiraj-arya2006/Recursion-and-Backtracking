#include<iostream>
using namespace std;

// Time complexity of this code is O(N)
// int pow(int x,int n){
//     if(n==0) return 1;
//     int xm1=pow(x,n-1);
//     int xn=xm1*x;
//     return xn;
// }

// int main(){
//     int x,n;
//     cin>>x;
//     cin>>n;
//     int xn=pow(x,n);
//     cout<<xn<<endl;
// }

//O(log N)

int power(int x,int n){
    if (n==0) return 1;
    int xnb2=power(x,n/2);
    int xn=xnb2*xnb2;
    if (n%2==1)
    {
        xn=xn*x;
    }
    return xn;
}

int main(){
    int x,n;
    cin>>x;
    cin>>n;
    int xn=power(x,n);
    cout<<xn<<endl;
}