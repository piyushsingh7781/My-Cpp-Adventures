#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev = 0;
    while(n !=0){
        rev *= 10; // multiply by 10
        rev += (n%10); //add last digit
        n/=10;
    }
    cout<<rev;
}