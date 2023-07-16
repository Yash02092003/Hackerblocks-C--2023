//permutation of a string
#include <iostream>
using namespace std;
void permutation(char inp[100] , int i)
{
    //base case
    if(inp[i] == '\0')
    {
        cout<<inp<<endl;
        return;
    }
    
    //recurssive case
    for(int j = i ; inp[j] != '\0' ; j++){
        swap(inp[i],inp[j]);
        permutation(inp , i+1);
        swap(inp[i],inp[j]);    
    }
}
int main(){
    char inp[100];
    cin>>inp;
    permutation(inp , 0);
    return 0;
}
