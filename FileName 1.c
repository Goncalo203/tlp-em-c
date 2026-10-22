#include <stdio.h> ?

#include <locale.h> ?

int main(void)
{
setlocale(LC_ALL, "");
float n;
do
{
	printf(" % f\n", n);
}
while (n < 5);
return 0;
}