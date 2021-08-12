## Substitution Pseudocode

### Get key 
1a - Input: single 26 alphabetic character command line argument
./substitution VCHPRZGJNTLSKFBDQWAXEUYMOI

int main(int argc, string argv[])
{
    <!-- code here -->
}

## Validate key
- Throw an error if there isn't just one argument
- Make sure argument is 26 characters
- Make sure all chars are alphabetic - isalpha()
- Make sure that no char is repeated 
- Make sure no char is repeated case-insensitive - strcasecmp(string s1, string s2);
- If input is invalid, print corresponding error message and return value of 1

## Get plaintext
1b - Output: prompt user for plaintext - get_string()
plaintext:  
2a - Input: users plaintext
hello, world

## Encipher
For each character in the plaintext input
If it is a alphabetic character
Find the characters alphabetic index
Find what letter is at that index in the commandline argument (case insensititive)
Print that letter in the same case as it is in the plaintext
Leave non-alphabetic characters as-is, printing them.

## Print ciphertext
2b - Output: ciphertext
- Print enciphered version of user input
"ciphertext: jrssb, ybwsp"
- print a new line and exit program by returning 0 from main.

Examples:

$ ./substitution VCHPRZGJNTLSKFBDQWAXEUYMOI
plaintext:  hello, world
ciphertext: jrssb, ybwsp

$ ./substitution YTNSHKVEFXRBAUQZCLWDMIPGJO
plaintext:  HELLO
ciphertext: EHBBQ