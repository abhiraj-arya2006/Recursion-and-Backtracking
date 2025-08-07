#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

vector<string>getstairpath(int n){
    if (n==0)
    {
        return {""};
    }else if(n<0){
        return {};
    }
    //recursive calls
    vector<string> paths1=getstairpath(n-1);
    vector<string> paths2=getstairpath(n-2);
    vector<string> paths3=getstairpath(n-3);

    vector<string> paths;
    for(string path:paths1){
        paths.push_back("1"+path);
    }
    for(string path:paths2){
        paths.push_back("2"+path);
    }
    for(string path:paths3){
        paths.push_back("3"+path);
    }

    return paths;
}

int main(){
    int n;
    cin>>n;
    vector<string>result=getstairpath(n);
    for(string s:result){
        cout<<s<<"\n";
        }
        cout << "No. of ways of ways to descend "<<result.size() << endl;
    
    return 0;
}