#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0 ; j<t;j++){
    string st;
    int count=0,i,size,count1=0;
    cin>>st;
    size=st.size();
     if(size%2!=0){
            cout<<"NO"<<endl;
        }
   
   else if(size%2==0) 
   {for(i=0; i<size-1;i++){
        if(st[0]!=st[i+1]){
          count=i+1;
        }
        

   }
        
        if(count==0){
            cout<<"YES"<<endl;
        }
       else  if(count!=0){
            for(i=0;i<size;i++){
                if(st[i]==st[((size)/2)+i]){
                    count1=count1+1;
                }}
            if(count1==size/2){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        
        }}}}