#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
  int n,b,count=0,count1=0;
  cin>>n>>b;
   string a;
   cin>>a;
if(b==0){
for(int i=0;i<n;i++){
    cout<<a[i];
    if(n-1==i){
        cout<<"0"<<endl;
    }
}
}
else{
   for(int i=0;i<n;i++){
   if(a[i]>=b+48){
    cout<<a[i];
    count1++;
   }
   if(count1==n){
    cout<<b;
   }
  if(a[i]<b+48){
 cout<<b;
break;
  }
count++;
}


   for(int i=count;i<n;i++){
  cout<<a[i];

}
cout<<endl;
}}}