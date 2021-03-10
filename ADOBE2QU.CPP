#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i, a, b, c, div, z=0;
printf("enter three integer values: a,b and divisor\n");
scanf("%d %d %d", &a, &b, &div);

while(z<=b)
{
for(i=1; z<=b; i++)
{
z=a+i;
c=z%div;
if(c==0)
printf("%d is the  integer which is divisible by %d  \n", z,div,);

}
getch();
}
}