#include<iostream>
using namespace std;
int main(){
    int arr[]={34,67,89,98,99};
    int n = sizeof(arr)/4;
    int target=99;
    
    int found=0;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"element found"<<endl;
            found=1;
            break;
        }
    }
    if(found==0){
        cout<<"element not found";
    }
}
