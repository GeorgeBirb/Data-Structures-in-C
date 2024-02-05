#include <stdio.h>
#define PLITHOS 8

typedef struct App
{
    int stili;
    int grammi;
    int timi;
} typos_stoixeiou;

typos_stoixeiou a[PLITHOS];

void anastrofos(typos_stoixeiou a[], typos_stoixeiou b[])
{
    int n = a[0].timi;
    b[0].grammi = a[0].stili;
    b[0].stili = a[0].grammi;
    b[0].timi = n;

    int trexonb = 1;

    for (int i = 0; i < PLITHOS; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (a[j].stili == i)
            {
                b[trexonb].grammi = a[j].stili;
                b[trexonb].stili = a[j].grammi;
                b[trexonb].timi = a[j].timi;
                trexonb++;
            }
        }
    }
}

int main()
{
    // Initialize the Array
a[0].grammi=6;
a[0].stili=6;
a[0].timi=8;

a[1].grammi=0;
a[1].stili=0;
a[1].timi=10;

a[2].grammi=0;
a[2].stili=3;
a[2].timi=5;

a[3].grammi=1;
a[3].stili=2;
a[3].timi=2;

a[4].grammi=2;
a[4].stili=1;
a[4].timi=12;

a[5].grammi=3;
a[5].stili=5;
a[5].timi=-3;

a[6].grammi=4;
a[6].stili=0;
a[6].timi=9;

a[7].grammi=4;
a[7].stili=3;
a[7].timi=-6;

a[8].grammi=5;
a[8].stili=4;
a[8].timi=1;

    typos_stoixeiou b[PLITHOS];
    anastrofos(a, b);

    printf("\nInitial Array:\n");
    for (int i = 0; i < PLITHOS; i++)
    {
        printf("a[%d]: grammi = %d, stili = %d, timi = %d\n", i, a[i].grammi, a[i].stili, a[i].timi);
    }

    printf("\nReversed Array:\n");
    for (int i = 0; i < PLITHOS; i++)
    {
        printf("b[%d]: grammi = %d, stili = %d, timi = %d\n", i, b[i].grammi, b[i].stili, b[i].timi);
    }

    // Print results
    return 0;
}


// INITIAL SPARSE MATRIX
// |10,  0, 0, 5, 0,  0|
// | 0,  0, 2, 0, 0 , 0|
// | 0, 12, 0, 0, 0 , 0|   
// | 0,  0, 0, 0, 0 ,-3|
// | 9,  0, 0,-6, 0 , 0| 
// | 0,  0, 0, 0, 1 , 0|


// FROM INITIAL SPARSE MATRIX TO DATA STRUCTURE:
// a[0]: grammi = 6, stili = 6, timi = 8
// a[1]: grammi = 0, stili = 0, timi = 10
// a[2]: grammi = 0, stili = 3, timi = 5
// a[3]: grammi = 1, stili = 2, timi = 2
// a[4]: grammi = 2, stili = 1, timi = 12
// a[5]: grammi = 3, stili = 5, timi = -3
// a[6]: grammi = 4, stili = 0, timi = 9
// a[7]: grammi = 4, stili = 3, timi = -6

// Reversed Array:
// b[0]: grammi = 6, stili = 6, timi = 8
// b[1]: grammi = 0, stili = 0, timi = 10
// b[2]: grammi = 0, stili = 4, timi = 9
// b[3]: grammi = 1, stili = 2, timi = 12
// b[4]: grammi = 2, stili = 1, timi = 2
// b[5]: grammi = 3, stili = 0, timi = 5
// b[6]: grammi = 3, stili = 4, timi = -6
// b[7]: grammi = 5, stili = 3, timi = -3