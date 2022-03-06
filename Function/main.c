#include <stdio.h>
#include <string.h>
#include <math.h>
////函数的嵌套和调用
/////函数的嵌套
//void line()
//{
//    printf("hello\n");
//}
//void three_ine()
//{
//    int i = 0;
//    for(i=0; i<3; i++)
//    {
//        line();
//    }
//}
//int main()
//{
//    three_ine();
//    return 0;
//}

/////函数的应用(函数设计时要单一且干净；代码复用性更强)
/////写一个函数，每调用一次这个函数，num的值增加1
//void Add(int* p)
//{
//    (*p)++;   //注意：++的优先级高于解引用(*)，因此，这里一定记得要给'*p'带上括号，否则不会达到增加的效果
//}
//int main()
//{
//    int num = 0;
//    Add(&num);
//    printf("num = %d\n", num);
//    Add(&num);
//    printf("num = %d\n", num);
//    Add(&num);
//    printf("num = %d\n", num);
//    return 0;
//}
/////实现一个整形有序数组的二分查找
//int binary_search(int arr[], int k, int sz)   //本质上arr[]是一个指针
//{
//    //算法的实现
//    int left = 0;
//    int right = sz-1;
//
//    while(left<=right)
//    {
//        int mid = (left+right)/2;  // 中间元素的下标,每次循环都会变化，因此一定要在循环里面
//        if(k<arr[mid])
//        {
//            right = mid-1;
//        }
//        else if(k>arr[mid])
//        {
//            left = mid+1;
//        }
//        else
//            return mid;
//    }
//    return -1;
//}
//
//int main()
//{
//    int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int k = 7;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int ret = binary_search(arr, k, sz);
//    if(ret == -1)
//    {
//        printf("找不到指定数字");
//    }
//    else
//    {
//        printf("找到了，下标是：%d", ret);
//    }
//    return 0;
//}

/////以函数调用的形式判断闰年
//int Is_leap_year(int y)
//{
//    if((y%4==0 && y%100!=0) || (y%400==0) )
//        return 1;
//    else
//        return 0;
//}
//int main()
//{
//    int year = 0;
//    int count = 0;
//    for(year=1000; year<=2000; year++)
//    {
//        if(Is_leap_year(year) == 1)
//            count++;
//            printf("%d ", year);
//    }
//    printf("\n%d ", count);
//    return 0;
//}

/////写一个函数判断一个数是不是素数
//int Is_prime(int x)       //注意：自定义函数里不要直接打印出结果，完成功能作用即可，以便达到多次调用的效果（如：如果直接打印出素数的结果，另一个只需判断是否是素数的情况下输出一大串结果的话就不是很友好）
//{
//    int y = 0;
//    for(y=2; y<=sqrt(x); y++)
//    {
//        if(x%y == 0)
//            return 0;
//    }
//    return 1;    //特别注意：这里的return需要在for()循环外面
//}
//int main()
//{
//    int num = 0;
//    for(num=1; num<=100; num++)
//    {
//        if(Is_prime(num) == 1)
//            printf("%d ", num);
//    }
//    return 0;
//}
//int Is_prime(int i)
//{
//    int j = 0;
//    for(j=2; j<=sqrt(i); j++)
//    {
//        if(i%j == 0)
//        {
//            printf("不是素数%d", i);
//            return 0;
//        }
//        else
//        {
//            printf("是素数:%d", i);
//            return 0;
//        }
//    }
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    Is_prime(a);
//    return 0;
//}
///写一个函数，实现交换两个整形变量的内容
//void Swap2(int* pa, int* pb)
//{
//    int tmp = *pa;
//    *pa = *pb;
//    *pb = tmp;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    printf("a=%d b=%d\n", a, b);
//    int* pa = &a;
//    int* pb = &b;
//    Swap2(&a, &b);
//    printf("a=%d b=%d\n", a, b);
//    return 0;
//}
//
//int Swap1 (int x, int y)
//{
//    int tmp = x;
//    x = y;
//    y = tmp;
//    printf("交换结果为：%d %d",x, y);
//}
//
//int main()
//{
//    int a,b = 0;
//    scanf("%d %d", &a, &b);
////    int a = 10;
////    int b = 20;
//    printf("%d %d", a, b);
//    int result = Swap1(a, b);
//    return 0;
//}
///返回两个数的较大值
//int get_max(int x, int y)
//{
//    return((x>y)?x:y);
//}
//int main()
//{
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &x, &y);
//    int max = get_max(x, y);
//    printf("max = %d", max);
//    return 0;
//}
//int main() {
//    char arr[] = "Hello, World!";
//    memset(arr, 'h', 5);   //源字符串比目标字符串长的话，会造成内存溢出，因此，要确保目标字符串的长度要足够放得下源字符串，否则将是一个Bug
//    printf("%s", arr);
//    return 0;
//}
