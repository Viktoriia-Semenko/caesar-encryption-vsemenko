#ifndef CAESAR_H
#define CAESAR_H

extern "C"{
char* encrypt(char* raw_text, int key);
char* decrypt(char *encrypted_text, int key);
}

#endif
