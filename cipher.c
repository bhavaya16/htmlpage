#include<stdio.h>
#include<conio.h>
int main()
{
char pt[50];
char ct[50];


print("enter the plain text");
scanf("%d",&plaintext);
len=strlen(plaintext);


for(i=0;i<=len;i++)

{
if(pt[i]>='a'||pt<='w')
{
ct[i]=pt[i]+3;
}
print("the encryption id %s",ct);


