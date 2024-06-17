Caesar cipher DLL
1. Compilation </br>
   `g++ -c main.cpp -o main.o` </br>
   `g++ -c caesar.cpp -o caesar.o`
2. Linking </br>
   `g++ -o main main.o` </br>
   `g++ -shared -o libcaesar.so caesar.o`
3. Checking </br>
   `nm libcaesar.so`
4. Execution
   - <img width="822" alt="Знімок екрана 2024-06-17 о 20 43 37" src="https://github.com/Viktoriia-Semenko/caesar-encryption-vsemenko/assets/150340301/2206c793-8a00-487c-a381-892ae38e0a43">
5. File contents
   - <img width="341" alt="Знімок екрана 2024-06-17 о 20 43 02" src="https://github.com/Viktoriia-Semenko/caesar-encryption-vsemenko/assets/150340301/10537f58-ef8d-4170-ae43-56ad31e9fd2a">
