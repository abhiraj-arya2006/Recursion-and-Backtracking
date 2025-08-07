#include<iostream>
#include<string>
using namespace std;

void printpermutations(string ques,string asf){
    if (ques.length()==0)
    {
        cout<<asf<<endl;
        return ;
    }
    for (int i = 0; i < ques.length(); i++)
    {
        char ch = ques[i];
        string left=ques.substr(0,i);
        string right = ques.substr(i+1);
        string roq=left+right;
        printpermutations(roq,asf+ch);
    }
}
int main(){
    string str;
    cin>>str;
    printpermutations(str,"");
}