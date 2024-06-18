# Caesar cipher DLL
1. Compilation </br>
   `g++ -c main.cpp -o main.o` </br>
   `g++ -c caesar.cpp -o caesar.o`
2. Linking </br>
   `g++ -o main main.o` </br>
   `g++ -shared -o libcaesar.so caesar.o`
3. Checking </br>
   `nm libcaesar.so`
4. Execution
   - <img width="614" alt="Знімок екрана 2024-06-18 о 17 44 47" src="https://github.com/Viktoriia-Semenko/caesar-encryption-vsemenko/assets/150340301/13bec3f4-f3c5-4399-a5c0-beea2224d082">
5. File contents (with static library)
   - <img width="243" alt="Знімок екрана 2024-06-18 о 17 46 44" src="https://github.com/Viktoriia-Semenko/caesar-encryption-vsemenko/assets/150340301/c206c68a-d331-477e-8319-b5f3b2e6997b">

