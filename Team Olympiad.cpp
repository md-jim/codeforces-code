#include<iostream>
using namespace std;
int main(){
  int n,t1,t2,t3;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1){
        t1++;
    }
    if(a[i]==2){
        t2++;
    }
    if(a[i]==3){
        t3++;
    }
  }
  if(t1<t2&&t1<t3){
    cout<<t1<<endl;
  }
  else if(t2<t3&&t2<t1){
    cout<<t2<<endl;
  }
  else cout<<t3<<endl;

}