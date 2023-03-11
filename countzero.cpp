#include<iostream>
using namespace std;
int countZerosRec(int input){
if(input<10){
            if(input==0)
            return 1;
        else
            return 0;
}
        int smallAns= countZerosRec(input/10);
        if(input%10==0){
            return smallAns+1;
        }
        else
        return smallAns;
        }


int main(){
int num;
cin>>num;
int ans = countZerosRec(num);
cout<<ans;
return 0;
}