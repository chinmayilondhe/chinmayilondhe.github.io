#include<studio.h>
int main ()
{
int p,r,t,amount;
printf("input principle,rate of interest and time to find out interest:\n");
scanf("%d%d%d",&p,&r,&t);
amount=(p*r*t)/100;
printf("simple interest=%d",amount)
return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[12], str2[24], str3[12];
     puts("enter the name of employee:\n");
     gets(str1);

     puts("enter the address of employee:\n");
     gets(str2);
    strcpy(str3,str1);
    printf(" strcpy(str3,str1):%s\n",str3);
    strlen(str1);
    printf("the length of string:%d\n",strlen(str1));
    strcat(str1,str2);
    printf("strcat(str1,str2):%s\n",str1);
    
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
     char name[20],address[20],company[20],city[10],salary[12],contact_no[11];
     puts("enter the name of employee:\n");
     gets(name);

     puts("enter the address of employee:\n");
     gets(address);

     puts("enter the company of employee:\n");
     gets(company);

     puts("enter the city of employee:\n");
     gets(city);

     puts("enter the salary of employee:\n");
     gets(salary);

     puts("enter the contact info of employee:\n");
     gets(contact_no);
     
     puts(name);
     puts(address);
     puts(company);
     puts(city);
     puts(salary);
     puts(contact_no);
     
     return 0;
}