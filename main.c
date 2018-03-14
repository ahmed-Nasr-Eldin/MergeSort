/* Merge Sort Algorithm 
* Author : Ahmed Nasr Eldin


*/


#include "MergeSort.h"
#include <stdio.h>
int compare(void * ptr_x,void * ptr_y)
{
//int	ret_value;
//if ((*(int *)ptr_x) >	 (*(int *)ptr_y))
//ret_value=1 ;
//else if((*(int *)ptr_x) <	 (*(int *)ptr_y))
//ret_value=-1 ;
//else
	//ret_value=0;
int * Num1 = (int * ) ptr_x ;
int * Num2 = (int * )ptr_y ;
return (*Num1 > * Num2) - (*Num1 < * Num2);
}

int main()
{
	int i=0;
int arr[10]={1,6,5,4,0,2,7,9,10,9} ;
int temp[10] ;
printf("Data before sorting\n");
for(i=0;i<10;i++)
printf("arr[%d]=%d\n",i,arr[i]);
 mergeSort((int*)arr,(int*)temp,10,sizeof(int),compare);

printf("Data after sorting\n");
for(i=0;i<10;i++)
printf("arr[%d]=%d\n",i,arr[i]);
return 0 ;
}
