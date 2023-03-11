#include<iostream>
using namespace std;

void Removeelement(char s[]){
    if(s[0]=='\0'){
        return ;
    }
Removeelement(s+1);

if(s[0]==s[1]){
    int i=0;
    for(i=0;s[i]!='\0';i++){
    s[i]=s[i+1];
    
    }
    s[i] = '\0';
}


}


int main(){
char str [100];
cin>>str;
Removeelement(str);
cout<<str;
return 0;
}