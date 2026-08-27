#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter base";
    cin>>a;
    int b;
    cout<<"enter exponent";
    cin>>b;

    int ans = 1;
    for (int i=1;i<=b;i++){
        ans*=a;
        if(a==1) break;
    }
    if(a==0 && b==0) cout<<"Indeterminate Form";
    else cout<<ans;

}