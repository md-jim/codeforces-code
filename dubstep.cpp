#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  char a[200];
  int l;
  cin>>a;

  l=strlen(a);

  for(int i=0;i<l;i++){
      int *p;
        p ="W";
    if(a[i]==p){

        if(a[i+1]=='U'){

            if(a[i+2]=='B')
            while(a[i+3]!='W'){
                cout<<a[i+3];
                    i++;
            }
        }


    }
 else cout<<"";
}}
