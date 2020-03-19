#include <iostream>

using namespace std;

int main()
{
    long long int n,k,flag=0,positiveScore=0;
    cin>>n>>k;
    long long int arr[n];
    for(int i=1;i<=n;i++){//array input
        cin>>arr[i];
    }
    //checking berween ith num and kth num
     for(int i=1;i<=n;i++){

           if((arr[i]>=arr[k])&&(arr[i]!=0)){flag ++;}

            if((arr[i]==0)&&(arr[i]==arr[k])){positiveScore++;}
          }


  // cout<<positiveScore<<endl;
    switch(positiveScore==n){
    case 1:
        cout<<0;
    break;        //for final result
    case 0:
       cout<<flag;
    break;
       default:
       break; }
    return 0;
}
