/*You will be given a number N. You have to code a hollow diamond looking pattern.

The output for N=5 is given in the following image.

Screen Shot 2016-06-09 at 2.47.18 pm.png

Input Format
The input has only one single integer N.

Constraints
Output Format
Output the given pattern.

Sample Input
Sample Output
Explanation
Write a code to print above given pattern. No space between any two characters.*/


#include <iostream>
using namespace std;
int main(){
    int tr;
    cin>>tr;
	tr=2*tr-1;
    int r=1;
    while(r<=tr){
        cout<<"*";
        r=r+1;
    }
    cout<<endl;
    r=1;
    while(r<(tr+1)/2)
    {
    //star
    int stc=1;
    while(stc<=(tr+1)/2-r){
        cout<<"*";
        stc=stc+1;
    }
    //space
    int spc=1;
    while(spc<=(2*r)-1){
        cout<<" ";
        spc=spc+1;
    }
    //star
    int strc=1;
    while(strc<=(tr+1)/2-r){
        cout<<"*";
        strc=strc+1;
    }
    cout<<endl;
    r=r+1;
    }
    r=1;
    while(r<((tr+1)/2)-1){
        int sttc=1;
        while(sttc<=(r+1)){
            cout<<"*";
            sttc=sttc+1;
        }
        int sppc=1;
        while(sppc<=(tr-2*r-2)){
            cout<<" ";
            sppc=sppc+1;
        }
        int stttc=1;
        while(stttc<=r+1){
            cout<<"*";
            stttc=stttc+1;
        }
        cout<<endl;
        r=r+1;
    }
    r=1;
    while(r<=tr){
        cout<<"*";
        r=r+1;
    }
    return 0;
}
