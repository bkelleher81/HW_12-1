#include "Words.h"
#include <iostream>
using namespace std;

int main() 
{
    char str[100]; // Assuming max length of input string is 100 characters
    WordCounter h;

    // Prompt user for input
    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Call the function to count words
    int count = h.countWords(str);

    // Display the result
    cout << "Number of words: " << count << std::endl;

    return 0;
}