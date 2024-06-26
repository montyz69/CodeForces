#include<iostream>
using namespace std;

int main(){
    int n;
    int targ;
    cin>>n>>targ;
    int arr[n];
    int cnt = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target = arr[targ-1];
    if(target>=0){
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                if(arr[i]>=target) cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    else {
        cout<<"0"<<endl;
    }
}
