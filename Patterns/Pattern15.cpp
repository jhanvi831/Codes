/*

Input: 5

Output:
ABCDE
ABCD
ABC
AB
A

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=n; i>0; i--){
        for(char j='A'; j<'A'+i; j++){
            cout<<j;
        }
        cout<<"\n";
    }
}