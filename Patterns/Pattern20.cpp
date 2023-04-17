/*

Input: 5

Output:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

/*

//Simple code to understand
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }   

    for(int i=0; i<n; i++){
        if(i==0){
            continue;
        }
        for(int j=n-i; j>0; j--){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=n-i; j>0; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
}
*/

//optimised code: using one outer loop

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int iSpace = 2*n-2;

    for(int i=1; i<=2*n-1; i++){

        int stars = i;

        if(i>n){
            stars = 2*n-i;
        }

        for(int j=0; j<stars; j++){
            cout<<"*";
        }
        for(int j=0; j<iSpace; j++){
            cout<<" ";
        }
        for(int j=0; j<stars; j++){
            cout<<"*";
        }
        cout<<"\n";
        
        if(i<n) iSpace-=2;
        else iSpace+=2;
    }

    return 0;
}