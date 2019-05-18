#include "pustaka.h"

int main()
{
    int menu;
    printf("PILIHAN MENU\n\n");
    printf("1. compressArray\n");
    printf("2. selectionSort1\n");
    printf("3. selectionSort2\n");
    printf("4. getMedian\n");

    printf("\nMasukkan pilihan : "); scanf("%d", &menu);
    printf("\n");

    switch(menu)
    {
    case 1:
        printf("\t\tCOMPRESS ARRAY\n\n");

        int arr1[] = { 3, 5, 38, 0, 44, 47, 'n' };
        int arr2[] = { 3, 0, 44, 38, 0, 5, 47, 'n' };
        int arr3[] = { 2, 15, 0, 0, 0, 26, 27, 36, 'n' };
        int arr4[] = { 15, 36, 27, 0, 0, 2, 26, 'n' };

        compressArray(arr1);
        printf("\n\n");
        compressArray(arr2);
        printf("\n\n");
        compressArray(arr3);
        printf("\n\n");
        compressArray(arr4);
        printf("\n\n");

        break;


    case 2:
        printf("\t\tSELECTION SORT 1\n\n");

        int arr1a[] = { 3, 44, 38, 5, 47 };
        int arr2a[] = { 15, 36, 27, 2, 26 };

        printf("selection sort 1 (arr1) : \n"); selectionSort1(arr1a);
        printf("\n\n");
        printf("selection sort 1 (arr2) : \n");selectionSort1(arr2a);
        printf("\n\n");

        break;


    case 3:
        printf("\t\tSELECTION SORT 2\n\n");

        int arr1b[] = { 3, 44, 38, 5, 47, NULL };
        int arr2b[] = { 15, 36, 27, 2, 26, NULL };

        printf("selection sort 2 (arr1) : \n"); selectionSort2(arr1b);
        printf("\n\n");
        printf("selection sort 2 (arr2) : \n"); selectionSort2(arr2b);
        printf("\n\n");

        break;


    case 4:
        printf("\t\tGET MEDIAN\n\n");

        int arr1c[] = { 3, 44, 38, 5, 47 };
        int arr2c[] = { 15, 36, 27, 2, 26 };

        printf("get median (arr1) : %d", getMedian(arr1c));
        printf("\n\n");
        printf("get median (arr2) : %d\n\n", getMedian(arr2c));

        break;
    }
    return 0;
}
