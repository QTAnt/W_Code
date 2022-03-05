#include <stdio.h>
int main()
{
    int a = 0;
    int b = 2;
    if(a == 1)
    {
        if(b == 2)
            printf("hehe\n");
    }
        else
            printf("haha\n");
    return 0;
}
///循环语句
///while()
/////在屏幕上打出1-10
//int main()
//{
//    int num = 1;
//    while(num <= 10)
//    {
//        printf("%d ", num);
//        num++;
//    }
//    return 0;
//}
///分支语句
///多分支
/////switch()
//int main()
//{
//    printf("请输入：");
//    int day = 0;
//    scanf("%d", &day);
//    switch(day)
//    {
//        case 1:
//        case 2:
//            if(day == 2)
//                printf("switch语句里也可以使用if语句\n");
//        case 3:
//        case 4:
//        case 5:
//            printf("工作日");
//            break;
//        case 6:
//        case 7:
//            printf("休息日");
//            break;
//        default:
//            printf("输入错误，请重新输入：");
//            break;
//    }
//    return 0;
//}
//int main()
//{
//    int day = 0;
//    printf("请输入：");
//    scanf("%d", &day);
//    switch(day)
//    {
//        case 1:
//            printf("星期一");
//            break;
//        case 2:
//            printf("星期儿");
//            break;
//        case 3:
//            printf("星期三");
//            break;
//        case 4:
//            printf("星期四");
//            break;
//        case 5:
//            printf("星期五");
//            break;
//        case 6:
//            printf("星期六");
//            break;
//        case 7:
//            printf("星期日");
//            break;
//    }
//    return 0;
//}
/////输出1-100之间的奇数
///写法1
//int main()
//{
//    int t;
//    int i = 1;
//    while(i <= 100)
//    {
//        if(i%2 == 1)
//            printf("%d ", i);
//        i++;
//    }
//    return 0;
//    /*输出结果为：1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99
//    */
//}
/////写法2
//int main()
//{
//    int i = 1;
//    while(i <= 100)
//    {
//        printf("%d ", i);
//        i += 2;
//    }
//    return 0;
//}
/////判断一个数是否为奇数
//int main()
//{
//    int a = 24;
//    if(a%2 == 1)
//        printf("该数数一个奇数");
//    else
//        printf("该数不是个奇数");
//    return 0;
//}
//int main()
//{
//    int a = 33;
//    if(a%2 == 0)
//        printf("该数不数奇数\n");
//    else if (a == 0)
//        printf("该数不数奇数\n");
//    else
//        printf("该数为奇数\n");
//}
/////结构体
//struct Book
//        {
//    char name[20];
//    short price;
//        };

//int main()
//{
//    struct Book b1 = {"C语言程序设计", 55};
//    struct Book* p = &b1;
//    //指针对象(-> : 结构体指针->成员)
//    printf("书名：%s\n", p->name);
//    printf("价格：%d元\n", p->price);
//    p->price = 53;
//    printf("调整后的价格：%d元\n", p->price);
//    return 0;
//    /*输出结果⬇️：
//    书名：C语言程序设计
//    价格：55元
//    调整后的价格：53元
//     * */
//}
//int main()
//{
//    struct Book b1 = {"C语言程序设计", 55};
//    struct Book* p = &b1;
//    //解引用 （. : 结构体变量.成员）
//    printf("书名：%s\n", (*p).name);
//    printf("价格：%d元\n", (*p).price);
//    (*p).price = 53;
//    printf("调整后的价格：%d元\n", (*p).price);
//    return 0;
//    /*输出结果⬇️：
//    书名：C语言程序设计
//    价格：55元
//    调整后的价格：53元
//     * */
//}
//int main()
//{
//    struct Book b1 = {"C语言程序设计", 55};
//    //指针
//    printf("书名：%s\n", b1.name);
//    printf("价格：%d元\n", b1.price);
//    b1.price = 53;
//    printf("调整后的价格：%d元\n", b1.price);
//    return 0;
//    /*输出结果⬇️：
//    书名：C语言程序设计
//    价格：55元
//    调整后的价格：53元
//     * */
//}
//结果
/////指针
//int main()
//{
//    int a = 10;
//    int* p = &a;
//    printf("a的地址为：%p，值为：%d\n", &a,a);
//    *p = 20;
//    printf("a的值被更改为 %d\n", a);
//    printf("a的值被更改为 %d\n", *p);//这里用a或*p都可以
//    printf("指针的大小为：%d\n", sizeof(p));
//    /*输出结果：
//    a的地址为：0x7ff7b0d1d9ac，值为：10
//    a的值被更改为 20
//    a的值被更改为 20
//    指针的大小为：8
//     */
//}
//int main()
//{
//    char c = 'c';
//    char* pc = &c;
//    printf("c的地址为：%p,c为%c\n",&c, c);
//    *pc = 'C';
//    printf("c被更改为:%c\n", c);
//    printf("c被更改为 %c\n", *pc);//这里用c或*pc都可以
//    printf("指针的大小为：%d\n", sizeof(pc));
//    /*输出结果：
//    c的地址为：0x7ff7b716a9af,c为c
//    c被更改为:C
//    c被更改为:C
//    指针的大小为：8  //指针大小在32位平台是4字节，在64位平台是8字节
//     */
//}
/////关键字 static
//int Test()
//{
////    int a = 1;
////    a++;
////    printf("a = %d ", a);//a = 2; a = 2; a = 2; a = 2; a = 2;
//    static int a = 1;   //static修饰变量后，改变了变量的作用域，变大了（之前每次调用Test()函数，a的值都会被赋为1，static修饰后，会保留每次++都结果）
//    a++;
//    printf("a = %d ", a);//a = 2; a = 3; a = 4; a = 5; a = 6;
//}
//int main()
//{
//    int i = 0;
//    while(i < 5)
//    {
//        Test();
//        i++;
//    }
//    return 0;
//}
///////操作符-前置++，后置++（前置--/后置--同理）
//int main()
//{
//    int a = 10;
//    int b = a--;
//    int c = --a;
//    printf("a = %d; b = %d;c = %d", a, b, c); // a = 8; b = 10;c = 8
//    return 0;
//}
//int main()
//{
//    int a = 10;
////    int b = a++; //后置++：先使用，后++
////    printf("a = %d; b = %d", a, b);  // a = 11; b = 10
//    int b = ++a;  //前置++：先++，后使用
//    printf("a = %d; b = %d", a, b);  // a = 11; b = 11
//    return 0;
//}
//int main()
//{
//    int a = 10;
//    int b = a++;
//    int c = ++a;
//    printf("a = %d; b = %d;c = %d", a, b, c);  // a = 12; b = 10;c = 12
//    return 0;
//}

////函数-求两个数的最大值
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int max = 0;
//    max = (a > b) ? a : b ;   //条件表达式/三目操作符
//    printf("较大的数为：%d", max);
//}
/////函数实现
//int Max(int x, int y)
//{
//    if(x > y)
//        return x;
//    else
//        return y;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int max;
//    max = Max(a, b);   //（）——>函数调用操作符
//    printf("较大值为：%d\n", max);
//}
/////宏实现
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int max =0;
//    max = MAX(a,b);
//    printf("较大值为：%d\n", max);
//    return max ;
//}
//////数组
//int main()
//{
//    int i = 0;
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    while(i < 10)
//    {
//        printf("%d ", arr[i]);  //arr[下标]：以下标的形式访问数组里的元素；数组的下标默认从0开始//[]——>下标引用操作符
//        i++;
//    }
//    return 0;
//}

////循环语句
//int main()
//{
//    int line = 0;
//    printf("有空敲敲\n");
//    while(line < 10)
//    {
//        //printf("代码量又增加啦～");
//        printf("代码量又增加啦～: %d\n", line);
//        line++;
//    }
//    if(line >= 10)
//        printf("你成长了！!");
//    return 0;
//}