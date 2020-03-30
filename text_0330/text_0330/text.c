 #define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int difbit(int x, int y)
//{
//	int num = x ^ y;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num &= (num - 1);
//	}
//	return count;
//}
//
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	printf("%d\n", difbit(m, n));
//	return 0;
//}


//void BinaryEven(int n)
//{
//	printf("%d的二进制偶数位为：\n", n);
//	for (int i = 31; i > 0; i -= 2)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			printf("1 ");
//		}
//		else
//		{
//			printf("0 ");
//		}
//	}
//	printf("\n");
//}
//
//void BinaryOdd(int n)
//{
//	printf("%d的二进制奇数位为：\n", n);
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			printf("1 ");
//		}
//		else
//		{
//			printf("0 ");
//		}
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	BinaryEven(n);
//	BinaryOdd(n);
//	return 0;
//}

//int BinaryNum1(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		count++;
//		a &= a - 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("二进制有%d个1\n",BinaryNum1(a));
//	return 0;
//}

//void exchenge(int x, int y)
//{
//	x = x + y;
//	y = x - y;
//	x = x - y;
//
//}
//
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	exchenge(m, n);
//	printf("m = %d n = %d \n", m, n);
//	return 0;
//}