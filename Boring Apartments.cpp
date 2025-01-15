#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int num;
    cin>>num;

    if(num/1000!=0){
        cout<<(num/1000)*10<<endl;
 }
    else if(num/100!=0){
        cout<<(((num/100)-1)*10)+6<<endl;
    }
    else if(num/10!=0){
        cout<<(((num/10)-1)*10)+3<<endl;
    }
    else if(num==1){
        cout<<1<<endl;
    }
    else if(num==2||num==3||num==4||num==5||num==6||num==7||num==8||num==9){
        cout<<(num-1)*10+1<<endl;
    }}
}