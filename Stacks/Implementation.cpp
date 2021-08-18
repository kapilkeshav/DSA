#include<iostream>
using namespace std;
class stack{
	int top;
	int l;
	public:
		int arr[1];
		stack(int n){
		arr[n];
		top = -1;
		l = n;
	}
	
	void push(int x){
		if (top>=l-1)
			cout<<"Stack overflow"<<endl;
		else{
			arr[++top] = x;
			cout<<x<<" pushed into stack at index"<<top<<endl;
		}
	}
	int pop(){
		if (top < 0){
			cout<<"stack underflow"<<endl;
		}
		else{
			cout<<"poped value at index "<<top<<endl;
			int x = arr[top--];
			return x;
		}
	}	
	void peek(){
		if (top==-1)
			cout<<"stack empty!"<<endl;
		else{
			cout<<arr[top]<<endl;
		}
	}
};

int main(){
	stack s(5);
	s.push(12);
	s.push(13);
	s.push(14);
	s.push(15);
	s.push(16);
	s.pop();
	s.push(17);
	s.pop();
	s.pop();
	s.peek();
	return 0;
}
