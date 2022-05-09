#include <stdio.h>
int main() {

    char string[100];
    int vowels = 0, con = 0, dig = 0, space = 0;

    printf("Enter a line of string: ");
    gets(string);

    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = tolower(string[i]);


        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
            string[i] == 'o' || string[i] == 'u') {
                vowels++;
            }

            else if ((string[i] >= 'a' && string[i] <= 'z')) {
                    con++;
            }

            else if (string[i] >= '0' && string[i] <= '9') {
                dig++;
            }

            else if (string[i] == ' ') {
                space++;
            }
        }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", con);
    printf("\nDigits: %d", dig);
    printf("\nWhite spaces: %d", space);
    
  return 0;
}


// output:

// Enter a line of string: C programing is very easy 123

// Vowels: 7
// Consonants: 14
// Digits: 3
// White spaces: 5
