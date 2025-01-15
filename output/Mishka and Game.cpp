#include<iostream>
using namespace std;
int main()
{
    int n;
    int m,c,count=0 , count1=0;
    cin>>n;
    for(int i=0 ; i<n;i++){
        cin>>m>>c;
        if(m>c){
            count=count+1;
        }
        else if(m<c){
            count1=count1+1;
        }

    }
    if(count>count1){
        cout<<"Mishka";
    }
    else if(count<count1){
        cout<<"Chris";
    }
    else cout<<"Friendship is magic!^^";

}