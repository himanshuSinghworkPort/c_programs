#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<windows.h>

void password();
void menu();
void fordelay(int j);
void close(void );


int main_exit;
void main()
{
password();

getch();
}

void password()
{
char pass[20]="himanshu",password[20];
int i;
printf("enter password to login:......");
scanf("%s",password);
if(strcmp(password,pass)==0)
{
printf("password match");
printf("\n");
printf("loading");
for(i=0;i<7;i++)
 {
 fordelay(100000000);
 printf(".");
 }
 system("cls");
 menu();
}
else
{
printf("wrong password");
printf("\n");
login_try:
printf("enter 1 to try again and 0 to exit");
scanf("%d",&main_exit);
if(main_exit==1)
{
system("cls");
main();

}
else if(main_exit==0)
{
system("cls");
close();

}
else
{
printf("invalid");
fordelay(10000000);
system("cls");
goto login_try;
}
}




}


void menu()
{
printf("hello world");
}

void fordelay(int j)
{
int i,k;
for(i=0;i<j;i++)
{
k=i;
}}
void close(void)
{
printf("\n\n\n\t\t\t @ program by himanshu!!!!!!@");
}

