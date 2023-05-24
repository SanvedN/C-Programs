//this program encrypts a string by adding 1 ASCII value to each character of the string
#include<stdio.h>
void encrypt(char *s,int n)
{
    for(int i=0;s[i]!='\0';i++)
    s[i]=(char)((int)(s[i])+1);
    s[n-1]='\0';
}
int main()
{
    char s[50];
    printf("Enter your string : \n");
    gets(s);
    encrypt(s,50);
    printf("Encrypted string is : %s\n",s);
    return 0;
}