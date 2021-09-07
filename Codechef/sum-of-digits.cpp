#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int temp=0;
        while(n>0){
            int x = n%10;
            temp+=x;
            n=n/10;
        }
        cout<<temp<<endl;
    }
    return 0;
}