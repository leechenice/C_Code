 #define  _CRT_SECURE_NO_WARNINGS 1
 #include<stdio.h>
///*int main()
//{ 
//	int a = 10;
//	int arr[6] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(double));
//	return 0;
//}*/
//int main()
//{
//	int a = 10;
//	int b = ~a;
//	printf("%d\n", b);
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	/*int b = ++a;
//	printf("b=%d a=%d\n", b, a);*/
//	/*int b = a++;
//	printf("b=%d a=%d\n", b, a);*/
//	/*int b = --a;
//	printf("b=%d a=%d\n", b, a);*/
//	int b = a--;
//	printf("b=%d a=%d\n", b, a);
//
//	return 0;
//}
//int main()
//{
//	/*int a =(int) 3.14;
//	printf("a=%d\n", a);
//*/
//	int a = 1;
//	int b = 1;
//	if (a || b)
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = a < b ? b : a;
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	auto int a = 10;
//
//	return 0;
//}
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int age;
//	u_int age2;
//	return 0;
//}
//int main()
//{
//	register int a = 10;//register未来会被频发大量使用可能会放入寄存器
//	return 0;
//}
//void text()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		text();
//		i++;
//	}
//
//		
//	return 0;
//}
//int Max(int x, int y)
//{
//	int z = (x > y) ?( x) :( y);
//	return z;
//}
//#define MAX(X,Y) X>Y ? X : Y;   
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p = &a;
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	return 0;
//}
//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	*pc = 'w';
//	printf("%c\n", ch);
//	return 0;
//
//}
//int main()
//{
//	char ch = 'a';
//	int a = 10;
//	char* pc = &ch;
//	int* pa = &a;
//	printf("%d\n", sizeof(ch));
//	printf("%d\n", sizeof(a));
//	printf("%d\n",sizeof( pc));
//	printf("%d\n", sizeof(pa));
//	return 0;
//}