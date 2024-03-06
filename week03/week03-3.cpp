#include <stdio.h>
int main()
{
	int a=10;
	printf("%5d佔了五格\",a);
	float pi=3.141592653589793238462643383279;
	printf("%f浮點數只有八格\n,pi");
	printf("%12f如果印12格,結果是對齊右邊,可惡\n,pi");
	printf("%12.10f印12格,點的右邊10格,但不準\n,pi");
	double pi2=3.141592653589793238462643383279;
	printf("%12.10f兩倍浮點數double印點右邊10格\n",pi2);
}
