#include <stdio.h>

void print_list(int *array, int len);

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition(int *array, int low, int high)
{
	int pivotkey = array[low];
	while(low < high){
		while(low < high &&  array[high] >= pivotkey){
			--high;
		}
		swap(array+low, array+high);

		while(low < high && array[low] <= pivotkey){
			++low;
		}
		swap(array+low,array+high);
	}

	return low;
}

void print_list(int *array, int len)
{
	int i = 0;
	for(i=0;i<len;i++){
		printf("%d ",array[i]);	
	}
	printf("\n");
}

void qsort(int *array, int low, int high)
{
	int pivotloc = 0;
	if(low<high){
		pivotloc = partition(array,low,high);
		qsort(array,low,pivotloc - 1);
		qsort(array,pivotloc+1,high);
	}
}

int main(int argc, char *argv[])
{
	int array[] = {49,38,65,97,76,13,27,49,78,10,2,4,90,100};	
	//int array[] = {265,301,751,129,937,863,742,694,76,438};
	int array_len = sizeof(array)/sizeof(int);
	int low = 0;
	int high = array_len - 1;
		
	print_list(array,array_len);	
	
	qsort(array,0,array_len-1);

	print_list(array,array_len);	



	return 0;
}

