#include <stdio.h>

/* 定义一个宏 求数组的长度*/
#define GET_ARRAY_LEN(arr,len){len=sizeof(arr)/sizeof(arr[0]);}
// 直接选择排序, 待排序的中选择一个最大的数,放到末尾!


void swap(int *a,int *b) //交換兩個變數
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void select_sort(int arr[],int len){
	for (int i = 0; i < len-1; i++)
	{
		int min=i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[j]<arr[min])
			{
				min=j;
			}
			/* code */
		}
		swap(&arr[min],&arr[i]);
	}
}

int  main(int argc, char const *argv[])
{
	int arr[]={1,22,34,45,656,3,23,45,12};
	int len;
	GET_ARRAY_LEN(arr,len);
	select_sort(arr,len);
	for (int i = 0; i < len; ++i)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}