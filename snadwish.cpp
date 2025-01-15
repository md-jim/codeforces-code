#include<iostream>

using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a=(b+c)){
      cout<<(a)*2-1<<endl;
    }
   else if(a>(b+c)){
      cout<<(b+c)*2+1<<endl;
    }
    else if(a<(b+c)){
      cout<<(a*2)-1<<endl;
    }
}