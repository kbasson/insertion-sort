/*
    Name: Karanvir Basson
    Title: Insertion Sort Algorithm
    Date: 04-23-2022
*/

#include "insertionSort.h"

int main() {

    //Create array to be sorted
    int arr[SIZE];
    initializeArray(arr);

    //--Display array before sorting------------

    printf("\nBEFORE INSERTION SORT\n\n");

    for (int i = 0; i < SIZE; i++) { //Display all elements in array

        printf("arr[%d] = %d\n", i, arr[i]);

    }

    printf("\n");

    //------------------------------------------

    //------------------------------------------
    //--INSERTION SORT ALGORITHM----------------
    //------------------------------------------

    for (int i = 0; i < SIZE; i++) { //For all array elements

        int insertIndex = -1; //Find index to place current non-sorted element in sorted subarray

        for (int j = 0; j < i; j++) { //For all sorted elements, search for index to add new unsorted element to

            if (arr[j] > arr[i]) { //If current sorted element is greater
                
                insertIndex = j; //Insert non-sorted element at current index
                break; //Exit search

            }

        }

        if (insertIndex == -1) continue; //If current unsorted element is largest element, don't change anything

        for (int j = i; j > insertIndex; j--) { //Else, swap unsorted elemnt down until it reaches desired index

            //SWAP CURRENT ELEMENT DOWN
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;

        }

    }

    //------------------------------------------
    //------------------------------------------
    //------------------------------------------

    //--Display array after sorting-------------

    printf("AFTER INSERTION SORT\n\n"); 

    for (int i = 0; i < SIZE; i++) { //Display all elements in array

        printf("arr[%d] = %d\n", i, arr[i]);

    }

    printf("\n");

    //------------------------------------------

    return 1;

}

void initializeArray(int* arr) { //Function that initializes array elements

    srand(time(NULL)); //Set seed for random values

    for (int i = 0; i < SIZE; i++) { //For all array elements

        arr[i] = (rand() % (UPPER_BOUND + 1)) + LOWER_BOUND; //Generate int n, LOWER_BOUND <= n <= UPPER_BOUND

    }

}
