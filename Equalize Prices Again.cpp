#include<iostream>
using namespace std;

int main()
{
  int n,sum=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum=sum+a[i];
  }
  if(sum%n==0){
    cout<<sum/n<<endl;
  }
  else cout<<(sum/n)+1<<endl;
}