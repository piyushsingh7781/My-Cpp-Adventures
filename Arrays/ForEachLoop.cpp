#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={5,8,7,4,6};
    for(int ele : v){
        if(ele%2 == 0) ele*=2;
        else ele *=ele;
    }
    for(int ele : v) cout<<ele<<" ";
}
