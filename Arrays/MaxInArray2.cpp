#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {90,76,78,82,94,98};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>mx)mx = arr[i];   //if arr[i]>max then, inside max we will add value of arr[i]  
    }
    //int mx=arr[0];
    //for(int i =0;i<n;i++){
      //  if(arr[i]>mx)mx=arr[i];
    //}

    //mx=max(mx,arr[0]);
    cout<<mx;
}
