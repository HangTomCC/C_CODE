//���ֲ��ң�������
# define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	//int ch = 0;
//	////EOF - end of file �ļ�������־
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	int ch = 0;
//	char pass[20] = { 0 };
//	printf("����������");
//	scanf("%s", pass);//scanfֻ���ȡ�ո�ǰ������
//	//��������ʣ��'\n'
//	//��ȡ\n
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N��");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ����");
//	}
//	else if (ret == 'N')
//	{
//		printf("ȡ����");
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


//����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ�����"д����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//��������д
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)//��ʼ�����������ж϶�����ʡ��
//		//���жϲ���ʡ�� - ��Ϊ��
//	{
//		printf("������");
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

//�������ѭ��0��
	//int main()
 //   {
	//	int i = 0; int k = 0;
	//	for (i = 0,k = 0; k = 0; i++,k++)//��Ϊ�٣��Ǹ�ֵ�������ж�
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
//		printf("�Ҳ���");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10 ,11};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ��� %d", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���");
//	}
//	
//	return 0;
//}

//int main()
//{
//	char arr1[] = "                   ";
//	char arr2[] = "*******************" ;
//	int left = 0;
//	//int sz = sizeof(arr2) / sizeof(arr2[0]) - 2;//��Ϊ��\0
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//system("cls");//����
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
		printf("������");
		scanf("%s", &arr);
		con--;
			//if (arr == "123456")//==���������Ƚ����ַ����Ƿ����..Ӧ����һ�⺯��-strcmp
			if(strcmp(arr,"123456") == 0)
			{
				printf("������ȷ");
				break;
			}
			else
			{
				printf(" ���󣬻���%d�λ���\n", con);
			}
			
		}
	return 0;
}