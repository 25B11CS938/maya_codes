#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        ch=ch+('a'-'A');
    }
    if(ch=='a'||ch=='e'||ch=='i'||ch=='O'||ch=='u')
    {
        printf("VOWEL");
    }
    else
    {
     printf("CONSONANT");
    }
return 0;
}
