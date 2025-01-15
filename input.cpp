#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    
    for(int i=0;i<6;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }

    for(int i=0 ; i<6;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   v.erase(v.begin()+1,v.end());
     for(int i=0 ; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}