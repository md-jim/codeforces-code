C

    string s;
    cin>>s;
    if(s[0]>='a'&&s[0]<='z'){
        s[0]=s[0]-32;
      
    }
    for(int i=1;i<s.length();i++){
         if(s[i]>='A'&&s[i]<='Z'){
          s[i]=s[i]+32;
         }
    }
    cout<<s;
}