#include<bits/stdc++.h>
using namespace std;
int main(){
    string sa,sb,sc;
   getline(cin,sa);
   getline(cin,sb);
   getline(cin,sc);
   int c=0,n;
   if(sa.length()>=sb.length()&&sa.length()>sc.length()){
      n=sa.length();
   }
    else if(sb.length()>=sa.length()&&sb.length()>sc.length()){
      n=sb.length();
   }
   else n=sc.length();

   for(int i=0;i<n;i++){
    if(sa[i]=='a'||sa[i]=='e'||sa[i]=='i'||sa[i]=='o'||sa[i]=='u'){
        c++;
    }
    if(sb[i]=='a'||sb[i]=='e'||sb[i]=='i'||sb[i]=='o'||sb[i]=='u'){
        c++;
    }
    if(sc[i]=='a'||sc[i]=='e'||sc[i]=='i'||sc[i]=='o'||sc[i]=='u'){
        c++;
    }


   }
   
if(c>=17){
    cout<<"YES";
}
else cout<<"NO";
}