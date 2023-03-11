#include<iostream>
using namespace std;

int firstindex(int arr[], int n , int x){

if(n==0){
    return 0;
}
if(arr[0]==x){
    return 0;
}
int ans = firstindex(arr+1, n-1,x);
cout<<ans<<endl;
if(ans==-1){
    return -1;
}
else{
return ans+1;
}
}


int main(){
int arr[10];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int x;
cin>>x;
int res = firstindex(arr,n,x);
cout<<res<<endl;
return 0;
}