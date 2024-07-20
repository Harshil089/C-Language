// #include <stdio.h>
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int num1, num2;

//     printf("Enter two integers: ");
//     scanf("%d %d", &num1, &num2);

//     printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
//     swap(&num1, &num2);

//     printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

//     return 0;
// }

// #include <stdio.h>
// int swap(int *a, int *b) {
//     int temp = *a + *b;
//     // *a = *b;
//     return temp;
// }

// int main() {
//     int num1, num2, sum=0;

//     printf("Enter two integers: ");
//     scanf("%d %d", &num1, &num2);
//     printf("After adding = %d",swap(&num1, &num2));

//     return 0;
// }

#include <stdio.h>
void add(int *arr, int size, int *sum);
int main() {
    int n,num1,sum;
    int arr[3];
    printf("Enter array length: ");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for(int i =0; i<n; i++)
    {
        scanf("%d",&num1);
        arr[i]=num1;
    }
    int size= sizeof(arr)/sizeof(arr[0]);
    add(arr,size,&sum);
    printf("The sum is: %d",sum);
    return 0;
}

void add(int *arr, int size, int *sum) 
{
    *sum=0;
    for (int i=0; i < size; i++)
    {
        *sum += *(arr+i);
    }
    
}

