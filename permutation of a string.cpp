//all the permutation of a string.
#include <iostream>
using namespace std;
void subsequence(char inp[100] , int i , char out[100] , int j)
{
    //base case
    if(inp[i] == '\0')
    {
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }
    // recursive case
    out[j] = inp[i];
    subsequence(inp , i+1 , out , j+1);
    subsequence(inp , i+1 , out , j);
}
int main(){
    char inp[100];
    cin>>inp;
    char out[100];
    subsequence(inp , 0 , out , 0);
    return 0;
}
