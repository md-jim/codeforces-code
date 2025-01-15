#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    int sa=0,sb=0,sc=0;
    int n;
    cin>>n;
    for(int i=0 ;i<n;i++){
        cin>>a>>b>>c;
        sa=sa+a;sb=sb+b;sc=sc+c;

    }
    if(sa==0&&sb==0&&sc==0){
        cout<<"YES"<<endl;

    }
    else cout<<"NO"<<endl;
}