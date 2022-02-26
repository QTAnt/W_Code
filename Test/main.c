#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
/////找出一组数中的最大数
//int main()
//{
//    int arr[] = {-1,-6,-3,-8,-23,-2,-4,-8};
//    int max = arr[0];
//    int i = 0;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    for(i=1; i<sz; i++)
//    {
//        if(max<arr[i])
//            max = arr[i];
//    }
//    printf("这组数中最大值为：%d", max);
//    return 0;
//}

/////打印9*9乘法表
//int main()
//{
//    int i = 1;
//    int j = 1;
//    for(i=1; i<=9; i++)
//    {
//        for(j=1; j<=i; j++)
//        {
//            printf("%d*%d=%-2d ", i, j, i*j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

///打印1～100之间的素数
////一个非素数(i)一定能写成a*b的形式，此时a和b至少有一个数是小于开根号i的
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int count =0;
//    for(i=1; i<=100; i++)
//    {
//        for(j=2; j<=sqrt(i); j++)   //for(j=2; j<=(i/2); j++)//sqrt(i)一定是小于(i/2)的
//        {
//            if(i%j == 0)
//            {
//                break;
//            }
//        }
//        if(j>sqrt(i))   //if(j>(i/2))  //走到这一步的两种情况：1、从break跳出来2、j==i(上面第二个for循环的相反条件)
//        {
//            count++;
//            printf("%d ", i);
//        }
//    }
//    printf("\ncount = %d", count);
//    return 0;
//}
//int main()
//{
//    //试错法
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    for(i = 1; i <= 100; i++)
//    {
//        for(j = 2; j<i; j++)
//        {
//            if(i%j == 0)
//            {
//                break;//不是素数
//            }
//        }
//        if (j==i)   //走到这一步的两种情况：1、从break跳出来2、j==i(上面第二个for循环的相反条件)
//        {
//            count++;
//            printf("%d ", i);
//        }
//    }
//    printf("\n count=%d", count);
//    return 0;
//}

///////打印1000～2000之间的闰年
//int main()
//{
//    int year = 0;
//    int count = 0;
//    for(year = 1000; year <= 2000; year++)
//    {
//        if(((year%4 == 0)&&(year%100 != 0)) || (year%400 == 0))
//        {
//            printf("%d ", year);
//            count++;
//        }
//    }
//    printf("\ncount = %d", count);
//    return 0;
//}
//int main()
//{
//    int year = 0;
//    int count = 0;
//    //闰年判断方法：1、能被4整除，且不能被100整除 2、能被400整除
//    for(year = 1000; year<=2000; year++)
//    {
//        if(year%4 ==0 && year%100 != 0)
//        {
//            printf("%d ", year);
//            count++;
//        }
//        else if(year%400 == 0)
//        {
//            printf("%d ", year);
//            count++;
//        }
//    }
//    printf("\n count = %d", count);
//    return 0;
//}

//给定两个数，求这两个数的最大公约数(辗转相除法)
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int ret = 0;
//    scanf("%d %d", &m, &n);
////    while(m%n)
////    {
////        ret = m%n;
////        m = n;
////        n = ret;
////    }
//    while(ret = m%n)   //效率高
//    {
//        m = n;
//        n = ret;
//    }
//    printf("两数的最大公约数为：%d", n);
//    return 0;
//}
//int main()
//{
//    int a, b;
//    int m = 1;
//    int n = (a*b);
//    scanf("%d %d", a, b);
//    for(i=1; i<n; i++)
//    {
//        if(a%i == 0 && b%i == 0)
//            printf("两数的最大公约数为：%d", i);
//    }
//    return 0;
//}
//
/////打印1～100之间所有3的倍数
//int main()
//{
//    int i = 1;
//    for(i = 1; i<100; i++)
//    {
//        if(i%3 == 0)
//            printf("%d ", i);
//    }
//    return 0;   //3 6 9 12 15 18 21 24 27 30 33 36 39 42 45 48 51 54 57 60 63 66 69 72 75 78 81 84 87 90 93 96 99
//}
//int main()
//{
//    int i = 3;
//    for(i=3; i<100;i++)
//    {
//        printf("%d ", i);
//        i += 2;
//    }
//    return 0;  //3 6 9 12 15 18 21 24 27 30 33 36 39 42 45 48 51 54 57 60 63 66 69 72 75 78 81 84 87 90 93 96 99
//}

////写代码将3个数从大到小输出
///////优化
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    ///设a存三数中最大大值，b次之，c存最小值
//    if(a<b)
//    {
//        int tmp = a;  //临时变量里先存a
//        a = b;   //把a赋给b，把a存到b里面
//        b = tmp;
//    }
//   if(a<c)
//    {
//        int tmp = a;
//        a = c;
//        c = tmp;
//    }
//   if(b<c)
//   {
//       int tmp = b;
//       b = c;
//       c = tmp;
//   }
//    printf("输入大三数从大至小依次为：%d %d %d",a, b, c);
//   return 0;
//}

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    int max = 0;
//    if(a>b && a>c)
//    {
//        max = a;
//        if(b>c)
//        {
//            printf("三数从大到小依次为：%d %d %d", a, b, c);
//        }
//        else
//        {
//            printf("三数从大到小依次为：%d %d %d", a, c, b);
//        }
//    }
//    else if(b>a && b>c)
//    {
//        max = b;
//        if(a>c)
//        {
//            printf("三数从大到小依次为：%d %d %d", b, a, c);
//        }
//        else
//        {
//            printf("三数从大到小依次为：%d %d %d", b, c, a);
//        }
//    }
//    else
//    {
//        max = c;
//        if(a>b)
//        {
//            printf("三数从大到小依次为：%d %d %d", c, a, b);
//        }
//        else
//        {
//            printf("三数从大到小依次为：%d %d %d", c, b, a);
//        }
//    }
//    return 0;
//}
/////模拟情景：编写一个代码，模拟实现用户登陆，只能输入三次密码（三次之内密码正确，提示登陆成功；密码错误，则推出程序）
//int main()
//{
//    int i = 0;
//    int ch = 0;
//    char password[20] ={};
//    for(i = 0; i<3; i++)
//    {
//        printf("请输入密码:>\n");
//        scanf("%s",password);
//        if(strcmp(password,"123456") == 0)   //==不能用来比较两个字符串是否相等，需要用库函数strcmp；strcmp(参数1，参数2)：参数1=参数2，返回0；参数1<参数2，返回-1；参数1>参数2，返回1
//        {
//            printf("密码正确，登陆成功……^_^");
//            break;
//        }
//        else
//        {
//            printf("密码错误 ");
//        }
//    }
//    if( i == 3)
//    {
//        printf("三次机会均错误，程序推出");
//    }
//    return 0;
//}
/////编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//    char arr1[]={"Hello wrold!"};
//    char arr2[]={"############"};
//    int left = 0;
//    int right = strlen(arr1)-1;
//    while(left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        //system("cls");  //执行系统命令的一个函数-cls:清空屏幕
//        left++;
//        right--;
//    }
//    return 0;
//}
/////在一组有序数组中找目标值
//int main()
//{
//    int k = 7;
//    int arr[]={1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int left = 0;
//    int right = sz-1;
//    while(left <= right)
//    {
//        int mid = (left+right)/2; //切记该条件在循环里
//        if(arr[mid]>k)
//        {
//            right = mid-1;
//        }
//        else if(arr[mid]<k)
//        {
//            left = mid+1;
//        }
//        else
//        {
//            printf("找到了，下标是：%d", mid);
//            break;
//        }
//    }
//    if(left > right)
//    {
//        printf("找不到T_T");
//    }
//    return 0;
//}
//int main()
//{
//    int arr[]= {1,2,3,4,5,6,7,8,9,10};
//    int i = 0;
//    int k = 17;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    for(i=0; i<sz; i++)
//    {
//        if(k == arr[i])
//        {
//            printf("找到了，下标为：%d\n", i);
//            break;
//        }
//    }
//    if(i==sz)
//        printf("没找到T_T");
//    return 0;
//}
/////计算1!+2!+3!+...+10!
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for(n=1; n<=10; n++)
//    {
//        ret = ret*n;
//        sum += ret;
//    }
//    printf("sum = %d\n", sum);
//    return 0;
//    //sum = 4037913
//}
//
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for(n=1; n<=10; n++)
//    {
//        ret = 1;  //切记！！！
//        for(i=1; i<=n; i++)
//        {
//            ret = ret*i;
//        }
//        sum = sum+ret;
//    }
//    printf("sum = %d\n", sum);
//    return 0;
//    //sum = 4037913
//}
/////计算n的阶乘
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    scanf("%d", &n);
//    for(i=1; i<=n; i++)
//    {
//        ret = ret*i;
//    }
//    printf("ret = %d \n", ret);
//    return 0;
//}
/////打印出1～10
//int main()
//{
//    for(int i = 1; i <= 10; i++)
//    {
//        printf("%d", i);
//    }
//    return 0;
//}
////输入一串字符，只打印出0～9的部分
//int main()
//{
//    int ch = 0;
//    while((ch = getchar()) != EOF)
//    {
//        if(ch < '0'|| ch > '9')
//            continue;
//        putchar(ch);
//    }
//    return 0;
//    //输入：0123abc45
//    //输出：012345
//}
//EOF
//int main()
//{
//    int ch = 0;
//    //EOF:end of file - 文件结束标志
//    while((ch = getchar()) != EOF)
//    {
//        putchar(ch);
//    }
//    return 0;
//}
//
////getchar()的运用
//int main()
//{
//    int ret = 0;
//    int ch = 0;
//    char password[20] = {0};
//    printf("请输入密码:>");
//    scanf("%s", password);              //输入密码，放在password数组中
//    //缓冲区还剩一个'\n'
//    //读取'\n'，才能确保存储的password与预期一致（如果密码中间有空格的情况）
////    while((ch = getchar()) != '\n')
////    {
////        ;
////    }
//    while((ch = getchar()) != EOF)
//    {
//        ;
//    }
//    printf("请确认密码:>(Y/N)");
//    ret = getchar();
//    if(ret == 'Y')
//    {
//        printf("密码确认！");
//    }
//    else
//    {
//        printf("放弃确认～");
//    }
//    return 0;
//}
