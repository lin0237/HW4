#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Function prototype
void bubbleSort(int array[], int size);

int main()
{
	//Initialize an array to be sorted
	int array[] = {64,34,25,12,22,11,90};
	int size = sizeof(array) / sizeof(array[0]);
	
	//Call the bubbleSort function to sort the array
	bubbleSort(array, size);
	
	//Print the sorted array
	printf("Sorted array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}

//Improved bubble sort function
void bubbleSort(int array[], int size)
{
	bool swapped; //Boolean flag to check if any swapping happened
	
	//Outer loop to control the number of passes
	//Each pass ensures the next largest element is placed in its correct position
	for(int i=0; i<size-1; i++)
	{
		swapped=false; //Reset swapped flag for each pass
		
		//Inner loop to perform comparisons and swaps
		//With each pass, the number of comparisons decreases as the last elements are sorted
		for(int j=0; j<size-i-1; j++)
		{
			if(array[j] > array[j+1])
			{
				//Swap if the current element is greater than the next element
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
				swapped=true; //Set swapped to true, as a swap was made
			}
		}
		
		//If no elements were swapped during this pass, the array is already sorted	
		//Break out of the loop to avoid unnecessary passes
		if(!swapped)
		{
			break;
		}
    }
}
