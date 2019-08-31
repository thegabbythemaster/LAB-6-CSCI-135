#include <iostream>
using namespace std;


char shiftChar(char c, int rshift){

    char temp = tolower(c);
    int raw = ((int)temp - 97 + rshift);
    raw += 26;
    raw = raw % 26;
    raw += 97;
    temp = (char)raw;


    if((int)c >= 65 && (int)c <= 90){ // uppercase letters
        temp = toupper(temp);
        return temp;
    }
    if((int)c >= 97 && (int)c <= 122){ // lowercase letters
        return temp;
    }
    else{ //punctuation
        return c;
    }
}
string encryptCaesar(string plaintext, int rshift){

    string output;

    for(int i=0; i < plaintext.length(); i++){

    output += shiftChar(plaintext[i], rshift);
    }
    return output;
}

int main(){
    string input = " ";
    int shift;
    
    cout << "Enter Plaintext: ";
    getline(cin, input); 
    cout << "Enter shift: ";
    cin >> shift;
    cout << "Ciphertext     : " << encryptCaesar(input, shift) << endl;
    return 0;
}
