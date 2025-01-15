#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
    string a;
    cin>>a;
    for(int i=0;i<6;i++){
        if(a[i]=='r'){
        c1++;
        }
        else if(a[i]=='g'){
        c2++;
        }
        else if(a[i]=='b'){
        c3++;
        }
        else  if(a[i]=='R'){
        c4++;
        }
        else if(a[i]=='G'){
        c5++;
        }
       else  if(a[i]=='B'){
        c6++;
        }
    }
if(c1==1&&c2==1&&c3=1&&c4==1){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
    }
}