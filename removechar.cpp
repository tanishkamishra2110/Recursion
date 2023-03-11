#include<iostream>
using namespace std;

void Removeelement(char s[],char x,char a){
    if(s[0]=='\0'){
        return ;
    }
Removeelement(s+1,x,a);

if(s[0]==x){
    int i=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==x){
    s[i]=a;}
}
s[i] = '\0';

}


}
int main(){
char str [100];
cin>>str;
char x;
cin>>x;
char a;
cin>>a;
Removeelement(str,x,a);
cout<<str;
return 0;
}