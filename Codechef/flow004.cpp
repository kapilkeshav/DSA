#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        int fin = a%10, f=0;
        while(a!=0){
            f=a%10;
            a = a/10;
        }
        cout<<fin+f<<endl;
    }
}