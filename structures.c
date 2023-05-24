#include<stdio.h>
struct details
{
    char name[20];
    int age;
    char gender;
    char contact[10];
};
int main()
{
    struct details d1;
    printf("Enter first name : ");
    scanf("%s",d1.name);
    printf("Enter age : ");
    scanf("%d",&d1.age);
    printf("Enter gender M,F or O : ");
    scanf("%s",&d1.gender);
    printf("Enter contact no : ");
    scanf("%s",&d1.contact);
    printf("Details are : \n");
    printf("First Name : %s\n",d1.name); 
    printf("Age : %d\n",d1.age);
    printf("Gender : %c\n",d1.gender);
    printf("Contact : %s\n",d1.contact);
    return 0;
}