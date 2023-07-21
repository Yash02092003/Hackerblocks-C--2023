//classical nqueen problem
#include <iostream>
using namespace std;
bool kyahumqueenrakhsaktehain(int board[100][100] , int i , int j , int n)
{
    for(int k = i - 1; k >= 0 ; k--)
    {
        if(board[k][j]==1)
        {
            return false;
        }
    }
    int p = i - 1;
    int q = j + 1;
    while(p >= 0 and q<n)
    {
        if(board[p][q] == 1)
        {
            return false;
        }
        p--;
        q++;
    }
    int r = i - 1;
    int s = j - 1;
    while(r >= 0 and s >= 0)
    {
        if(board[r][s] == 1)
        {
            return false;
        }
        r--;
        s--;
    }
    return true;
}
bool nqueen(int board[100][100] , int i ,int n)
{
    //base case
    if(i == n)
    {
        for(int k = 0 ; k < n ; k++)
        {
            for(int l = 0 ; l < n ; l++)
            {
                cout<<board[k][l];
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<endl;
        return false;
    }
    //recursive case
    for(int j = 0 ; j < n  ; j++){
        if(kyahumqueenrakhsaktehain(board , i , j , n))
        {
            board[i][j] = 1;
            if(nqueen(board , i+1 , n))
            {
                return true;
            }
        }
        board[i][j] = 0;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int board[100][100] = {0};
    nqueen(board , 0 , n);
    return 0;
}
