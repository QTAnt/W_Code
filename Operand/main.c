#include <stdio.h>

////移位操作符
//int main() {
//    int a = 5/2;
//    int b = 5%2;
//    double c = 5/2.0;
//    int d = 5%2;
//    double e = 5%2;
//    printf("a=%d\n", a);
//    printf("b=%d\n", b);
//    printf("c=%lf\n", c);
//    printf("d=%d\n", d);
//    printf("e=%lf\n", e);
//
//    return 0;
//}
////算数操作符（移动的是二进制位）
//右移操作符（除2）
//1、算术右移：右边丢弃，左边补原符号位（编译器常用）
//2、逻辑右移：右边丢弃，左边补0
//整数二进制的表示有：原码、反码、补码，内存中存储的是补码，移位移的也是补码
//正整数：原码=反码=补码
//负整数：原码——>反码(原码的符号位不变，其他位按位取反)
//       反码——>补码（反码+1）
//-1的存储
//原码：10000000000000000000000000000001
//补码：11111111111111111111111111111110
//反码：11111111111111111111111111111111 "-1在内存中存储为：ff ff ff ff，一个16进制的f表示15；即是二进制的"1111"
//左移操作符（乘2）:左边丢弃，右边补0
//int main()
//{
//    int a=16;
//    int b = a>>2;
//    int c = -1;
//    int d = c>>1;
//    int e = 3;
//    int f = e << 2;
//    int g = c << 2;
//    printf("b=%d\n", b);
//    printf("d=%d\n", d);
//    printf("f=%d\n", f);
//    printf("g=%d\n", g);
//
//    return 0;
//}
////位操作符（二进制位）
// &：按位与(同为1为1，否则为0)
//｜：按位或（有一个1，即为1，否则为0）
//^：按位异或（相同为0，相异为1）
//int main()
//{
//    int a=5;
//    int b=3;
//    int c=a&b;
//    //5:00000000000000000000000000000101
//    //3:00000000000000000000000000000011
//    //c:00000000000000000000000000000001
//    int d=a|b;
//    //5:00000000000000000000000000000101
//    //3:00000000000000000000000000000011
//    //d:00000000000000000000000000000111
//    int e=a^b;
//    //5:00000000000000000000000000000101
//    //3:00000000000000000000000000000011
//    //e:00000000000000000000000000000110
//    printf("c=%d\n", c);
//    printf("d=%d\n", d);
//    printf("e=%d\n", e);
//
//    return 0;
//}
////不创建临时变量，交换两个变量的值
//int main()
//{
//    int a=3;
//    int b=5;
//    printf("before:a=%d, b=%d\n", a, b);
//    //常规方法
//    int tmp = 0;
//    tmp = a;
//    a = b;
//    b = tmp;
//    printf("after:a=%d, b=%d\n", a, b);
//    return 0;
//}
//int main()
//{
//    int a=3;
//    int b=5;
//    printf("before:a=%d, b=%d\n", a, b);
//    //加减法:可能会溢出，两个数超级大时，可能会进位
//    a = a+b;
//    b = a-b;
//    a = a-b;
//    printf("after:a=%d, b=%d\n", a, b);
//    return 0;
//}
//int main()
//{
//    int a=3;
//    int b=5;
//    printf("before:a=%d, b=%d\n", a, b);
//    //异或法（不会溢出；但是执行效率低、可读性差）
//    //a^b得出的值，可以理解为a与b之间转换的一个密码，这个密码可以互相转换得出a或b
//    a = a^b;
//    b = a^b;
//    a = a^b;
//    printf("after:a=%d, b=%d\n", a, b);
//    return 0;
//}

////求一个整数存储在内存中二进制中1的个数
//int main()
//{
//    int num = 0;
//    int count = 0;
//    scanf("%d", &num);
//    int i =0;
//    for(i =0; i<32; i++)    //必须循环32次
//    {
//        if(1 == ((num >> i) & 1))
//            count++;
//    }
//    printf("count=%d", count);
//    return 0;
//}
////优化⬇️
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int count = 0;
//    int i = 0;
//    while(num)
//    {
//        count++;
//        num = num&(num-1);
//    }
//    printf("二进制中1的个数count=%d", count);
//    return 0;
//}










