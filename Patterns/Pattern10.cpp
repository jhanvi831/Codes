/*

Input: 5

Output:
* 
* * 
* * * 
* * * * 
* * * * *
* * * *
* * *
* *
*

*/

/*

//Simple code to understand
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
    for(int i=n; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

*/


//optimised code: using one outer loop

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0; i<2*n; i++){
        int stars = i;
        if(i>n){
            stars = 2*n-i;
        }
        for(int j=0; j<stars; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}