#include<iostream>
using namespace std;


int countdigits(int n ){
    static int res =0;
    if(n==0){
        return 1;
    }
    
    
    int p = countdigits(n/10);
    if(n%10==0){res=res+1;};
     return res;
}
int main(){
int n;
cin>>n;

int result = countdigits(n);
cout<<result<<endl;
return 0;
}