/*定义一个包含100个数据的int型数组，输入各个元素的值，格式为每个整数用空格隔开，

将所有元素移动到其后一个位置，最后一个元素存放到第零个位置。

输出移动后的数组数据，格式为每个元素用空格隔开。每五个数输出一个换行。*/
#include<stdio.h>
int main()
{
	int x[100]={0},a[100]={0},i;
	for(i=0;i<100;i++)
	{
		scanf("%d",&x[i]);
		if(i==99)
		{
			a[0]=x[i];
		}
		else
		{
			a[i+1]=x[i];
		}
	}
	for(i=0;i<100;i++)
	{
		printf("%d",a[i]);
		if((i+1)%5==0)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
	return 0;
} 
