#include<iostream>
using namespace std;
//input filee me 
// 1st line is the length of array - 6
// 2nd line is the elements - 4 2 3 8 2 7
// 3rd line is the element to found that is x - 2 
// output should be 4

int lastIndex(int arr[],int idx,int n,int x){
    if (idx==n) return -1;
    int liisa=lastIndex(arr,idx+1,n,x);
    if (liisa==-1)
    {
        if (arr[idx]==x)
        {
            return idx;
        }else{
            return -1;
        }
    }else{
        return liisa;
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
    int li=lastIndex(arr,0,n,x);
    cout<<li<<endl;
}