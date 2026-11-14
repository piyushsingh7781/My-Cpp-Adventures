#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> v){
    v[2]=99;
}
//void change(vector<int> &v){
    //v[2]=99;
//}




int main(){
    vector<int> v={5,8,7,4,6};
    change(v);
    cout<<v[2]<<endl;

}
