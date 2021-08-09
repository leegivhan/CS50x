# Create program that encrypts messages by N letters in alphabet where user can make a command line argument of what N is.

- Get key from user.

Command line argument example:
./ceasar 13

- Check that program was run with one command line argument.
- Check that command line argument is non negative integer
- If argument is incorrect, program should print the message "Usage: ./caesar key" and return a value of 1 in main.

- Convert command line argument from string to int

- Prompt user for text
"plaintext: "

Only rotate alphabetical letters.
Lower case letters should remain lower case letters. Uppercase letters should remain uppercase.
If it's neither a lower case or uppercase letter, print it as is.

for each character in plaintext string
    if alphabetic - isalpha('Z')
        preserve case - isupper(), islower()
        shift plaintext character by key
print ciphertext

## Cipher the text

use alphabetical index
ciphertext = ('plaintext letter' + key) % 26

Is it the same with both lower and uppercase?

Alphabetic wraparound:
Start with: ASCII values
encipher: alphabetical index
print: ASCII values

How do you go from ASCII to alphabetical and from alphabetical to ASCII?

Iterate over each character, preserving case, shifting character by the key (ensuring it stays in alphabet)

- Print encrypted text
ciphertext: