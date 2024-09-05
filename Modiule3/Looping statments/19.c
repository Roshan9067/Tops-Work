/*patterns:
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1  */
/*#include <stdio.h>
int main() {
    int row, col;

    for(row = 1; row <= 5; row++) {
        for(col = 1; col <= row; col++) {
            if(col % 2 == 0){
                printf("0");
            }else{
                printf("1");
            }
        }
        printf("\n");
    }

}*/

// A 
// B C 
// D E F 
// G H I J 
// K L M N O


/* #include <stdio.h>
int main() {
    int row , col;
    char ch = 'A';

    for(row = 1; row <= 5; row++){
        for(col = 1; col <= row; col++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
} */

//         *
//       * * *
//     * * * * *
//   * * * * * * * 
// * * * * * * * * *

/* #include <stdio.h>
int main() {
    int row, col;
    for(row = 1; row <= 5; row++){
        for(col = 4; col >= row; col--){
            printf("  ");
        }
        for(col = 1; col <= row; col++){
            printf("* ");
        }
        for(col = 1; col <= row - 1; col++){
            printf("* ");
        }
        printf("\n");
    }

    
} */

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

/* #include <stdio.h>
int main() {
    int row, col;

    for(row = 1; row <= 5; row++){
        for(col = 1; col <= row; col++){
            printf("+ ");
        }
         printf("\n");
    }
     for(row = 1; row <= 5; row++){
        for(col = 4; col >= row; col--){
            printf("+ ");
        }
         printf("\n");
     }

} */


// 1 
// 2 3 
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

/* #include <stdio.h>
int main() {
    int row, col;
    int num = 1;

    for(row = 1; row <= 5; row++){
        for(col = 1; col <= row; col++){
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

} */

// A 
// A B
// A B C 
// A B C D 
// A B C D E 

/* #include <stdio.h>
int main() {
    int row, col;

    for(row = 1; row <= 5; row++){
        char ch = 'A';
        for(col = 1; col <= row; col++){
            printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }

} */


// 1  2  3  4  5  6  7  8  9  10
// 36 37 38 39 40 41 42 43 44 11
// 35 64 65 66 67 68 69 70 45 12
// 34 63 84 85 86 87 88 71 46 13
// 33 62 83 96 97 98 89 72 47 14
// 32 61 82 95 90 100 99 73 48 15
// 31 60 81 94 93 92 91 74 49 16
// 30 59 80 79 78 77 76 75 50 17
// 29 58 57 56 55 54 53 52 51 18
// 28 27 26 25 24 23 22 21 20 19

#include <stdio.h>
int main() {
    int size;
    printf("enter size: ");
    scanf("%d", &size);
    int arr[size][size];
    int row = 0, col, num = 1, end = size - 1;

    for(row = 0; row <= size/2; row++ ,end--){

    for(col = row; col <= end; col++){ 
        arr[row][col] =num++;
        }

     for(col = row + 1; col <= end; col++){ 
        arr[col][end] =num++;
        }

     for(col = end - 1; col >= row; col--){ 
        arr[end][col] =num++;
        }

     for(col = end - 1; col > row; col--){ 
        arr[col][row] =num++;
        }
      }

        for(row = 0; row < size; row++){
            printf("\n");
            for(col=0;col < size; col++){
                printf("  %.2d", arr[row][col]);
            }
        }
    
}






 