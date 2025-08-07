#include<iostream>
#include<vector>
using namespace std;
// sr -- source row 
// sc -- source column 
// dr -- destination row
// dc -- destination column 
//the last element of a 3x3 grid.
//n=3
//m=3

vector<string> getMazepaths(int sr, int sc, int dr, int dc); 

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    vector<string> result=getMazepaths(1,1,n,m);
    for(string s:result){   //for displaying the output
        cout<<s<<"\n";
        }

}
vector<string>getMazepaths(int sr,int sc,int dr, int dc){
vector<string> hpaths;
vector<string> vpaths;
if (sr==dr && sc==dc)
    {
        return{""};
    }
if (sc<dc)
{
    hpaths=getMazepaths(sr,sc+1,dr,dc);
}
if (sr<dr)
{
    vpaths=getMazepaths(sr+1,sc,dr,dc);
}

vector<string>paths;
 for(string hpath: hpaths){
    paths.push_back("h"+hpath);
 }
 for(string vpath: vpaths){
    paths.push_back("v"+vpath);
 }
 return paths;
}


