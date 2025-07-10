#include<iostream>
using namespace std;
int main(){
    int a,b=1;
    cin>>a;
    for(int i=0;i<a;i++){
        cout<<b<<" ";
        b+=2;
    }
    return 0;
}