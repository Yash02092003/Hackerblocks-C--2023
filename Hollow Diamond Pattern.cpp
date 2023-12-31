/*Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *
Input Format
Constraints
0 < N < 10 (where N is an odd number)

Output Format
Sample Input
5
Sample Output
* *	* * *
* *	  * *
* 	    *
* *   * *
* *	* * *
Explanation
Each '*' is separated from other by a tab.*/
#include <iostream>
using namespace std;
int main(){
    int tr;
    cin>>tr;
    int r=1;
    while(r<=tr){
        cout<<"*"<<'\t';
        r=r+1;
    }
    cout<<endl;
    r=1;
    while(r<(tr+1)/2)
    {
    //star
    int stc=1;
    while(stc<=(tr+1)/2-r){
        cout<<"*"<<'\t';
        stc=stc+1;
    }
    //space
    int spc=1;
    while(spc<=(2*r)-1){
        cout<<" "<<'\t';
        spc=spc+1;
    }
    //star
    int strc=1;
    while(strc<=(tr+1)/2-r){
        cout<<"*"<<'\t';
        strc=strc+1;
    }
    cout<<endl;
    r=r+1;
    }
    r=1;
    while(r<((tr+1)/2)-1){
        int sttc=1;
        while(sttc<=(r+1)){
            cout<<"*"<<'\t';
            sttc=sttc+1;
        }
        int sppc=1;
        while(sppc<=(tr-2*r-2)){
            cout<<" "<<'\t';
            sppc=sppc+1;
        }
        int stttc=1;
        while(stttc<=r+1){
            cout<<"*"<<'\t';
            stttc=stttc+1;
        }
        cout<<endl;
        r=r+1;
    }
    r=1;
    while(r<=tr){
        cout<<"*"<<'\t';
        r=r+1;
    }
    return 0;
}
