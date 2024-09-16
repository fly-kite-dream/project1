//#include<stdio.h>
//int main()
//{
//	char arr[5][100] = {
//		"xiaoshishi","xiaodandan","xiaojingjing","xiaolili","xiaolele"
//	};
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0; i < len; i++)
//	{
//		char* p1 = arr[i];//p1是xiaoshishi的元素地址
//		char *p2 = p1;//p2是x的元素地址
//	
//		while (1)
//		{
//			char p3 = *p2;//注意该代码位置以便将p3进行改变
//			if (p3== '\0')
//			{
//				break;
//			}
//			printf("%c", p3);
//			p2++;
//		}
//		printf("\n");
//	}
//
//	return 0;
//
//}