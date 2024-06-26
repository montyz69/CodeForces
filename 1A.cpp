#include<iostream>
using namespace std;

int main(){
    long long len,bred,tile;
    cin>>len>>bred>>tile;
    long long requiredlen = 0;
    long long requriedbred = 0;
    while(requiredlen<len){
        requiredlen+=tile;
    }
    while(requriedbred<bred){
        requriedbred+=tile;
    }
    long long lentiles = requiredlen/tile;
    long long bredtiles = requriedbred/tile;
    long long ans = lentiles*bredtiles;
    cout<<ans<<endl;
}
