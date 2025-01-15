#include<iostream>
using namespace std;
int main(){
int a,b,temp=1,temp1=1;
cin>>a>>b;
for(int i=1;i<=a;i++){
temp=temp*i;
}
for(int i=1;i<=b;i++){
temp1=temp1*i;
}

if(a>=b){
    cout<<temp1<<endl;
}
else if(a<b){
    cout<<temp<<endl;
}
else if(a==1&&b==1){
    cout<<1<<endl;
}

}