#include<stdio.h>
#include<stdlib.h>
void display (int arr[], int size)
{
  printf ("array elements");
  for (int i = 0; i < size; i++)
	{
	  printf ("%d", arr[i]);
	} 
printf ("\n");
} 
int seach (int arr[], int size, int key)
{
  for (int i = 0; i < size; i++)
	{
	  if (arr[i] == key)
		{
		  return i;
		}
	}
return -1;
}

void insert (int arr[], int *size, int element, int position)
{
  if (position < 0 || position > *size)
	{
	  printf ("invalid position for insertion");
	  return;
	}
  for (int i = *size - 1; i >= position; i--)
	{
	  arr[i + 1] = arr[i];
	} 
arr[position] = element;
  (*size)++;
  printf ("element %d inserted successfully at %d\n", element, position);
} 
void delete (int arr[], int *size, int position)
{
  if (position < 0 || position >= *size)
	{
	  printf ("invalid position for deletion");
	  return;
	}
  for (int i = position; i < *size; i++)
	{
	  arr[i] = arr[i + 1];
	} 
(*size)--;
  printf ("element deleted succesfully");
} 
void bubblesort (int arr[], int size)
{
  for (int i = 0; i < size; i++){
	  for (int j = 0; j < size; j++){
		  if (arr[j] > arr[j + 1]){
			  int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
			}
	}} 
printf ("Array sorted in ascending order\n");

} 

int main () {
  int size, choice, element, position, key;
  printf ("Enter the size of array");
  scanf ("%d", &size);
  int *arr = (int *) malloc (size * sizeof (int));
  if (arr == NULL)
	{
	  printf ("Mwmory allocation failed\n");
	  return 1;
	}
  printf ("Enter%d elements for the array:\n", size);
  for (int i = 0; i < size; i++) {
	  scanf ("%d", &arr[i]);
	} 
while (1)
	{
printf ("\n Array Operations Menu\n");
printf ("1.Display\n");
printf ("2.Search\n");
printf ("3,Insert\n");
printf ("4.Delete\n");
printf ("5.Sort\n");
printf ("6.Exit\n");
printf ("Enter your choice :");
scanf ("%d", &choice);

switch (choice){

    case 1:
	    display (arr, size);
    break;
    case 2:
        printf ("Enter the element to search :");
        scanf ("%d", &key);
        position = seach (arr, size, key);
        if (position != -1){
            printf ("element found at %d position\n", position);
        }
	    else
	    {
            printf ("Element not found at the array");
        }
    break;
    case 3:
        printf ("Enter the element to insert :");
        scanf ("%d", &element);
        printf ("Enter the position to insert :");
        scanf ("%d", &position);
        insert (arr, &size, element, position);
    break;
    case 4:
        printf ("Enter the position to delete :");
        scanf ("%d", &position);
        delete (arr, &size, position);
    break;
    case 5:
	    bubblesort (arr, size);
    break;
    case 6:
    	free (arr);
        printf ("program exited\n");
        exit (0);
    default:
	    printf ("Invalid choice !!!");
    break;
    }
}

return 0;

}
