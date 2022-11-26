#include<iostream>
using namespace std;
int fun1(int a,int b){
    return a+b;
}
int main(void){
    int aa,bb,res;
    cout<<"請輸入兩個數";
    cin>>aa>>bb;
    res=fun1(aa,bb);
    cout<<"aa="<<aa<<"bb="<<bb<<"a+b="<<res;
    
}
