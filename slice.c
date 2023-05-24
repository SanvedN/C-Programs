#include<stdio.h>
void slice(char *st,int m,int n)
{
    for (int i = m;i < n; i++)
    {
        st[i-m]=st[i];
    }
    st[n-1]='\0';
}
int main()
{
    char st[100];
    int m,n;
    printf("Enter your string : \n");
    gets(st);
    printf("Enter starting and end limit of slice : \n");
    scanf("%d",&m);
    scanf("%d",&n);
    slice(st,m,n);
    printf("Sliced string is : %s\n",st);
    return 0;
}