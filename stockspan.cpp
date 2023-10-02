#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> prices;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin>>x;
		prices.push_back(x);
	}
	stack<pair<int , int>> stock;
	vector<int> ans;
	int ct = 1;
	for(int i = 0 ; i < n ; i++){
		if(stock.empty()){
			stock.push(make_pair(prices[i] , ct));
			ans.push_back(ct);
			ct = 1;
		}
		else{
			while(!stock.empty() and stock.top().first <= prices[i]){
				ct += stock.top().second;
				stock.pop();
			}
			ans.push_back(ct);
			stock.push(make_pair(prices[i] , ct));
			ct = 1;
		}
	}
	for(int i = 0 ; i < ans.size() ; i++){
		cout<<ans[i]<<" ";
	}
	cout<<"END"<<endl;
	return 0;
}
