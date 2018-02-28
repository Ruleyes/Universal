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
	short c1=-32767;
	unsigned short c2 =c1;
	printf("2.The value of c1 is %d.\n",c1);//%d若转换符号为d，

	printf("2.The value of c2 is %u.\n",c2);//%d若转换符号为d，
	
	

	/*不同数据类型之间相互转换*/
	short a10=-2;
	unsigned short b10=a10;
	//unsigned short b11=~a10+1;
	int b20=b10;
	int c10=a10;
	unsigned int c20=a10;
	//printf(" b11=%x    //short a10=-2 转 unsigned short\n",b11);
	printf(" b10=%x    //short a10=-2 转 unsigned short\n",b10);
	printf(" b20=%x    //unsigned short 转 int\n",b20);
	printf(" c10=%x//short a10=-2 转 int\n",c10);
	printf(" c10=%x//short a10=-2 转 unsigned int\n",c10);
   

return 0;
}
