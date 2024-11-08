#include<stdio.h>
#include<stdlib.h>

struct studentData{
char name[50];
char usn[20];
int marks[5];
int total;
float avg;
};
int main()
{   
    
    struct studentData stdvar;
    stdvar.total=0;
    printf("Enter name:");
    scanf("%s",stdvar.name);
    printf("Enter usn:");
    scanf("%s",stdvar.usn);
    for(int i=0;i<5;i++)
    {
        printf("Enter marks of subject%d:",i+1);
        scanf("%d",&stdvar.marks[i]);
        stdvar.total+=stdvar.marks[i];
    }
    printf("Totatl marks: %d\n",stdvar.total);
    stdvar.avg= stdvar.total/5;
    printf("Average marks:%f\n",stdvar.avg);
    if(stdvar.avg>=90)
    {
        printf("Grade A");
    }
    else if(stdvar.avg>=80)
    {
        printf("Grade B");
    }
    else if(stdvar.avg>=70)
    {
        printf("Grade C");
    }
    else if(stdvar.avg>=60)
    {
        printf("Grade D");
    }
    else if(stdvar.avg>=50)
    {
        printf("Grade E");
    }
    else
    {
        printf("Fail");
    }

    return 0;

    
}
