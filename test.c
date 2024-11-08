#include<stdio.h>
#include<string.h>

int main()
{   

    //removing redundant values from the string
    /*
    char str[15], st2[60];
    printf("Enter a string:");
    scanf("%s",&str);
    for(int i=0;i<strlen(str)-1;i++)
    {
        if(str[i]==str[i+1])
        {
            str[i] = ' ';
        }
    }
    printf("String after removing redundant values: %s\n",str);
    
    */
   //emirp number
    /*int num, reversed = 0, original, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime
    for (i = 2; i * i <= num; i++) 
        if (num % i == 0) { printf("Not an emirp"); return 0; }

    // Reverse the number
    original = num;
    while (original > 0) {
        reversed = reversed * 10 + original % 10;
        original /= 10;
    }

    // Check if the reversed number is prime
    for (i = 2; i * i <= reversed; i++) 
        if (reversed % i == 0) { printf("Not an emirp"); return 0; }

    // Check if original and reversed are different
    if (reversed != num) 
        printf("Emirp number");
    else 
        printf("Not an emirp");*/


    
    //check if number is prime, and reverse of number is also prime
    // int num[5], rev=0;
    // printf("Enter a number:");
    // scanf("%d",&num);
    // for(int i=5;i>0;i--)
    // {
    //     rev=num[i];
    // }
    // if(num%num==0)
    // {
    //     printf("Prime");
    //     if(rev%rev==0)
    //     {
    //         printf("reverse of the number is also prime");
    //     }   
    // }
    // int num; int rev=0;
    // printf("Enter a number:");
    // scanf("%d",&num);
    // // for(int i=len(num);i>0;i--)
    // // {
    // //     rev=num[i];
    // // }
    // // printf("Reversed number: %d\n",rev);
    // if(!(num%num==0 && rev%rev==0))
    // {
    //     printf(" Not Prime");
    //     // if(rev%rev==0)
    //     // {
    //     //     printf("reverse of the number is also prime");
    //     // }
    // }
    // else
    // {
    //     printf("Prime");
    // }




    //input number and display day
    /*int n;
    printf("Enter a number(1-7):");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid input");
        break;
    }
    */
    //experminting
    // int m ,n,k;
    // m=sizeof(2) ;
    // n=sizeof('2') ;
    // k=sizeof("2") ;
    // printf("%d %d %d",m,n,k);
    
    //double x= 296/128;
    //printf("%Lf",(float)x);

    //experminting increment 
    // int a=1,b;
    // b= (++a) + (a++);
    // printf("\na=%d and b=%d", a,b);
    // printf("\n a=%d then a=%d",a,a++);
    //decimal number to binary conversion
    /*int num; int binary[32];
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Binary number is:");
    // while(num>0)
    // {
    //     printf("%d",num%2);
    //     num=num/2;
    // }
    int i=0;
    while(num>0)
    {   
         binary[i]=num%2;
         num=num/2;
         i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    */

    // binary to decimal conversion
    /*int num; int decimal[32];
    printf("Enter a binary number:");
    scanf("%d",&num);
    printf("Decimal number is:");
    int i=0;
    while(num>0)
    {
        decimal[i]=num%10;
        num=num/10;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",decimal[j]);
    }
    
    
    // int i=0,rem,dec=0;
    // while(num>0)
    // {
    //     rem=num%10;
    //     num=num/10;
    //     dec=dec+rem*pow(2,i);
    //     i++;
    // }
    // printf("%d",dec);
*/

    //palindrome with for loop
    /*char str[15];
    printf("Enter a string:");
    scanf("%s",&str);
    for(int i=0;i<strlen(str)-1;i++)
    {
        if(str[i]!=str[strlen(str)-i-1])
        {
            printf("Not a palindrome");
            break;
        }
        else
        {
            printf("Palindrome");
            break;
        }
    }*/

    //palindrome w strrev
    /*char str[15]; char rev[15];
    
    printf("Enter a string:");
    //scanf("%s",&str);
    gets(str);
    strcpy(rev,str);
    strrev(rev);
    printf("Reversed string: %s\n",strrev(str));
    if(strcmp(str,rev)==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    */


    //summation of square of numbers
    /*int n , sum=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   
        printf("%d , square = %d\n",i,i*i);
        sum+=i*i;
    }
    printf("sum of the squares=%d",sum);*/


    //summation of n numbers
    /*int n,sum=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   
        printf("%d\n",i);
        sum+=i;
    }
    printf("sum=%d",sum);
*/
    //fibonacci series
    /*int n, x=0, n1=0, n2=1;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("fibonacci series:");
    if(n==1)
    {
        printf("%d\n",0);
    }
    if(n>1)
    {
        printf("%d\n%d\n",0,1);

    }
    for(int i=0;i<n-2;i++)
    {
        x=n1+n2;
        printf("%d\n",x);
        n1=n2;
        n2=x;
    }
   */
    
    //factorial
    /*int n, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    void factorial(int n);
    {
        return fac
    }
    if(n==0 || n==1)
    {
        fact=1;
    }else{
        return fact=n*factorial(n-1);
    }
*/
        
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






    //float  to int explicit conversion
    /*float n;
    printf("Input float:");
    scanf("%f",&n);
    printf("float :%f",n);
    printf("\nInteger : %d", (int)n);
    */



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

    /*int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    char name[n]; 
    char usn[n]; char topper[50];
    int marks[n];
    int sum=0, highest=0;
    float avg;
    for(int i=0;i<n;i++)
    {
        printf("Enter name of student %d:" ,i+1);
        scanf("%s",&name[i]);
        printf("Enter usn of student %d:",i+1);
        scanf("%s",&usn[i]);
        printf("Enter marks of student %d:",i+1);
        scanf("%d",&marks[i]);
        sum+=marks[i];
        if(marks[i]>highest)
        {
        highest=marks[i];
        //strcpy(topper,name[i]);
        }
    }
    avg=sum/n;
    printf("Average marks:%f\n",avg);
    printf("Topper secured the highest marks:%d",highest);
    */
    return 0;

}