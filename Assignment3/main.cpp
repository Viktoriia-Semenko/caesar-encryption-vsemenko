#include <iostream>
#include <cstring>
#include <dlfcn.h>

using namespace std;

int main() {
    void* handle = dlopen("../caesar.so", RTLD_LAZY);
    if (!handle) {
        cerr << "Lib not found" << dlerror() << endl;
        return -1;
    }

    typedef int(*function_ptr)(int, int);
    function_ptr caesar_functions = (function_ptr)dlsym(handle, "caesar");
    if (caesar_functions == nullptr) {
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
    free(encrypted_text);
    free(decrypted_text);

    return 0;

}
