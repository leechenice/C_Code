 #define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

//void menu()
//{
//	printf("*********************\n");
//	printf("****1.play 0.exit****\n");
//	printf("*********************\n");
//
//}
//
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("������֣�\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶��ˣ���ϲ��\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int k = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	scanf("%d", &k);
//	if (k > arr[right] || k < arr[left])
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (arr[mid] < k)
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] > k)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				printf("�ҵ��ˣ��±���%d\n", mid);
//				break;
//			}
//
//		}
//	}
//
//	
//	
//	return 0;
//}
#include <windows.h>
#include <string.h>
//int main()
//{
//	
//	char arr1[] = "welcome to bit!!!!!!!!";
//	char arr2[] = "######################";
//
//	int len = strlen(arr1);
//	
//
//	for (int left = 0, right = len - 1; left <= right;left++,right--)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//Sleep(1000);
//		system("cls");
//		
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (0 == strcmp(password, "7777777"))
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}
