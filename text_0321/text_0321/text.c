 #define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 9; i <= 100; i += 10)
//	{
//		count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		
//		if (i % 2 == 0)
//			sum += - 1 / i;
//		else
//			sum += 1 / i;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (int i = 1; i < 10; i++)
//	{
//		if (arr[0] < arr[i])
//		{
//			int t = arr[0];
//			arr[0] = arr[i];
//			arr[i] = t;
//		}
//	}
//	printf("最大的整数是：%d\n", arr[0]);
//	return 0;
//}
//int main()
//{
//	printf("9*9乘法口诀表\n");
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = i; j < 10; j++)
//		{
//			int t = 0;
//			t = i * j;
//			printf("%d * %d = %d\n", i, j, t);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int t = 1;
//	scanf("%d", &a);
//	for (int i = a; i > 0; i--)
//	{
//		t = i * t;
//	}
//	printf("%d的阶乘为:%d\n", a, t);
//	return 0;
//}
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 10; i++)
//	{
//		int t = 1;
//		for (int j = i; j > 0; j--)
//		{
//			t = j * t;
//		}
//		sum += t;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch == getchar()) != EOF)
//		putchar(ch);
//
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码：\n");
//	scanf("%s", input);
//	printf("请确认密码(Y/N)\n");
//	getchar();
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}
