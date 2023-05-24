#include<stdio.h>
#include<string.h>
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
    struct details *ptr;
    ptr = &d1;
    d1.age=17;
    strcpy(d1.contact,"82493479");
    strcpy(d1.name,"sanved");
    printf("%s",(*ptr).contact);
    return 0;
}