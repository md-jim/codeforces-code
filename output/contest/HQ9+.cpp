#include<iostream>
using namespace std;
int main(){

    string a="HQ9+";
    string b;
    cin>>b;
    int count=0,i;
    for(i=0; i<b.length();i++){
        if(b[i]=='H'||b[i]=='Q'||b[i]=='9'){
            count++;
        }
    }
    if(count!=0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}