 #define  _CRT_SECURE_NO_WARNINGS 1

//int cola(int n)
//{
//	int count = 0;
//	for (int i = n; i > 0; )
//	{
//		count += i;
//		i /= 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", cola(n));
//	return 0;
//}


#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

My_strlen(const char *p)
{
	if (*p != '\0')
	{
		return 1 + My_strlen(p + 1);
	}
	else
	{
		return 0;
	}

}

char *My_strcpy(char *dst, const char *src)
{

	char *ret = dst;
	while (*dst++ = *src++) 
		;
	return ret;
}

void swap_arr(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;


	while (left<right)
	{
		
		while  ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}

		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}

		if (left<right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	/*char arr[] = "abcdefg";
	printf("%d\n",My_strlen(arr));
	char arr1[100] = { 0 };
	My_strcpy(arr1, arr);
	printf("%s\n", arr1);*/
	int arr[100] = { 0 };
	scanf("%d", arr);
	int sz = sizeof(arr) / sizeof(*arr);
	swap_arr(arr, sz);
	printf("%d\n", arr);
	return 0;
}