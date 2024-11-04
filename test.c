#include<stdio.h>
#include<string.h>
  
int main()
{

        

    // check if number is between 10 and 20 (inclusive) and even
    /*int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n>1 && n<1000)
    {
    if(10<=n && n<=20 && n%2==0)
    {
    printf("Valid");
    }
    else
    {
    printf("Invalid");
    }
    }else
    {
        printf("Invalid");
    }
    */



    //hexadecimal to decimal,octal,uppercase conversion
    /*int n;
    printf("Enter hexadecimal input:");
    scanf("%x",&n);
    printf("Your input : %x",n);
    printf("\nYour input as a decimal : %u",n);
    printf("\nYour input as an octal : %o",n);
    printf("\nYour input as an uppercase hexadecimal : %X",n);
    */






    //float to int explicit conversion
    float n;
    printf("Input float:");
    scanf("%f",&n);
    printf("float :%f",n);
    printf("\nInteger : %d", (int)n);



    //ascii
    // char str[100];
    // printf("Enter string: ");
    // scanf("%s",str);
    // for(int i=0;i<(strlen(str));i++)
    // printf("ASCII value of %c: %d\n",str[i],str[i]);


    //student marks
    // char name[50];
    // char usn[20];
    // int marks[5],total=0;
    // float avg;
    // printf("Enter name:");
    // scanf("%s",name);
    // printf("Enter usn:");
    // scanf("%s",usn);
    // for(int i=0;i<5;i++)
    // {
    //     printf("Enter marks of subject%d:",i+1);
    //     scanf("%d",&marks[i]);
    //     total+=marks[i];
    // }
    // avg= total/5;
    // printf("Average marks:%f\n",avg);
    // if(avg>=90)
    // {
    //     printf("Grade A");
    // }
    // else if(avg>=80)
    // {
    //     printf("Grade B");
    // }
    // else if(avg>=70)
    // {
    //     printf("Grade C");
    // }
    // else if(avg>=60)
    // {
    //     printf("Grade D");
    // }
    // else if(avg>=50)
    // {
    //     printf("Grade E");
    // }
    // else
    // {
    //     printf("Fail");
    // }

    //int n;
    // printf("Enter the number of students:");
    // scanf("%d",&n);
    //char name[n];
    // char usn[n];
    // int marks[n];
    // int sum=0;
    // float avg;
    // for(int i=0;i<n;i++)
    // {
    //     printf("Enter name of student %d:" ,i+1);
    //     scanf("%s",&name[i]);
    //     printf("Enter usn of student %d:",i+1);
    //     scanf("%s",&usn[i]);
    //     printf("Enter marks of student %d:",i+1);
    //     scanf("%d",&marks[i]);
    //     sum+=marks[i];
    //     if(marks[i]>marks[i+1])
    //     {
    //     highest=marks[i];
    //     }else
    //     {   
    //     highest=marks[i+1];
    //     }
    // }
    // avg=sum/n;
    // printf("Average marks:%f\n",avg);
    // printf("Highest marks:%d",highest);
    return 0;

}