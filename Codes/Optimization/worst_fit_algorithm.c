#include <stdio.h>
#define max 100

void main()

{
    int frag[max], b[max], f[max], i, j, nb, nf, temp, highest = 0;
    static int bf[max], ff[max];
    int clrscr();

    printf("\nEnter the number of blocks: ");
    scanf("%d", &nb);
    printf("Enter the number of process: ");
    scanf("%d", &nf);
    printf("\nEnter the size of the blocks: \n");

    for (i = 1; i <= nb; i++) {
        printf("Block %d:", i);
        scanf("%d", &b[i]);
    }

    printf("Enter the size of the process: \n");

    for (i = 1; i <= nf; i++) {
        printf("Process %d:", i);
        scanf("%d", &f[i]);
    }

    for (i = 1; i <= nf; i++) {
        for (j = 1; j <= nb; j++) {
            /*
             * if bf[j] is not allocated
             */
            if (bf[j] != 1) {
                temp = b[j] - f[i];
                if (temp >= 0)
                    if (highest < temp) {
                        ff[i]   = j;
                        highest = temp;
                    }
            }
        }

        frag[i]   = highest;
        bf[ff[i]] = 1;
        highest   = 0;
    }

    printf("\nProcess No: \tProcess Size: \tBlock No: \tBlock_size  \tFragment: ");
    for (i = 1; i <= nf; i++) printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", i, f[i], ff[i], b[ff[i]], frag[i]);
    int getch();
}
