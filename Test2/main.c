//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
/////关机小程序（慎执行）
//int main()
//{
//    char input[20]={};
//    system("shutdown - s -60");  //执行系统命令：system()
//again:
//    printf("请注意你的电脑将在1分钟后关机，输入'我是猪'可以暂停此操作\n请输入>：");
//    scanf("%s", input);
//    if(strcmp(input, "我是猪")==0)    //比较两个字符串：strcmp()
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}

//int main()
//{
//    char input[20]={0};
//    while(1)
//    {
//        system("shutdown - s -60");  //执行系统命令：system()
//        printf("请注意你的电脑将在1分钟后关机，输入"我是猪"可以暂停此操作\n请输入>：");
//        scanf("%s", input);
//        if(strcmp(input, "我是猪")==0)    //比较两个字符串：strcmp()
//        {
//            system("shutdown -a");
//            break;
//        }
//    }
//    return 0;
//}

///猜数字游戏
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
    printf("*****************************\n");
    printf("******1-玩游戏 0-退出游戏******\n");
    printf("*****************************\n");
}

//RAND_MAX 值为32767

void Game()    //生成一个随机数
{
    int target = 0;     //系统随机生成的数字
    int guess = 0;      //接收猜测的数字
    //拿时间戳当作生成随机数的起点：time_t time(time_t* timer)
    target = rand()%100+1;   //生成1～1000之间的随机数
    while(1)
    {
        printf("请输入猜测的数字：\n");
        scanf("%d", &guess);
        if(target>guess)
        {
            printf("猜小了！\n");
        }
        else if(target<guess)
        {
            printf("猜大了！！\n");
        }
        else
        {
            printf("恭喜你猜对了\n");
            break;
        }
    }
}
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择>:");
        scanf("%d", &input);
        switch(input)
        {
            case 1:
                Game();
                break;
            case 0:
                printf("退出游戏");
                break;
            default:
                printf("选择错误\n");
                break;
        }
    }
    while(input);
    return 0;
}
