#include<iostream>
using namespace std;

int sumofele(int arr[], int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
int s = sumofele(arr+1,n-1);
int sum = s+arr[0];
    return sum;
}




int main(){
int n;
cin>>n;
int arr[10];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int res = sumofele(arr,n);

cout<<res;
return 0;
}