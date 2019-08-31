#include <iostream>
#include <cctype> //declaring type library
#include <string>//specify we using strings
using namespace std;


string encryptVigenere(string plaintext, string keyword){

    string x = "";
    char y;
    int h;
    int k = 0;

    for(int i = 0; i < plaintext.length(); i++)
    {

        if(!isalpha(plaintext[i])){ //goes through each array to see if its
            x+= plaintext[i]; //a letter

        }
        else{
            char temp = keyword[k];
            y = temp - 97;
            if(isupper(plaintext[i])){ //for upper case
                plaintext[i] = plaintext[i] - 65;
                plaintext[i] = plaintext[i] + (int)y;
                h = plaintext[i]%26;
                plaintext[i]= h + 65;

            }

            else if(islower(plaintext[i])){ //for lower case
                plaintext[i] = plaintext[i] + (int)y;
                h = plaintext[i]%26;
                plaintext[i] = h + 97;
            }

           k++;

        if(k > keyword.length()-1){
           k = 0;
        }
        x+=plaintext[i];
        }
    }
    return x;
}
int main (){
    cout << encryptVigenere("Hello, World!", "cake");
}

