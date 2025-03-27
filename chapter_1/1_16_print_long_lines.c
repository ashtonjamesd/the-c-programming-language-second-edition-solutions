#include <stdio.h>

#define MAXLINE 11

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len, max;
    char line[MAXLINE];
    char longest[MAXLINE];
    
    max = 0;

    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)
        printf("Longest length: %d\nLine: %s", max, longest);
    
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < lim - 1) s[i] = c;
    
    if (c == '\n') {
        if (i < lim - 1) s[i] = c;
        ++i;
    }
    
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i = 0;
    
    while ((to[i] = from[i]) != '\0')
        ++i;
}