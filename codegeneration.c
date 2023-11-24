#include<stdio.h>  
#include<conio.h>  
#include<string.h>  
 
void main() 
{ 
int n,i,j; 
char a[50][50];  
printf("Enter the number of intermediate codes:");  
scanf("%d",&n);  
 
for(i=0;i<n;i++)  
{ 
 
 
printf("Enter the 3 address code: %d ",i+1);  
for(j=0;j<6;j++) 
{ 
scanf("%c",&a[i][j]);} 
}  
printf("The generated code is: ");  
for(i=0;i<n;i++) 
{ 
printf("\nMov %c,R%d",a[i][3],i);  
if(a[i][4]=='-') 
{ 
printf("\nSub %c,R%d",a[i][5],i);}  
if(a[i][4]=='+')  
{ 
printf("\nAdd %c,R%d",a[i][5],i);} 
 
if(a[i][4]=='*')  
{ 
printf("\nMul %c,R%d",a[i][5],i);}  
if(a[i][4]=='/') 
{ 
printf("\nDiv %c,R%d",a[i][5],i);}  
printf("\nMov R%d, %c",i,a[i][1]);  
printf("\n"); 
} 
getch(); 
} 
