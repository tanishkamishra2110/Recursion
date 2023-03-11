#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){
   
  int n1 = s;
   int a1[n1];
    int b1[n2];
    while()
}




void mergesort(int arr[], int s , int e){



    if(s>=e){
        return ;
    }
    int mid = (s+e)/2;
    mergesort(arr,mid+1,e);
    mergesort(arr,s,mid);
    merge(arr,s,e);
}







int main(){
int arr[10];
int n;
cin>>n;
for(int i =0;i<n;i++){
    cin>>arr[i];
}
int si=0;
int ei=n-1;

int so= mergesort(arr,si,ei);
return 0;
}