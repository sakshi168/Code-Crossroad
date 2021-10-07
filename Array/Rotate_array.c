//Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction.
```
#include <stdio.h>
#define len 100
int main()
{
    //Initialize array
   int arr[len];
   int N,D,i,j,first;
	printf("Enter size of array\n");
 	scanf("%d",&N);       //size of array
  	printf("Enter elements of array\n");
	  for(i=0;i<N;i++)
	  {
			  scanf("%d",&arr[i]);        //Input array elements
	  }
   printf("Enter no of rotation\n");
   scanf("%d",&D);
   printf("Original array: \n");
     for (int i = 0; i < N; i++)
	  {
	  		   printf("%d ", arr[i]);
     }
 	  //Rotate the given array by D times toward left or counter-clockwise direction
  	  for(int i = 0; i < D; i++)
  	  {
	   		 first = arr[0];  //Stores the first element of the array
	   		 for(j = 0; j < N-1; j++)
	     		 {
              		 arr[j] = arr[j+1];  //Shift element of array by one
	     		 }
      		arr[j] = first;
	  }
   printf("\n");
   printf("Array after rotate in counter-clockwise direction: \n");
   for(int i = 0; i < N; i++)
	  {
        printf("%d ", arr[i]);
	  }
    return 0;
}
```
/*
Time complexity : O(N * D) 
Space Complexity : O(1)


-> Test Case 1:-

INPUT:-
Enter size of array
5
Enter elements of array
1 2 3 4 5
Enter no of rotation
3
Original array:
1 2 3 4 5

OUTPUT:-
Array after rotate in counter-clockwise direction:
4 5 1 2 3

-> Test Case 2:-
INPUT:-

Enter size of array
10
Enter elements of array
12 45 87 14 97 36 63 34 89 13
Enter no of rotation
4
Original array:
12 45 87 14 97 36 63 34 89 13

OUTPUT:-

Array after rotate in counter-clockwise direction:
97 36 63 34 89 13 12 45 87 14

*/