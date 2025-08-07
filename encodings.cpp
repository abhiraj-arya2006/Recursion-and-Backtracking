// #include<iostream>
// #include<string>
// using namespace std;

// void printencodings(string ques,string asf){
//     if (ques.length()==0)
//     {   
//         cout<<asf<<endl;
//         return;
//     }else if(ques.length()==1){
//         char ch= ques[0];
//         if (ch=='0')
//         {
//             return ;
//         }else{
//             int value=ch-'0';
//             char code = (char)('a'+value-1);
//             asf=asf+code;
//             cout<<asf<<endl; 
//         }
        
//     }else{
//         char ch=ques[0];
//         string roq=ques.substr(1);
//         if (ch=='0')
//         {
//             return ;
//         }else{
//             int value=ch-'0';
//             char code = (char)('a'+value-1);
//             printencodings(roq,asf+code); 
//         }
//         string ch12= ques.substr(0,2);
//         string roq12=ques.substr(2);

//         int ch12v=stoi(ch12);
//         if (ch12v<=26)
//         {
//             char code = (char)('a'+ch12v-1);
//             printencodings(roq12,asf+code);
//         }
        
//     }
    
// }

// int main(){
//     string str;
//     cin>>str;
//     printencodings(str,"");
// }

#include <bits/stdc++.h>
using namespace std;

void pencod(string s, string ans)
{
	if (s.length()==0)
		{
		cout<<ans<<endl;
		return;
		}

	int code1 = s[0]-'0';
	char atcode1 = char('a'+code1-1);
	int code2 = stoi(s.substr(0,2));
	char atcode2 = char('a'+code2-1);

	if(code1 != 0)
		pencod(s.substr(1),ans + atcode1);
	if(code2 >=10 && code2 <=26)
		pencod(s.substr(2),ans + atcode2);
}

int main()
{
	string s ;
    cin>>s;
	pencod(s,"");

	return 0;
}