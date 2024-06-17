#include <iostream>
#include <dlfcn.h>

using namespace std;

int main() {
    void* handle = dlopen("../libcaesar.dylib", RTLD_LAZY);
    if (!handle) {
        cerr << "Lib not found" << dlerror() << endl;
        return -1;
    }

    typedef char* (*encrypt_func)(char*, int);
    typedef char* (*decrypt_func)(char*, int);

    encrypt_func encrypt = (encrypt_func)dlsym(handle, "encrypt");
    decrypt_func decrypt = (decrypt_func)dlsym(handle, "decrypt");

    if (decrypt == nullptr || encrypt == nullptr) {
        cerr << "Proc not found" << dlerror() << endl;
        dlclose(handle);
        return -1;
    }

    char raw_text[] = "ZZRoses are red, violets are blue";
    int key = 1;

    char* encrypted_text = encrypt(raw_text, key);
    char* decrypted_text = decrypt(encrypted_text, key);

    cout << "Encrypted text: " << encrypted_text << endl;
    cout << "Decrypted text: " << decrypted_text << endl;

    dlclose(handle);

    return 0;

}
