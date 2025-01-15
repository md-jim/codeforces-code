#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='0'&&s[1]!='0'){
            cout<<s<<" "<<"AM"<<endl;
        }
         else if(s[0]=='0'&&s[1]=='0'){
            cout<<"12";
            for(int i=2;i<s.length();i++){
                cout<<s[i];
            }
            cout<<" "<<"AM"<<endl;
        }
         else if(s[0]=='1'&&s[1]=='2'){
           cout<<s<<" "<<"PM"<<endl;
            }
             else if(s[0]=='1'&&s[1]=='1'||s[0]=='1'&&s[1]=='0'){
           cout<<s<<" "<<"AM"<<endl;
            }
            else if(s[0]=='1'&&s[1]>'2'){
           s[0]='0';
           s[1]=s[1]-2;
           cout<<s<<" "<<"PM"<<endl;
            }
            else if(s[0]=='2'&&s[1]<'2'){
           s[0]='0';
           s[1]=s[1]+8;
           cout<<s<<" "<<"PM"<<endl;
            }
             else if(s[0]=='2'&&s[1]>='2'){
           s[0]='1';
           s[1]=s[1]-2;
           cout<<s<<" "<<"PM"<<endl;
            }
            
        }}