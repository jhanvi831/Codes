/*

Input: 5

Output:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

Hint: Break it down into 4 parts

  P1    P2
*****|*****
**** | ****
***  |  ***
**   |   **
*    |    *
--P3----P4--
*    |    *
**   |   **
***  |  ***
**** | ****
*****|*****

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
            
        //upper left
        for(int j=n-i; j>0; j--){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        
        //upper right
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=n-i; j>0; j--){
            cout<<"*";
        }
        
        cout<<"\n";
    }

    //lower side
    for(int i=0; i<n; i++){
        
        //lower left
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        
        //lower right
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        
        cout<<"\n";
    }
}