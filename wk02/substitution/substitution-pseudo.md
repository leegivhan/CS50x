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
## - Make sure that no char is repeated (case-insensitive) - strcasecmp(string s1, string s2);

- If input is invalid, print corresponding error message and return value of 1

## Get plaintext
1b - Output: prompt user for plaintext - get_string()
plaintext:  
2a - Input: users plaintext
hello, world

## Encipher
- For each alphabetic character, determine what letter it maps to.
- Leave non-alphabetic characters as-is.
- Preserve case.

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