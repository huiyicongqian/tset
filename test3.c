#include<stdio.h>//交换数据
int swap(int *,int *);
int swap(int *x,int *y)
{
	int temp;
	printf("swap里交换前:%d,%d\n",*x,*y);
	temp = *x;
	*x = *y;
	*y = temp;
	printf("swap里交换后:%d,%d\n",*x,*y);
}
int main()
{
	int a,b,c;
	printf("请输入a,b:");
	scanf("%d%d",&a,&b);
	printf("main里交换前:%d,%d\n",a,b);
	swap(&a,&b);
	printf("main里交换后:%d,%d\n",a,b);


	
	return 0;	
}
