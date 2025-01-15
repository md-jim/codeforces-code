#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
   sort(v.begin(),v.end(),greater<>());
   int sum=0,sum2;
   for(int i=0;i<n;i++){
        sum+=v[i];
    }
    int count =0;
     for(int i=0;i<n;i++){
        sum2+=v[i];
          count++;
        if(sum2>(sum/2)){
    break;
        }
        
    }
    cout<<count;


}