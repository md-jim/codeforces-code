
   #include<iostream>
using namespace std;
int main(){
int n,sum=0;
int sum2;
cin>>n;

    
    for(int i=n ; i>0;i--){
        sum=0;
while(n!=0){
    sum=sum+i%10;
     n=n/10;
}

sum2=sum2+(sum/10)+(sum%10);
    }


cout<<sum2;}
