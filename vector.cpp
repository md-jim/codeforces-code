#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<int>n;
    for(int i=0;i<10;i++){
        int e;
        cin>>e;
       n.push_back(e);

    }
    for(int i=0;i<10;i++){
        cout<<n[i];
    }
    cout<<endl;
    sort(n.begin(),n.end());
     for(int i=0;i<10;i++){
        cout<<n[i];
    }
cout<<endl;

}