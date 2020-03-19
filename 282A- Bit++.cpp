#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n=0,x=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>s;
       if((s=="X++")||(s=="++X")){x++;}
       else if((s=="X--")||(s=="--X")){x--;}
       //else if(s=="X**"||s=="**X"){x=x*x;}
       //else{x=x/}


        }
cout<<x;
    return 0;
}
