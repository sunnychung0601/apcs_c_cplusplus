#include <iostream>
using namespace std;
int add(int a){
    int sum=1;
    for(a;a>=1;a--){
        sum*=a;
    }    
    return sum;
}
int main(){
    int aa;
    cout<<"請輸入一個整數:";
    cin>>aa;
    cout<<aa<<"!="<<add(aa);
}
