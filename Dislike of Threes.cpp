#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        for(int i=1,t=1;i<num;i++,t++){
           
             if(t%3==0){
                t++;
            }
            else if(i/10==3||i/100==3){
                t++;
            }
             else if(i/10==3||i/100==3){
                t++;
            }
            
        }

    }
}