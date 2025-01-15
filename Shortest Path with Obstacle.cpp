#include<iostream>

using namespace std;
int main(){
    int x,x1,x2,y,y1,y2;
    cin>>x>>y;
     cin>>x1>>y1;
      cin>>x2>>y2;
      if(x==x1&&x1==x2&&y1>y&&y1<y2){
           cout<<(y1-y)*(y1-y);
      }

}