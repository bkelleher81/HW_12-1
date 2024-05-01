#include "Words.h"
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int WordCounter::countWords(const char* str) 
{
    int wordCount = 0;
    bool inWord = false;

    // Iterate through each character in the string
    while (*str) 
    {
        // If the current character is a space or punctuation, we're not in a word
        if (isspace(*str) || ispunct(*str)) 
        {
            inWord = false;
        }
        // If the current character is a letter and we're not already in a word, count it as a new word
        else if (!inWord) 
        {
            wordCount++;
            inWord = true;
        }
        // Move to the next character
        str++;
    }

    return wordCount;
}