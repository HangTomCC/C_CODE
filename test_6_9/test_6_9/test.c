#include <stdio.h>


//int main()
//{
//	//当前机器的字节序
//	int a = 1;
//	char* p = (char*)&a;
//	printf("%d\n",*p);
//	if (*p == 1)
//	{
//		printf("小");
//	}
//	else
//	{
//		printf("大");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	//11111111
//	//整形提升
//	//11111111111111111111111111111111
//	//打印原码为-1
//	signed char b = -1;
//	//11111111
//	//也一样
//	unsigned char c = -1;
//	//11111111
//	//无符号位补0
//	//00000000000000000000000011111111
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}


//有符号char的范围： -128 ~ 127
//无符号char的范围： 0 ~ 255
int main()
{
	char a = -128;
	char a = 128;//128 = 127 + 1 = -128
	//10000000000000000000000010000000
	//01111111111111111111111101111111
	//01111111111111111111111110000000 - 补
	//10000000
	//01111111111111111111111110000000 - 补
	//无符号数字补码和原码相同，所以不用转换为原码
	printf("%u", a);//%u - 打印十进制的无符号数字
	return 0;
}