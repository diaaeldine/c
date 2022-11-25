#include <stdio.h>
#include <stdlib.h>
#define SIZE 8   // macro

void print_array(int [], int);
void eight_colony_cell(int [], int);

void eight_colony_cell(int arr[], int days){
    int d = 1;
    int temp[SIZE];
    int left, right, i;
    while (d <= days){
            for (i=0; i< SIZE; ++i){
        left = (i==0)?0:arr[i-1]; //means if (i==0){
                                  // left = 0
                                  //else{left= arr[i-1]
        right = (i==SIZE -1)?0:arr[i+1];

        temp[i] = left == right?0:1;
        }
        for (i=0; i< SIZE; ++i){
            arr[i]= temp[i];
        }
        printf(" Situation after day: %d\n", d);
        print_array(arr, SIZE);

        ++d;
    }

}
void print_array(int arr[], int n){ // print the content of the array
    printf("\n[");
    int i;
    for (i= 0; i < n; ++i){
        if (i != n-1)
            printf("%4d|", arr[i]);
        else
            printf("%4d]", arr[i]);
        }
        printf("\n");
}
int main()
{
    int arr[] = {1,0,0,1,1,1,0,1}; // initialize one dimensional array
    eight_colony_cell(arr, 4); // passing for 4 days
    return 0;
}
