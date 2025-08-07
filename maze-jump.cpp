#include<iostream>
#include<vector>
using namespace std;

vector<string>getmazepath(int sr,int sc,int dr, int dc){
    
    if (sr==dr && sc==dc)
    {
        return {""}; 
    }
    vector<string> paths;
    //for horizontal moves
    for (int ms = 1; ms <= dc-sc; ms++)
    {
        vector<string>hpaths= getmazepath(sr,sc+ms,dr,dc);
        for(string hpath:hpaths){
            paths.push_back("h" + to_string(ms) + hpath);
        }
    }

    //for vertical moves
    for (int ms =1 ; ms <= dr-sr; ms++)
    {
        vector<string>vpaths=getmazepath(sr+ms,sc,dr,dc);
        for(string vpath:vpaths){
            paths.push_back("v" + to_string(ms) + vpath);
        }
    }

    //for diagonal moves
    for (int ms = 1; ms <= dc-sc && ms<=dr-sr; ms++)
    {
        vector<string>dpaths=getmazepath(sr+ms,sc+ms,dr,dc);
        for(string dpath:dpaths){
            paths.push_back("d" + to_string(ms) + dpath);
        }
    }
    return paths;
    
}

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    vector<string>paths=getmazepath(1,1,n,m);
    for(string s: paths){
        cout<<s<<"\n";
    }
}   