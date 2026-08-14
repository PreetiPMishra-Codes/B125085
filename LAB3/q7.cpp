#include <iostream>
using namespace std;
int main()
{
    // Declare variables: 'n' for array size, counters for vowels (v), consonants (c), digits (d), and spaces (s)
    int n, v = 0, c = 0, d = 0, s = 0;
    // Prompt user to enter the size of the buffer/array
    cout << "enter size ";
    cin >> n;
    // Clear the leftover newline character in the input buffer before reading line text
    cin.ignore();
    // Dynamically allocate memory on the heap for a character array (string) of size 'n'
    char *a = new char[n];
    // Read a full line of text into the dynamically allocated array
    cout << "enter line of size n\n";
    cin.getline(a, n);
    // Iterate through the character array until the null terminator ('\0') is reached
    for (int i = 0; a[i]; i++)
    {
        if (isdigit(a[i]))
            // Increment digit counter if the character is a numeric digit
            d++;
        else if (a[i] == ' ')
            // Increment space counter if the character is a space
            s++;
        else if (isalpha(a[i]))
            // If the character is an alphabetic letter, check if it's a vowel
            // If found in "aeiouAEIOU", increment 'v', otherwise increment 'c'
            (string("aeiouAEIOU").find(a[i]) != string::npos) ? v++ : c++;
    }
    // Display the counts for vowels, consonants, digits, and spaces
    cout << "Vowels=" << v << "\nConsonants=" << c << "\nDigits=" << d << "\nSpaces=" << s;
    // Deallocate the dynamically allocated array to prevent memory leaks
    delete[] a;
}
