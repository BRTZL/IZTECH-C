/*
#include <stdio.h>

int main(){
    char x[20];
    scanf("%s",x);
    printf("%s",x);
}
*/

/*
#include <stdio.h>
#define IN 1  // inside a word
#define OUT 0 // outside a word

// count lines, words, and characters in input*1 maine

int main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}
*/

#include <stdio.h>
#define MAXLINE 1000 //1* maximum input line size *1
int getline(char line[], int maxline);
void copy(char to[], char from[]);

//1* print longest input line *1

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{

    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}