#include "MergeSort.h"
#include <string.h>
/*********************************************************************
 *
 *
 *
 *
 *
 *
 ********************************************************************/
void mergeSort(void * array,void* temp,unsigned int num_elements,unsigned int element_size, COMPARE_PROC_P_T Cmp_proc)
{
	/***************************************************
	 * inx : index of the Left  Array
	 * jnx : index of the right Array
	 * Knx : index of the Temp  Array
	 ***************************************************/
	unsigned int inx=0,jnx=0,knx=0 ;
	unsigned int lowHalf=0,highHalf=0 ;
	unsigned char * array1 ;
	unsigned char * array2;
	if(num_elements>1)
	{
		lowHalf=num_elements/2;
		highHalf=num_elements-lowHalf;
		 array1=(unsigned char*)array;
		 array2 =(unsigned char*)(array1+lowHalf * element_size);
		mergeSort(array1,temp,lowHalf,element_size,Cmp_proc);
		mergeSort(array2,temp,highHalf,element_size,Cmp_proc);

	/************** Sorting and Merging   *******************/

	while(inx<lowHalf && jnx<highHalf)
	{
		if(Cmp_proc((array1+inx*element_size),(array2+jnx*element_size))==1)
				{
			memcpy(temp+knx*element_size,array2+jnx*element_size,element_size);
			jnx++;
			knx++;
				}
		else
		{/********* in this case left is lower than right */
			memcpy(temp+knx*element_size,array1+inx*element_size,element_size);
			inx++;
			knx++;
		}
	}

		while(inx<lowHalf)
		{
			memcpy(temp+knx*element_size,array1+inx*element_size,element_size);
			inx++;
			knx++;
		}
		while(jnx<highHalf)
		{
			memcpy(temp+knx*element_size,array2+jnx*element_size,element_size);
			jnx++;
			knx++;
		}

	memcpy(array,temp,element_size*num_elements) ;
	}
	}

