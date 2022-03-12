#include <stdio.h>
#include <string.h>
#include <math.h>
/////函数递归
/////求第n个斐波那契数
////int Fib(int n)    //不建议使用，效率很低
////{
////    if(n<=2)
////        return 1;
////    else
////        return Fib(n-1)+Fib(n-2);
////}
//int Fib(int n)      //递归迭代
//{
//    int a=1;
//    int b=1;
//    int c=1;
//    while(n>2)
//    {
//        c=a+b;
//        a=b;
//        b=c;
//        n--;
//    }
//    return c;
//}
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    ret = Fib(n);
//    printf("%d\n", ret);
//    return 0;
//}

/////求n的阶乘（不考虑溢出）
//int Fac1(int n)
//{
//    int i =1;
//    int ret =1;
//    for(i=1; i<=n; i++)
//    {
//        ret *= i;
//    }
//    return ret;
//}
//int Fac2(int n)
//{
//    if(n == 1)
//        return 1;
//    else
//        return n*Fac2(n-1);
//}
//int main()
//{
//    int n = 0;
//    int ret =0;
//    scanf("%d", &n);
//    //ret = Fac1(n);   //循环实现
//    ret = Fac2(n);   //递归实现
//    printf("%d", ret);
//    return 0;
//}

/////不创建临时变量，求字符串长度
/////strlen()
//int my_strlen(char* str)
//{
//    if((*str) != '\0')
//        return 1+ my_strlen(str+1);
//    else
//        return 0;
//}
//
//int main()
//{
//    char arr[] = "hello";
//    int len = my_strlen(arr);   //arr是数组，数组传参，传过去的不是整个数组，是第一个元素的地址
//    printf("%d", len);
//    return 0;
//}
///求字符串长度
//int my_strlen(char *str)
//{
//    int count = 0;
//    while((*str) != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//
//int main()
//{
//    char arr[] = "hello";
//    //模拟实现strlen
//    int len = my_strlen(arr);
//    printf("len = %d ", len);
//    return 0;
//}
//接收一个整形值（无符号），按照顺序打印它的每一位值。（例如：输入12345，输出：1 2 3 4 5）
//void Print(int n)
//{
//    if(n>9)
//    {
//        Print(n/10);
//    }
//    printf("%d ", n%10);
//}
//
//int main()
//{
//    //int num = 12345;
//    unsigned int num = 12345;
//    scanf("%d", &num);       //这里用scanf时，上面的num要定义成无符号
//    Print(num);
//    return 0;
//}