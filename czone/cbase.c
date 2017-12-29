/*
 *1.about the value of NULL,it has been defined in macro.
 *2.MIT 关于 回绕.
 *
*/
#include<stdio.h>

int main()
{
	
	printf("1.The value of NULL is %d.\n",NULL);
	unsigned int a = 4294967295;
	unsigned int b = 4294967296;
	printf("2.The value of a=4294967295 is %u.\n",a);//%d若转换符号为d，则结果为-1.unsigned int 应为%u.转换
	printf("2.The value of b=4294967296 is %u.\n",b);//无符号整形上限为4294967296，+1则变为0

   return 0;
}
