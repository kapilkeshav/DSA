#include<bits/stdc++.h>
using namespace std;

vector<int> stockspan(vector<int> a){
	vector<int> ans;
	stack<pair<int,int>> s;
	for(auto price:a){
		int days = 1;
		while(!s.empty() && s.top().first <= price){
			days += s.top().second;
			s.pop();
		}
		s.push({price,days});
		ans.push_back(days);
	}
	return ans;
	
}

int main(){
	vector<int> inp = {10,12,3,2,18,17,19};	
	vector<int> result = stockspan(inp);
	for(auto i:result){
		cout<<i<<" ";
	}
}
