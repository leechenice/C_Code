 #define  _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(*arr);
//	print(arr,sz);
//	return 0;
//}
#include <stdio.h>

#include<string.h>
//void inversion(char* str, int len)
//{
//	for (int i = 0; i < len / 2; i++)
//	{
//			char temp = *(str + i);
//			*(str + i) = *(str + len - i - 1);
//			*(str + len - 1 - i) = temp;	
//	}
//	for (int j = 0; j < len; j++)
//	{
//		printf("%c", *(str + j));
//	}
//	printf("\n");
//
//}
//
//int main()
//{
//	char ch[100] = { 0 };
//	gets(ch);
//	int len = strlen(ch);
//	inversion(ch, len);
//	return 0;
//}
#include <math.h>
//int main()
//{
//	int a = 0;
//	int Sn = 0;
//	int temp = 0;
//	scanf("%d", &a);
//
//	for (int i = 0; i < 5; i++)
//	{
//		Sn += a * pow(10, i);
//		temp += Sn;
//	}
//	printf("%d\n", temp);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	printf("0 1 ");
//	for (i = 2; i <= 100000; i++)
//	{
//		int a, b, c, d, e, f;
//		a = i % 10 / 1;
//		b = i % 100 / 10;
//		c = i % 1000 / 100;
//		d = i % 10000 / 1000;
//		e = i % 100000 / 10000;
//		f = i % 1000000 / 100000;
//		for (int n = 1; n <= 6; n++)
//		{
//			if (i == pow(a, n) + pow(b, n) + pow(c, n) + pow(d, n) + pow(e, n) + pow(f, n))
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 1)
//	{
//		for (int i = 1; i <= n / 2 + 1; i++)               
//		{
//			for (int j = 1; j <= n / 2 + i; j++)
//			{
//				if (j >= n / 2 - i + 2)
//					printf(" *");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//		for (int i = n / 2; i >= 1; i--)               
//		{                            
//			for (int j = 1; j <= n / 2 + i; j++)        
//			if (j >= n / 2 - i + 2)
//				printf(" *");
//			else
//				printf("  ");
//			printf("\n");
//		}
//	}
//	else
//		printf(" ‰»Î¥ÌŒÛ\n");
//	return 0;
//}