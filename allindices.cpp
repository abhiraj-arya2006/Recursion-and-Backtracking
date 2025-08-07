#include<iostream>
#include<vector>
using namespace std;
//input filee me 
// 1st line is the length of array - 6
// 2nd line is the elements - 4 2 3 8 2 7
// 3rd line is the element to found that is x - 2 
// output should be 1 4.
vector<int> allindices(int arr[], int n, int x, int idx, int fsf){
    if(idx==n){
        vector<int> iarr(fsf);
        return iarr;
    }
    if (arr[idx]==x)
    {
        vector<int> iarr=allindices(arr,n,x,idx+1,fsf+1);
        iarr[fsf]=idx;
        return iarr;
    }else{
        vector<int> iarr=allindices(arr,n,x,idx+1,fsf);
        return iarr;
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
    vector<int> result=allindices(arr,n,x,0,0);
    if (result.size()==0)
    {
        cout<<endl;
    }else{
        for (int i = 0; i < result.size(); i++)
        {
            cout<<result[i]<<endl;
        }
        
    }
    return 0;
}   