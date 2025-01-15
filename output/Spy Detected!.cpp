#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
    int size ;
    cin>>size;

    int ar[size],i;
    for(int i=1 ; i<=size;i++){
        cin>>ar[i];
    }

    if(ar[1]!=ar[size]){
        if(ar[1]==ar[2]){
            cout<<size<<endl;

        }
        else if(ar[2]==ar[size]){
            cout<<"1"<<endl;
            
        }}
       else  if(ar[1]==ar[size]){
        for(i=1;i<=size;i++){
            if(ar[i]!=ar[i+1]){
                cout<<i+1<<endl;
                break;

            }}}}}