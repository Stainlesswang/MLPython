#include <stdio.h>
#define GEY_AEERY_LEN(arr,len){len=sizeof(arr)/sizeof(arr[0]);}
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
//直接插入排序,从前向后遍历数组,将每一个未排序的插入到已排序的相应位置;
insertion_sort(){

}

int  main(int argc, char const *argv[])
{
	int arr[]={1,22,34,45,656,3,23,45,12};
	int len;
	GET_ARRAY_LEN(arr,len);
	insertion_sort(arr,len);
	for (int i = 0; i < len; ++i)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}