#include<iostream>
using namespace std;
//input filee me 
// 1st line is the length of array - 6
// 2nd line is the elements - 4 2 3 8 2 7
// 3rd line is the element to found that is x - 1 
// output should be 4
int firstindex(int arr[],int idx,int n,int x){
    if(idx==n) return -1;
    if(arr[idx]==x){
        return idx;
    }else{
        int fiisa=firstindex(arr,idx+1,n,x);
        return fiisa;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int fi=firstindex(arr,0,n,x);
    cout<<fi<<endl;
    return 0;
}