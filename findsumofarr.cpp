
#include <iostream>
using namespace std;
int smallsum=0;
int sum(int a[],int n)
{if(n==-1){
 return 1;}
else{cout<<smallsum<<endl;
smallsum=smallsum+a[0];
sum(a+1,n-1);
return smallsum;}}

int main()
{int arr[] = {4,2,1,1} ;

int ans = sum(arr,4);
cout<<"sum is "<<ans<<endl;

return 0;
}