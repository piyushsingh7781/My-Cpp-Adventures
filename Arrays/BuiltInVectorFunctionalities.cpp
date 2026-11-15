#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {5,8,7,4,6};
    sort(v.begin(),v.end());
    for(int ele:v) cout<<ele<<" ";
}
