#include<iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int X = 0;
    string op;
    for(int i=0;i<n;i++){
        cin>>op;
        if(op == "++X"){
            ++X;
        }
        else if (op == "--X") {
            --X;
        }
        else if (op == "X++") {
            X++;
        }
        else if (op == "X--") {
            X--;
        }
    }
    cout<<X;
}
