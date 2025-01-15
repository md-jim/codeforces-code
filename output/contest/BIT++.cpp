#include<iostream>
using namespace std;
int main(){
    int n,i=0;
    cin>>n;
for(int j=0;j<n;j++){
char ch[2];
cin>>ch;

    if(ch[0] =='i'&&ch[1] =='+'){
i++;
    }
    else if(ch[0] =='+'&&ch[1] =='+'){
  ++i;
    }
   else if(ch[0] =='i'&&ch[1] =='-'){
   i--;
    }
   else if(ch[0] =='-'&&ch[1] =='-'){
  --i;
    }

}
cout<<i<<endl;

}