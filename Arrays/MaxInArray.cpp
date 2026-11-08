#include<iostream>
using namespace std;
int main(){
    int arr[] = {90,76,78,82,94,98};
    int n = sizeof(arr)/4;
    int max = 0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>max)max = arr[i];   //if arr[i]>max then, inside max we will add value of arr[i]  
    }
    cout<<max;
}
