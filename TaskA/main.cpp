/*asks the user to input a line of text (which may possibly include spaces). 
  The program should report all characters from the input line 
  together with their ASCII codes.
 */
#include <iostream>
#include <cctype>
using namespace std;

int main (){
    string s;
 
    cout<<"Input: ";
    getline(cin, s);
    
    for(int i = 0; i < s.length(); i++){
        cout <<s[i] <<" "<<(int)s[i]<<endl;
    }
    cout<<endl;
    return 0;
}