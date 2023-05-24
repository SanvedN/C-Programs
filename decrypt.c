//this program decrypts a string by subtracting 1 ASCII value to each character of the string
//this is the decrypter to the encrypt.c program
#include<stdio.h>
void decrypt(char *s,int n)
{
    for(int i=0;s[i]!='\0';i++)
    s[i]=(char)((int)(s[i])-1);
    s[n-1]='\0';
}
int main()
{
    char s[50];
    printf("Enter your string : \n");
    gets(s);
    decrypt(s,50);
    printf("Decrypted string is : %s\n",s);
    return 0;
}