#include <stdio.h>
#include <conio.h>
void main()
{
int a[50];
int n;
int i,small,s;
clrscr();
printf("enter number of element");
scanf("%d",&n);
printf("enter %d element",n);
for(i=0;i<n;i++)
{ 
scanf("%d",&a[i]);
}
small=s=a[0];
for(i=1;i<n;i++)
{
if(small>a[i])
{
s=small;
small=a[i];
}
else if(s>a[i] && a[i]!=small)
{
s=a[i];
}
}
printf("%d",s);
getch();
}
