#include<iostream>
using namespace std;

bool checknum(int arr[], int n, int x){
    if(n==0){
        return false;
    }
    
    
 checknum(arr+1,n-1,x);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
} cout<<endl;
if(arr[0]==x){
        return true;
        
    }
else{ return checknum(arr+1,n-1,x);
}

}




int main(){
int n;
cin>>n;
int arr[10];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int x;
cin>>x;
cout<<checknum(arr,n,x);
//cout<<res;
return 0;
}