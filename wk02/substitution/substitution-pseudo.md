## Substitution Pseudocode

### 1a - Input: single 26 alphabetic character command line argument
./substitution VCHPRZGJNTLSKFBDQWAXEUYMOI

If user doesn't cooperate by...
- Providing more than one argument
- Not providing an argument
- Providing a character that is not an alphabetic character
- Providing key with repeating characters

- ...Then print error value of my choice like "Usage: ./substition key" and return value of 1

- If user doesn't provide a command line argument with 26 characters as key, print
"Key must contain 26 characters."

- Program accepts 26 character command line argument that is case insensitive.

### 1b - Output: prompt user for plaintext
plaintext:  

### 2a - Input: users plaintext
hello, world

### 2b - Output: ciphertext
ciphertext: jrssb, ybwsp
- encrypt messages using a command-line argument key of an encrypted (rearranged) alphabet
- Neither comma nor space should be substituted by the cipher (only alpha characters)
- Case of original message should be preserved
- After outputting ciphertext, print a new line and exit program by returning 0 from main.