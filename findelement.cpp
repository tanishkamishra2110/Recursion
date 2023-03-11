#include<iostream>
using namespace std;
int i =0;
int x=-1;
int findelement(int arr[], int n,int key){
if(n==-1){
   return false;
}
if(arr[0]==key){
   
    findelement(arr+1,n-1,key);
}
else{ findelement(arr+1,n-1,key);
i++;}
cout<<x<<endl;


}





int main(){
int arr[5]={1,4,2,2,4};
int key;
cin>>key;
cout<<findelement(arr,5,key)<<endl;

return 0;
}