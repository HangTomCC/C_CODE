#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//int count_bit_one(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}

//int count_bit_one( int a)
//{
//	int count = 0;
//	int i = 0;
//	for ( i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//����
//int count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//дһ��������a�Ķ�����(����)��ʾ���м���1
//	int count = count_bit_one(a);
//	printf("%d\n", count);
//	return 0;
//}


//int count_bit(int a,int b)
//{
//	int i = 0;
//	int c = 0;
//	int count = 0;
//	c = a ^ b;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a,&b);
//	//дһ��������a��b�Ķ�����(����)��ͬλ�ĸ���
//	int count = count_bit(a,b);
//	//13
//	//00000000000000000000000000001101
//	//0001
//	printf("%d\n", count);
//	return 0;
//}


//void print_bit(int a)
//{
//	int i = 0;
//	printf("����λ \n");
//	for (i = 30; i>=0; i -= 2)
//	{
//		printf("%d\n", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ \n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d\n", (a >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//дһ��������ӡ�����Ƶ�����λ��ż��λ
//	print_bit(a);
//	//printf("%d\n");
//	return 0;
//}

//void print_arr(int *arr)
//{
//	int i = 0;
//	for ( i = 0; i < 9; i++)
//	{
//		printf("%d\n",*(arr+i));
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	//дһ��������ָ���ӡ����
//	print_arr(arr);
//	//printf("%d\n");
//	return 0;
//}


//void print_table(int a)
//{
//	int k = 0;
//	int i = 0;
//	for ( i = 1; i <= a; i++)
//	{
//		int j = 0;
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//дһ��������ӡ�˷��ھ���
//	print_table(a);
//	//printf("%d\n");
//	return 0;
//}


//int print_single(int a)
//{
//	int b = 1;
//	int i = 0;
//	int count = 1;
//	for ( i = 2; i <= a; i++)
//	{
//		count *= b * i;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//дһ���ݹ麯����ӡn�Ľ׳�
//	int b = print_single(a);
//	printf("%d\n",b);
//	return 0;
//}


//void reverse_string(char arr[],int sz,int left,int right)
//{
//	int i = 0;
//	int count = 0;
//	/*while (left<right)
//	{
//		count = arr[left];
//		arr[left] = arr[right];
//		arr[right] = count;
//		left++;
//		right--;
//	}*/
//	for ( i = 0; i <= sz/2; i++)
//	{
//		count = arr[left+i];
//		arr[left+i] = arr[right-i];
//		arr[right-i] = count;
//	}
//}

//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}

double Pow(int n, int k)
{
	//n^k = n*n^(k-1)
	if (k<0)
	{
		return (1.0 / (Pow(n, -k)));
	}
	else if (k==0)
	{
		return 1;
	}
	else
	{
		return n * Pow(n, k - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n,&k);
	double ret = Pow(n,k);
	printf("%lf\n", ret);
	return 0;
}
