#include<iostream>
using namespace std;

int bsearch(int arr[],int u, int l, int k){
    if(u<=l){
        int mid = (u+l)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            return bsearch(arr,u, mid,k);
        }
        else{
            return bsearch(arr,mid,l,k);
        }
    }
    else{
        return -1;
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6};
    int l=sizeof(arr)/sizeof(int);
    int u=0;
    int key = 6;
    int index = bsearch(arr,u,l,key);
    if(index==-1){
        cout<<"Not found!";
    }
    else{
        cout<<"at index: "<<index;
    }
}