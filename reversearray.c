#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++)
    {
        printf("Enter the value of element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    int t;
    for(int i=0 ; i<(int)(n/2);i++)
    {
        t = a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    printf("Reverse array is\n");
    for(int i = 0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
    return 0;
}