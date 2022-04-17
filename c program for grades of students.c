// c program to find grades of students
#include<stdio.h>
int main()
{
int bio,chem,phy;
int avg;
    printf("enter marks for bio,chem,phy");
    scanf("%d,%d,%d",&bio,&chem,&phy);
    avg =(bio+chem+phy)/3;
    printf("the avg is %d",avg);
    if(avg>=70 && avg<=100)
    {
    printf("\n grade A");
    }
    else if(avg>=60 && avg<=69)
    {
    printf("\n grade B");
    }
    else if (avg>=50 && avg<=59)
    {
    printf("\n grade C");
    }
    else if(avg>=40 && avg<=49)
    {
    printf("\n grade D");
    }
    else
    {
    printf("fail");
    }
    return 0;
}
    
    