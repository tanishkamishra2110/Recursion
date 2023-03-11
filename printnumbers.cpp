#include<iostream>
using namespace std;

int print(int n){
    if(n==0){
        return 1;}
    int p = print(n-1);
    cout<<"p is "<<p<<endl;
    cout<<n<<endl;
}


int main(){
int n;
cin>>n;
print(n);
return 0;
}