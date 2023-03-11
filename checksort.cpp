#include<iostream>
using namespace std;

int checkifsort (int arr[], int n){
  if(n==2){
      return 1;
  }
  int ans = checkifsort(arr,n-1);

  if(arr[n-1]<arr[n]){
      n++;
  }
  else{
      cout<<"no"<<endl;
  }



}





int main(){
int arr[5]={2,3,5,7,10};
checkifsort(arr,5);

return 0;
}