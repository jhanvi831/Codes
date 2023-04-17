/*

Input: 4

Output:
   A
  ABA
 ABCBA
ABCDCBA

Hint: solve left then right and merge
handle i=0 for only one charater

left|right
   A|
  AB|A
 ABC|BA
ABCD|CBA

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
       
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        
        int ch=65;
        for(int j=0; j<=i; j++){
            cout<<char(ch);
            ch++;
        }
        
        if(i==0){
            cout<<"\n";
            continue;
        }
        
        else{
            for(char j='A'+i-1; j>='A'; j--){
                cout<<j;
            }
            for(int j=0; j<n-i-2;j++){
            cout<<" ";
            }
        }
        cout<<"\n";
    }
}