// #include <stdio.h>
// void calculateSumAndAverage(int *arr, int size, int *sum, float *average);

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int sum;
//     float average;
//     calculateSumAndAverage(arr, size, &sum, &average);
//     printf("Sum: %d\n", sum);
//     printf("Average: %.2f\n", average);

//     return 0;
// }
// void calculateSumAndAverage(int *arr, int size, int *sum, float *average) {
//     *sum = 0;    
//     for(int i = 0; i < size; i++) {
//         *sum += *(arr + i);
//     } 
//     *average = (float)(*sum) / size;
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