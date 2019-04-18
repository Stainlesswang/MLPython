#include <stdio.h>
#include <stdlib.h>

/* 如何做到手写排序,技巧和必须要背的知识点 
首先冒泡排序思想(我们将较大的数向后移动)
循环遍历第一次(0->len): 最大的移到下标为len处
第二次(0->len-1):最大的移到下标为len-1
第三次(0->len-2):最大的移到下标为len-2
第len次(0->1):最大的移动到下标为1
*/

void bubble_sort(int arr[], int len){
	for (; 1 < len; len--)
	{
		for (int i = 0; i < len; ++i)
		{
			
			/* 内循环 做比较移动 */
			if (arr[i+1]<arr[i])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				/* code */

			}
		}
	}
	
}
// void swap(*arr,old,new){


// }
/* 定义一个宏 求数组的长度*/
#define GET_ARRAY_LEN(arr,len){len=sizeof(arr)/sizeof(arr[0]);}

int main(int argc, char const *argv[])
{
	
	int arr[]={1,22,34,45,656,3,23,45,12};
    int len;
    GET_ARRAY_LEN(arr,len)
    bubble_sort(arr,len);
		printf("++++++++++++++++++++++++++++\n");

    for (int i = 0; i < len; ++i)
	{
		printf("%d\n",arr[i] );
	}
	return 0;
}