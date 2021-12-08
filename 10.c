#include<stdio.h>

struct Employee_Detail  
{
    int e_id;
    char name[10];
    char desi[100];
    int s;
};

void main()
{
    struct Employee_Detail emp; 

    printf("ID=");
    scanf("%d",&emp.e_id);

    printf("Name=");
    scanf("%s",&emp.name);

    printf("Designation=");
    scanf("%s",&emp.desi);

    printf("Salary=");
    scanf("%d",&emp.s);

    printf("\n\n------------------------\n\nid=%d",emp.e_id);
    printf("\nname=%s",emp.name);
    printf("\ndesignation=%s",emp.desi);
    printf("\nSalary=%d",emp.s);
}