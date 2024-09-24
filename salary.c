//Write code to calculate gross salary//
#include<stdio.h>
int main(){
int bsalary;

printf("Enter Your Basic Salary\n");
scanf("%d",&bsalary);
int da = (15.0/100.0)*bsalary;
int rda = (20.0/100.0)*bsalary;
int salary = da + rda + bsalary;

printf("Your Gross Salary is %d",salary);



}