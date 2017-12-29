/*

运行预编译器，看预编译器的结果，例如 clang -E：

$ clang -E a.c
main()
{
    int a=1,b=2;
    printf("%d \n",1+a+b*(1+a+b-1));
}
所以通常宏要加括号写成：

#define MA(x)  (x)*((x)-1)
这样才是你预期的运算。

$ clang -E a.c
main()
{
    int a=1,b=2;
    printf("%d \n",(1+a+b)*((1+a+b)-1));
}
但注意，若宏的参数是有副作用的话，那么仍会有问题，如  。在 C99 或 C++ 中，可使用内联函数（inline function）以避免这种问题。

*/


#include<stdio.h>

 #define MA(x) (x)*((x)-1)
 main()
 {  
     int a=1,b=2;
     printf("%d \n",MA(1+a+b));

 return 0;
}
