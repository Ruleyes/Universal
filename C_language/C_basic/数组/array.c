/*
for the array int a[4]={11,12,13,14};
*/
/*
The string  of b  =aaa;
The string  of c  =aa;
The value of   a  =6295616;
The value of &a[0]=6295616.
The value of size_t num =500.
The address of a[0] is 0x601040.
The address of a[1] is 0x601044.
The address of a[2] is 0x601048.
The address of a[3] is 0x60104c.
*/
#include<stdio.h>

	int a[4]={11,12,13,14};
	char b[1]={"a"};
	char c[2]={"aa"};
	size_t num=500;
	int main(){
	printf("/*\n *for the array int a[4]={11,12,13,14};\n*/\n\n");
	printf("The string  of b  =%s;\n",b);
	printf("The string  of c  =%s;\n",c);

	printf("The value of   a  =%ld;\n",a);
	printf("The value of &a[0]=%ld.\n",&a[0]);
	printf("The value of size_t num =%d.\n",num);

	for(int i=0;i<4;i++)
	{
		printf("The address of a[%d] is %p.\n",i,&a[i]);
	}

return 0;
}
