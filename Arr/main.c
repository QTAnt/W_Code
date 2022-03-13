#include <stdio.h>
#include <string.h>
//冒泡排序，排成升序
//void Bubble_sort(int arr[], int sz)
//{
//    //确定冒泡排序的趟数
//    int i = 0;
//    for(i=0; i<sz-1; i++)
//    {
//        //每一趟排序
//        int j = 0;
//        for(j=0; j<sz-1-i; j++)
//        {
//            if(arr[j]>arr[j+1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[] = {9,8,7,6,5,4,3,2,1,0};
//    int i = 0;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    Bubble_sort(arr, sz);   //arr是数组，对数组进行传参，实际传对是数组arr首元素的地址（&arr[0]）
//    for(i=0; i<sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

////借助flag优化冒泡排序
//void Bubble_sort(int arr[], int sz)
//{
//    //确定冒泡排序的趟数
//    int i = 0;
//    for(i=0; i<sz-1; i++)
//    {
//        int flag = 1;  //假设这一趟要排的数据已经有序
//        //每一趟排序
//        int j = 0;
//        for(j=0; j<sz-1-i; j++)
//        {
//            if(arr[j]>arr[j+1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = tmp;
//                flag = 0;   //本趟排序的数据不完全有序
//            }
//        }
//        if(flag == 1)
//        {
//            break;
//        }
//    }
//}
//int main()
//{
//    int arr[] = {9,8,7,6,5,4,3,2,1,0};
//    int i = 0;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    Bubble_sort(arr, sz);   //arr是数组，对数组进行传参，实际传对是数组arr首元素的地址（&arr[0]）
//    for(i=0; i<sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

////二维数组的应用
/////一维数组的存储
//int main()
//{
//    int arr[3][4] = {{1,2,3}, {4,5}};
//    int i=0;
//    for(i=0; i<3; i++)
//    {
//        int j = 0;
//        for(j=0; j<4; j++)
//        {
//            printf("arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int arr[3][4] = {{1,2,3}, {4,5}};
//    int i=0;
//    for(i=0; i<3; i++)
//    {
//        int j = 0;
//        for(j=0; j<4; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
////一维数组的应用
///一维数组的存储
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    for(int i =0; i<sz; i++)
//    {
//        printf("arr[%d] = %p\n", i, &arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    for(int i =0; i<sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//    char arr[] = "abcdef";
//    int i =0;
//    int len = strlen(arr);
//    for(i=0; i<len; i++)
//    {
//        printf("%c ", arr[i]);
//    }
//    return 0;
//}
