/*
In C programming, there are 5 built-in type casting functions. 

atof(): This function is used for converting the string data type into a float data type.
atbol(): This function is used for converting the string data type into a long data type.
Itoa(): This function is used to convert the long data type into the string data type.
itoba(): This function is used to convert an int data type into a string data type.
atoi(): This data type is used to convert the string data type into an int data type.   


Typecast function	 Description
         atof()        Converts string to float  
	 atol()	       Converts string to long
	 atoi()	       Converts string to int
	 itoa()	       Converts int to string
	 ltoa()	       Converts long to string

atof case 1
atol case 2
atoi case 3
itoa case 4
ltoa case 5
*/

#include <stdio.h> 
#include<stdlib.h> 

int main() 
{
char op; 
char a[10];
int aa;
long aaa;
printf("TYPE CASTING with FUNCTIONS PROGRAMS IN C");
printf("\n");
printf("ENTER YOUR CHOICE");
printf("\n");
printf("TYPE 1 FOR atof()        Converts string to float");
printf("\n"); 
printf("TYPE 2 FOR atol()	       Converts string to long");
printf("\n");
printf("TYPE 3 FOR atoi()	       Converts string to int");
printf("\n");
printf("TYPE 4 FOR itoa()	       Converts int to string");
printf("\n");
printf("TYPE 5 FOR ltoa()	       Converts long to string");
printf("\n");




scanf("%c",&op);
switch(op)
{
case '1':
//1 
printf("Converts string to float ");  
printf("\n"); 
printf("enter the string");
printf("\n");
scanf("%s",a);
float val1=atof(a);
printf("%f",val1);
printf("\n");
break;

case '2':
//2
printf("Converts string to long");
printf("\n");    
printf("enter the string");
printf("\n");
scanf("%s",a);
long val2=atol(a);
printf("%ld",val2);
printf("\n");
break;



case '3':
//3
printf("Converts string to int");
printf("\n");    
printf("enter the string");
printf("\n");
scanf("%s",a);
int val3 = atoi(a);
printf("%d\n",val3);
printf("\n");
break;



case '4':
//4
printf("Converts int to string");  
printf("\n");  
printf("enter the integer:");
printf("\n");
scanf("%d",aa);
    char buffer1[20];
    itoa(aa,buffer1,2);   
	// here 2 means binary
    printf("Binary value = %s\n", buffer1);
    printf("\n"); 
    itoa(aa,buffer1,10);   
	// here 10 means decimal
    printf("Decimal value = %s\n", buffer1);
    printf("\n"); 
    itoa(aa,buffer1,16);   
	// here 16 means Hexadecimal
    printf("Hexadecimal value = %s\n", buffer1);
    printf("\n");
break;



case '5':
//5
printf("Converts long to string"); 
printf("\n");   
printf("enter the LONG VALUE:");
printf("\n");
scanf("%ld",aaa);
long  aaa;
    char buffer2[50];
    ltoa(aaa,buffer2,2);   // here 2 means binary
    printf("Binary value = %s\n", buffer2);
    printf("\n");
    ltoa(aaa,buffer2,10);   // here 10 means decimal
    printf("Decimal value = %s\n", buffer2);
    printf("\n");
    ltoa(aaa,buffer2,16);   // here 16 means Hexadecimal
    printf("Hexadecimal value = %s\n", buffer2);
    printf("\n");
break;

}
 
return 0; 
}