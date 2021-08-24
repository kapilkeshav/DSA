#include<iostream>
#include<vector>
#include<string>
using namespace std;

class stack{
	public:
		int top;
		char st[1];
		int l;
		stack(int n){
			top=-1;
			st[n];
			l=n;
		}
		
		void push(char n){
			top+=1;
			st[top] = n;
			cout<<"pushed"<<top<<endl;
		}
		char pop(){
			if (top==-1){
				cout<<"stack empty";
			}
			else{
			char result;
			result = st[top];
			top-=1;
			return result;
			}
		}
		bool isempty(){
			if (top==-1){
				return true;
			}
			else
				return false;
		}
		void output(){
			for(int i=0;i<=l;i++){
				cout<<st[i]<<"  ";
			}
		}
		char topp(){
			return st[top];
		}
		
};
int prec(char n){
	if (n=='^')
		return 3;
	else if (n=='*' || n=='/')
		return 2;
	else if (n=='+' || n=='-')
		return 1;
	else
		return -1;
}
int main(){
	string exp;
	cout<<"enter expression"<<endl;
	getline(cin,exp);
	stack s(exp.length());
	char result[exp.length()];
	int r=0,j=0;
	for (int i=0;i<exp.length();i++){
		if ((exp[i]>='a'&&exp[i]<='z')||(exp[i]>=0&&exp[i]<=9)){
			result[r]=exp[i];
			r+=1;
		}
		else if(exp[i]=='(')
			s.push(exp[i]);
			
		else if (exp[i]==')'){
			j=r;
			while(s.topp()!='('){
				result[j]=s.pop();
				j++;
			}
			s.pop();
			r=j;
		}
		
		else {
			while(s.isempty()!=true && (s.topp())<prec(exp[i])){
				result[r]=s.topp();
				s.pop();
			}
			s.push(exp[i]);
		}
	}
	
	while(s.isempty()!=true){
		result[j]=s.pop();
		j++;
	}
	for (int i=0;i<exp.length();i++){
		cout<<result[i];	
	}
	return 0;
}
