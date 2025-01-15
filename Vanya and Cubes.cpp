#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    int i=1,count=0;
    while(x<=n){
        x=x+i;
        count++;

    }
    cout<<count<<endl;

}