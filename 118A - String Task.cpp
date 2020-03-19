#include <iostream>
#include <conio.h>
#include <cstring>
#include <string>
using namespace std;

int  main()
{
    string s;
    char s1[100]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
    char s2[100]={'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Z'};
    char ch;
    cin>>s;

    int length =s.size();
    for(int i=0;i<s.size();i++){
 for(int j=0;j<strlen(s1);j++){
 if(s1[j]==s[i]){
    cout<<"."<<s1[j];

 }
 else if(s2[j]==s[i]){
        s[i]=s[i]+32;
    cout<<"."<<s[i];
 }
        }

        }





    return 0;
}
