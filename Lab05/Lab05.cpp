// Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Function to translate text
char translate()
{
    string text;
    vector<char> cypher{ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

    cout << "Input text to cypher: ";
    getline(cin, text);

    //translate each character in the string one by one
    for (int i = 0; i <= text.length(); i++) {
        int textSlot = int(text[i]);

        //translate capital letters as normal
        if (std::isupper(textSlot)) {
            return  char(cypher[textSlot-65]);
        }

        //convert lowercase letters into uppercase before translating
        else if (std::islower(textSlot)) {
            int upperCaseLetter = textSlot - 32;
            int upperCaseCode = int(cypher[upperCaseLetter - 65]);
            return char(upperCaseCode + 32);
        }

        //special character are not translated
        else {
            return char(text[i]);
        }
    }

    cout << "Encrypted Message: " << text << endl;

}

int main()
{
    translate();

}
