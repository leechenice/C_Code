 #define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdbool.h>


//void BubbleSort(int* arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		bool isSorted = true;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				isSorted = false;
//			}
//		}
//		if (isSorted)
//		{
//			break;
//		}
//	}
//}
//
//void my_print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(*arr);
//	my_print(arr, sz);
//	BubbleSort(arr, sz);
//	my_print(arr,sz);
//
//	return 0;
//}

//void init(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int* arr, int sz)
//{
//	for (int i = 0; i <= sz / 2; i++)
//	{
//		int temp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = temp;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(*arr);
//	init(arr, sz);
//
//	print(arr, sz);
//	reverse(arr, sz);
//	return 0;
//}

//void swit(int* A, int* B, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int temp = A[i];
//		A[i] = B[i];
//		B[i] = temp;
//	}
//}
//
//int main()
//{
//	int A[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int B[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(A) / sizeof(*A);
//
//	swit (A, B, sz);
//	print(A, sz);
//	print(B, sz);
//
//	return 0;
//}