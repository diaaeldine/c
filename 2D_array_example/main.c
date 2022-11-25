#include <stdio.h>
#include <stdlib.h>

int main(){

    int r, c; //r to hold the number of sales persons and c for items
    printf("enter number of sales person: ");
    scanf("%d", &r);
    printf("enter number of items: ");
    scanf("%d", &c);
    printf("\n\n\n"); // print 3 new lines

    //declare 2D Array
    double saleData[r][c];
    // input sale data into array
    printf("Enter Sale Data: \n\n");
    int i, j;
    for(i=0;i<r;i++){ //outer loop is for row
        for(j=0;j<c;j++){//nested for loop sale data from the console the i row and j column
            printf("Sale amt for Sales Person no %d item no %d: ", i+1, j+1);
            scanf("%lf", &saleData[i][j]);
        }
    }
    // display report
    printf("---------------------------\n");
    printf("Sale Data\n");
    printf("---------------------------\n\n"); // 3 lies to print the headings for the report
    double total = 0.0;
    double comm;
    for(i=0;i<r;i++){
        printf("Sale data for salesperson no. %d\n", i+1);//the heading of each row
        printf("-------------------------------\n");
        total = 0.0;//summing up the total of each requires the total to be initialized to 0
        //otherwise the garbage value will be there in the total value
        for(j=0;j<c;j++){//iterate thu the column of the first row
            printf("\tItem %d: $%0.2lf\n", j+1, saleData[i][j]);
            total += saleData[i][j];

        }
        printf("\tTotal : $%0.2lf\n", total);//0.2f to round the value 2 digits after the decimal point
        comm = 0.1 * total;
        printf("\tComm : $%0.2lf\n", comm); //\t tab character move 4 characters
        printf("\n\n");
        }




    return 0;
}
