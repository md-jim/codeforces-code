#include<iostream>
using namespace std;
int main(){
int count=0,count1=0,count2=0,i;
string num;
cin>>num;

for( i=0 ;i<num.length();i++){

if(num[i]=='4'){
   count=count +1;
}
if(num[i]=='7'){
   count1=count1 +1;
}
if(num[i]=='0'){
   count2=count2 +1;
}
}
if(count+count1<=num.length()&&count!=0&&count1!=0&&count2==0){
   cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;

}