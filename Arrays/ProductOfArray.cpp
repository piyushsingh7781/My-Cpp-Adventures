#include<iostream>
using namespace std;
int main(){
    int arr[] = {88,90,76,78,82,94,84,71,79,80};
    int n = sizeof(arr)/4;
    long long product = 1;
    for(int i =0;i<n-1;i++){
        product *= arr[i];
    }
    cout<<product;
}
