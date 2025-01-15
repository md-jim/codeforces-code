#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,temp=0;

    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        for(int i=0;i<n;i++,temp++){ 
            
          
            if(temp%3==0){
                temp++;
        
            }
            else  if(temp%10==3){
                temp++;
                
            }
            if(temp%10==3||temp%3==0){
                temp++;
            }
            if(i==n-1){
                cout<<temp<<endl;
                temp=0;
            }
           

        }
        
         
    }
    
    
    
}