#include<iostream>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        int a=0,b=0;
        cin>>a>>b;
        arr[i]=a+b;
    }
    for(auto i:arr){
        cout<<i<<endl;
    }
    return 0;
}
