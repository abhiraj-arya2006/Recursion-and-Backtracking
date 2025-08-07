#include<iostream>
#include<vector>
using namespace std;
void printmazepath(int sr,int sc,int dr,int dc,string pathsofar);
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    printmazepath(1,1,n,m,"");

}
void printmazepath(int sr,int sc,int dr,int dc,string pathsofar){
    if (sr>dr || sc>dc)
    {
        return;
    }if(sr==dr && sc==dc){
        cout<<pathsofar<<endl;
        return;
    }
    printmazepath(sr,sc+1,dr,dc,pathsofar+"h");
    printmazepath(sr+1,sc,dr,dc,pathsofar+"v");
}