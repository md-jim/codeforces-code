#include<iostream>
using namespace std;
int main(){
    int n,count=0;
cin>>n;
float ar[n],sum=0;
for(int i=0;i<n;i++){
cin>>ar[i];

sum=sum+ar[i];
}
printf("%.12f",sum/n);


}