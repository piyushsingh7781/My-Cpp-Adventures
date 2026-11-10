#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(8,-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(5); //adds an element at the end
    arr.push_back(7);
    arr.pop_back(); //removes last element
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
