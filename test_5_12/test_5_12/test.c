//二分查找，缓冲区
# define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	//int ch = 0;
//	////EOF - end of file 文件结束标志
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	int ch = 0;
//	char pass[20] = { 0 };
//	printf("请输入密码");
//	scanf("%s", pass);//scanf只会读取空格前的内容
//	//缓冲区还剩个'\n'
//	//读取\n
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认了");
//	}
//	else if (ret == 'N')
//	{
//		printf("取消了");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch <'0' || ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for ( i = 1; i < 10; i++)
//	{
//		if (5 == i)
//		{
//			break;
//		}
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i = 5)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}


//建议for语句的循环控制变量的取值采用“前闭后开区间"写法。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//尽量这样写
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)//初始化，调整，判断都可以省略
//		//若判断部分省略 - 恒为真
//	{
//		printf("急急急");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hhh\n");
//		}
//	}
//	return 0;
//}

//这个代码循环0次
	//int main()
 //   {
	//	int i = 0; int k = 0;
	//	for (i = 0,k = 0; k = 0; i++,k++)//恒为假，是赋值，不是判断
	//		k++;
	//	return 0;
	//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	long long ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for ( i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	long long ret = 1;
//	long long con = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		con += ret *= i;
//	}
//	printf("%d", con);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i <= sz; i++)
//	{
//		if (22 == arr[i])
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10 ,11};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了 %d", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到");
//	}
//	
//	return 0;
//}

//int main()
//{
//	char arr1[] = "                   ";
//	char arr2[] = "*******************" ;
//	int left = 0;
//	//int sz = sizeof(arr2) / sizeof(arr2[0]) - 2;//因为有\0
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//system("cls");//清屏
//		left++;
//		right--;
//		
//	}
//	return 0;
//}

int main()
{
	int con = 3;
	char arr[20] = {0};
	while (con != 0)
	{
		printf("请输入");
		scanf("%s", &arr);
		con--;
			//if (arr == "123456")//==不能用来比较两字符串是否相等..应该用一库函数-strcmp
			if(strcmp(arr,"123456") == 0)
			{
				printf("输入正确");
				break;
			}
			else
			{
				printf(" 错误，还有%d次机会\n", con);
			}
			
		}
	return 0;
}