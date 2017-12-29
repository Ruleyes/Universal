#include<stdio.h>

	int a[4]={11,12,13,14};
	char b[1]={"a"};
	char c[2]={"aa"};
	size_t num=500;
	int main(){

	printf("The string  of b  =%s;\n",b);
	printf("The string  of c  =%s;\n",c);

	printf("The value of   a  =%ld;\n",a);
	printf("The value of &a[0]=%ld.\n",&a[0]);
	printf("The value of size_t num =%d.\n",num);

return 0;
}
