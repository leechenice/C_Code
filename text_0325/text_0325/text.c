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
//			printf("%d������\n",year);
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
//	printf("\n���϶�������\n");
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
//	printf("����������\n");
//	scanf("%d%d", &a, &b);
//	printf("a = %d b = %d\n", a, b);
//	swap(&a, &b);
//	printf("����������\na = %d b = %d\n", a, b);
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
//	printf("����һ����\n");
//	scanf("%d", &k);
//	printf("%d * %d�˷���\n", k, k);
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
//	//�Ҳ���
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	//���鴫�ε�ʱ�򣬴���ȥһ���������������ϴ���ȥ�����������Ԫ�صĵ�ַ &arr[0]
//	int ret = binary_search(arr, k, sz);//�ҵ��˷����±꣬�Ҳ�������-1
//	//���鴫�η�������-�����Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	return 0;
//}