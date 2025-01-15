#include<iostream>

using namespace std;
int main(){
    int n,c1=0,c2=0;
    cin>>n;
    string a;
    cin>>a;
   for(int i=0;i<n;i++){
    if(a[i]=='L'){
      c1--;
    }
    if(a[i]=='R'){
      c2++;
    }
    
   }
   cout<<-(c1-c2)+1<<endl;
}