
/*

Example 1:
Input: N = 3
Output: 
* * *
* * *
* * *

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
