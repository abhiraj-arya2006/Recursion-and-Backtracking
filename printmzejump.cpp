#include<iostream>
#include<vector>
using namespace std;
void printjumps(int sr,int sc,int dr, int dc, string psf);
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    printjumps(1,1,n,m,"");
}
void printjumps(int sr,int sc,int dr, int dc, string psf){
    if (sr==dr && sc==dc)
    {
        cout<<psf<<endl;
        return ;
    }
    
    //horizontal 
    for (int ms = 1; ms <= dc-sc; ms++)
    {
        printjumps(sr,sc+ms,dr,dc,psf+"h"+to_string(ms));
    }
    //vertical
    for (int ms = 1; ms <= dr-sr; ms++)
    {
        printjumps(sr+ms,sc,dr,dc, psf + "h"+ to_string(ms));
    }
    //diagonal
    for (int ms = 1; ms <= dc-sc && ms<=dr-sr; ms++)
    {
        printjumps(sr+ms,sc+ms,dr,dc,psf+"d"+to_string(ms));
    }
    
    
}