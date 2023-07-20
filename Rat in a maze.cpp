//Classsical Rat in a Maze Problem;
//for printing multiple path
#include <iostream>
using namespace std;
bool rat_in_a_maze(char maze[20][20] , int sol[20][20] , int i , int j , int n , int m)
{
    if(i == n-1 and j == m-1)
    {
        sol[i][j] = 1;
        for(int l = 0 ; l < n ; l++)
        {
            for(int k = 0 ; k < m ; k++)
            {
                cout<<sol[l][k];
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<endl;
        sol[i][j] = 0;
        return false;
    }
    sol[i][j] = 1;
    if(j < m-1 and maze[i][j+1] != 'B'){
        if(rat_in_a_maze(maze,sol,i,j+1,n,m)){
            return true;
        }
    }
    if(i < n-1 and maze[i+1][j] != 'B'){
        if(rat_in_a_maze(maze,sol,i+1,j,n,m)){
            return true;
        }
    }
    sol[i][j] = 0;
    return false;
}
int main(){
    char maze[20][20] = {"UUBB",
					"UUUU",
					"BUUB",
					"BUUU",};
    int sol[20][20] = {0};
    rat_in_a_maze(maze , sol , 0 , 0 , 4 , 4);
    return 0;
}



//Classsical Rat in a Maze Problem;
//for printing unique paths
#include <iostream>
using namespace std;
bool rat_in_a_maze(char maze[20][20] , int sol[20][20] , int i , int j , int n , int m)
{
    if(i == n-1 and j == m-1)
    {
        sol[i][j] = 1;
        for(int l = 0 ; l < n ; l++)
        {
            for(int k = 0 ; k < m ; k++)
            {
                cout<<sol[l][k];
            }
            cout<<endl;
        }
        return false;
    }
    sol[i][j] = 1;
    if(j < m-1 and maze[i][j+1] != 'B'){
        if(rat_in_a_maze(maze,sol,i,j+1,n,m)){
            return true;
        }
    }
    if(i < n-1 and maze[i+1][j] != 'B'){
        if(rat_in_a_maze(maze,sol,i+1,j,n,m)){
            return true;
        }
    }
    sol[i][j] = 0;
    return false;
}
int main(){
    char maze[20][20] = {"UUBB",
					"UUUU",
					"BUUB",
					"BUUU",};
    int sol[20][20] = {0};
    rat_in_a_maze(maze , sol , 0 , 0 , 4 , 4);
    return 0;
}
