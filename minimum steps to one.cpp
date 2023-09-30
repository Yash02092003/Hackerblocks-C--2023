#include<iostream>
#include<climits>
using namespace std;
int steps(int n){
    if(n == 1){
        return 0;
    }
    int x = INT_MAX;
    int y = INT_MAX;
    int z = INT_MAX;
    x = steps(n-1);
    if(n % 2 == 0){
        y = steps(n/2);
    }
    if(n % 3 == 0){
        z = steps(n/3);
    }
    return min(x , min(y , z)) + 1;
}
int main(){
    int n;
    cin>>n;
    cout<<steps(n)<<endl;
}
