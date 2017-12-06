#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
}
void tri(int *t, int n)
{
int i, a=0, b=0;
do
{
for(i=n-1;i>=0;i--)
{
if(t[i]>t[i+1])
{
a=t[i];
t[i]=t[i+1];
t[i+1]=a;
}
}
printf("Etape n°%i\n", b+1);
printf("\n");
b=b+1;
}while(b!=n);
}
