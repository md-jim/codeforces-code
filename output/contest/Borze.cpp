#include<iostream>
using namespace std;
int main(){
    string b;
    int count1=0,count2=0,i=0;
    cin>>b;
    while(i<b.length()){
        count1=0;
        if(b[i]=='-'){
            while(b[i]=='-'){
                count1=count1+1;
                i++;
            }
            if(count1>2){
                 cout<<2;
                cout<<count1-2;
            }
            else cout<<count1;
        }
     else {
            while(b[i]=='.'){
                count2=count2+1;
            i++;
                if(count2==1){
                    cout<<0;}
                    
                }


            }



     }

    }
