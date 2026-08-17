#include <iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter cost price:";
    cin>>cp;
    int sp;
    cout<<"enter selling price:";
    cin>>sp;
    if(sp>cp) cout<<"Profit is "<<sp-cp;
    else if(sp<cp) cout<<"Loss is "<<cp-sp;
    else cout<<"No Profit , No Loss";
}    
