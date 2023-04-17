/*

Input: 5

Output:
E
E D
E D C
E D C B
E D C B A

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        char ch = 'A'+n-1;
        for(int j=0; j<=i; j++){
            cout<<ch--<<" ";
        }
         cout<<"\n";
    }
}