#include <iostream>
#include "caesar.h"

using namespace std;

int main(){
    char raw_text[] = "ZZRoses are red, violets are blue";
    int key = 1;

    char* encrypted_text = encrypt(raw_text, key);
    char* decrypted_text = decrypt(encrypted_text, key);

    cout << "Encrypted text: " << encrypted_text << endl;
    cout << "Decrypted text: " << decrypted_text << endl;

    return 0;
}
