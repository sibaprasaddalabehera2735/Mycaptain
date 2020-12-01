#include<stdio.h>
struct employee
{
    int phno,age,salary;
    char name[25];
}  
    emp[100];
 
void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as ph no , name , age , salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %d",&emp[i].phno,emp[i].name,&emp[i].age,&emp[i].salary);
    }
    printf("\nEMP_NUMBER\tEMP_NAME\tEMP_AGE\t\tEMP_SAL\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%d\t\t%d\n",emp[i].phno,emp[i].name,emp[i].age,emp[i].salary);
    }
}


