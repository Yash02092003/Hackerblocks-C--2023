#include <iostream>
#include <climits>
#include <vector>
#include <cmath>
using namespace std;
int sum = 0;
void maxsum(vector<int> &inp , int i ,int cs)
{
    //base case
    if(i == inp.size())
    {
        return;
    }
    //recursive case
    cs += inp[i];
    sum = max(sum,cs);
    if(cs < 0)
    {
        maxsum(inp,i+1,0);
    }
    else
    {
        maxsum(inp,i+1,cs);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0 ; i < n ; i++)
    {
        int d;
        cin>>d;
        arr.push_back(d);
    }
    maxsum(arr , 0 , 0);
    cout<<sum<<endl;
}
