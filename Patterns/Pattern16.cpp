/*

Input: 5

Output:
A
BB
CCC
DDDD
EEEEE

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(char i='A'; i<'A'+n; i++){
        for(char j='A'; j<=i; j++){
            cout<<i;
        }cout<<"\n";
    }
}