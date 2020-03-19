#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//	printf("请输入三个数:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		max = a;
//		a = b;
//		b = max;
//	}
//	if (a > c)
//	{
//		max = a;
//		a = c;
//		c = max;
//	}
//	if (b > c)
//	{
//		max = b;
//		b = c;
//		c = max;
//	}
//	printf("从大到小排序为：%d %d %d\n", c, b, a);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 101)
//	{
//		if (i % 3 == 0)
//		printf("%d ", i);
//		i = i + 3;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	printf("请输入两个数求最大公因数：\n");
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	while (a % b != 0)
//	{
//		t = a % b;
//		a = b;
//		b = t;
//	}
//	printf("最大公因数为：%d\n", b);
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	printf("请输入两个数求最大公因数：\n");
//	scanf("%d %d", &a, &b);
//	t = (a > b) ? b : a;
//	while (t > 1)
//	{
//		if (a % t == 0 && b % t == 0)
//			break;
//		t--;
//	}
//	printf("%d\n", t);
//	
//    return 0;
//}
//int main()
//{
//	int i = 1000;
//	while (i < 2001)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//			printf("%d ", i);
//		i += 4;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 2;
//	printf("输入一个整数：\n");
//	scanf("%d", &a);
//	b = (int)sqrt(a);
//	while (i <= b)
//	{
//		if (a % i == 0)
//			break;
//		i += 1;
//	}
//	if (i > b)
//		printf("%d是素数\n", a);
//	else
//		printf("%d不是素数\n", a);
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int t = 0;
//	int x = 1;
//	printf("请输入两个数求最大公因数：\n");
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	while (x)
//	{
//		x = a - b;
//		a = (b > x) ? b : x;
//		b = (b < x) ? b : x;
//		if (b == a - b)
//			break;
//	}
//	
//		printf("%d是最大公因数\n", b);
//
//	return 0;
//}