 #define  _CRT_SECURE_NO_WARNINGS 1

//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//int main()
//{
//	printf("%d",Fun(2));
//	return 0;
//}

#include<stdio.h>

//void print_bit(int a)
//{
//	if (a > 9)
//	{
//		print_bit(a / 10);
//	}
//	printf("%d ", a % 10);
//
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print_bit(a);
//	return 0;
//}

//int  Factorial(int n)
//{
//	if (n > 1)
//	{
//		return n * Factorial(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int Factorial(int n)
//{
//	int t = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		t *= i;
//	}
//	return t;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",Factorial(n));
//	return 0;
//}

//int my_strlen(char* p)
//{
//	if (*p != '\0')
//	{
//		return 1 + my_strlen(p + 1);
//	}
//	else
//		return 0;
//}
//
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "yintinabukaixin";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//void reverse_string(char * string)
//{
//	if (*string != '\0')
//	{
//	    reverse_string(string + 1);
//	}
//	printf("%c", *string);
//	
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return (n % 10) + DigitSum(n / 10);
//	}
//	else
//		return n;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",DigitSum(n));
//	return 0;
//}

//#include<math.h>
//
//int cube(int n, int k,int t)
//{
//
//		if (k > 0)
//		{
//			return n * cube(n, k - 1,t);
//		}
//		else
//			return 1;
//	
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d\n",cube(n, k, t));
//
//}

//int Fibonacci(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//}
//
//int Fibonacci(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",Fibonacci(n));
//	return 0;
//}