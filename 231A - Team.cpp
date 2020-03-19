#include <iostream>

using namespace std;

int main()
{
    long long int n,flag=0,temp=0;
    cin>>n;
    int arr[10];//team input array
    while(n!=0){
       for(int i=0;i<3;i++){
         cin>>arr[i];
         if(arr[i]==1){flag++; }
       }
       if(flag>=2){temp++;}
        n--;
        flag=0;
    }

    cout <<temp<< endl;
    return 0;
}
