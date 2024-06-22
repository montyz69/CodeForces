#include<bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        if(arr[j].size()>10){
            cout<<arr[j].at(0)<<arr[j].size()-2<<arr[j].at(arr[j].size()-1)<<endl;
        }
        else {
            cout<<arr[j]<<endl;
        }

    }
}
