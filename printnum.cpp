#include<iostream>
using namespace std;


int printnum(int n){
    if(n==0){
        return 1;
    }
      printnum(n-1);
   cout<<n<<endl;
}


int main(){
int n;
cin>>n;
cout<<printnum(n);
return 0;
}