#include <stdio.h>
#include <stdlib.h>

int main(void) {


//variable decalaration
int a, i = 0;



printf("Enter the number of elements: ");
scanf("%d", &a);

int *arr = (int* )malloc(sizeof(int) * a);


if (arr == NULL) {

    printf("Memory allocation failed\n");
    return 1;


}

printf("Enter the integers:\n");
for  (i = 0; i < a; i++) {
    scanf("%d", &arr[i]);

  }

printf("Integers displayed in reverse order: ");

for (i = a - 1; i >= 0; i--) {
    printf("%d ", arr[i] );
   
}


free(arr);
arr = NULL;

return 0;

}
