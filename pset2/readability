#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int count_letters(string);
int count_words(string);
int count_sentences(string);
int main(void)

{
    //User will input Text
    string s = get_string("Text: ");
    float i = count_letters(s);

    float w = count_words(s);

    float sent = count_sentences(s);

    //Calculating the average number of letters per 100 words
    float L = (i / w) * 100.00;

    //Calculating the average number of sentences per 100 words
    float S = (sent / w) * 100.00;

    //calculate grade level
    float grade = (0.0588 * L) - (0.296 * S) - 15.8;

    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade < 16 && grade > 1)
    {
        printf("Grade %.0f\n", round(grade));
    }


}

int count_letters(string s)
{
    int i = 0;
    int j = 0;
    while (s[i] != '\0')
    {
        i++;
        //if the character is not a letter, j increments by 1
        if (isalpha(s[i]) == 0)
        {
            j++;
        }
    }
    i = i - j + 1;
    return i;
}

//counts the words
int count_words(string s)
{
    int w = 0;
    int l = 0;
    for (l = 0; s[l] != '\0'; l++)
    {
        //isspace will return a 0 if the character is not whitespace
        if (isspace(s[l]) == 0 && isspace(s[l + 1]) != 0)
        {
            w++;
        }
    }
    return w + 1;
}

//counting sentences
int count_sentences(string s)
{
    int k = 0;
    int sent = 0;
    for (k = 0; s[k] != '\0'; k++)
    {
        if (s[k] == '.' || s[k] == '!' || s[k] == '?')
        {
            sent++;
        }
    }
    return sent;
}
