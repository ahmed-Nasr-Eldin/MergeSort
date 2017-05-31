/*************************************************************************************
 * @file MergeSort.h
 * @brief generic merge sort algorithm for any data type without dynamic allocation.
 * @date 30/5/2017
 * @Author Ahmed Nasr Eldin
 * @version : 1
 ************************************************************************************/



/************************************************************************************
 * 								Typedefs
 *
 ***********************************************************************************/

typedef int COMPARE_PROC_T (void * , void *) ; /*define the type of the Funcion */
typedef COMPARE_PROC_T *COMPARE_PROC_P_T ;        /*define the type of the pointer to function*/
/***************************************************************************************
 * @brief merge sort function
 * @param the void array to be sorted
 * @param temp the array to put the data in after comparing
 * @param num_elements number of array elements
 * @param element_size size of each element
 * @param Cmp_Proc pointer to the compare function
 *
 ******************************************************************************************/
void mergeSort(void * array,void* temp,unsigned int num_elements,unsigned int element_size, COMPARE_PROC_P_T Cmp_proc);
