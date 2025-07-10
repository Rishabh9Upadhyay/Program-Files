#include<iostream>
using namespace std;
int main(){
    int a,b=1;
    cin>>a;
    if(a%2==0 && a>0){
        a=a-1;
    }
    for(int i=1;i<=a;i++){
        cout<<b<<" ";
        b+=2;
    }
    return 0;
}