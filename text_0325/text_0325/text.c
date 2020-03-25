 #define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<math.h>

//int is_leap_year(int y)
//{
//	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
//
//}
//
//int main()
//{
//	int count = 0;
//	for (int year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			count++;
//			printf("%d是闰年\n",year);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int is_prime_number(int i)
//{
//	for (int y = 2; y <= sqrt(i); y++)
//	{
//		if (i % y == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 101; i < 200; i += 2)
//	{
//		if (is_prime_number(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n以上都是素数\n");
//	return 0;
//}
//void swap(int* pa,int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("输入两个数\n");
//	scanf("%d%d", &a, &b);
//	printf("a = %d b = %d\n", a, b);
//	swap(&a, &b);
//	printf("交换两个数\na = %d b = %d\n", a, b);
//	return 0;
//}

//int multiplication_table(int k)
//{
//    for (int i = 1; i <= k; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%-2d * %-2d = %-3d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//	return 1;
//}
//
//int main()
//{
//	int k = 0;
//	printf("输入一个数\n");
//	scanf("%d", &k);
//	printf("%d * %d乘法表\n", k, k);
//	printf("%d",multiplication_table(k));
//	return 0;
//}

//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	//找不到
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	//数组传参的时候，传过去一个数组名，本质上传过去的是数组的首元素的地址 &arr[0]
//	int ret = binary_search(arr, k, sz);//找到了返回下标，找不到返回-1
//	//数组传参发生降级-变成首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//	return 0;
//}