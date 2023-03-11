#include<iostream>
using namespace std;
int countZerosRec(int input){
if(input<10){
            if(input==0)
            return 0;
        else
            return input;
}
        int smallAns= countZerosRec(input/10);
        smallAns = smallAns+input%10;
        cout<<smallAns<<" small answer is "<<endl;
        return smallAns;
        }


int main(){
int num;
cin>>num;
int ans = countZerosRec(num);
cout<<ans;
return 0;
}