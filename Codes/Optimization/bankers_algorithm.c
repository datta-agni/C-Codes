/*
 * Operating Systems
 * Djistkra's Banker's Algorithm
 */

#include <stdio.h>

int m, n, i, j, al[10][10], max[10][10], av[10], need[10][10], temp, z, y, p, k;

int main() {
    /*
     * enter numbers of processes
     */
    printf("\n Enter no of processes : ");
    scanf("%d", &m);
    /*
     * enter numbers of resources
     */
    printf("\n Enter no of resources : ");
    scanf("%d", &n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            /*
             * al[][] matrix is for allocated instances
             */
            printf("\n Enter instances for al[%d][%d] = ", i, j);
            scanf("%d", &al[i][j]);
            // al[i][j]=temp;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            /*
             * max[][] matrix is for max instances
             */
            printf("\n Enter instances for max[%d][%d] = ", i, j);
            scanf("%d", &max[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        /*
         * av[] matrix is for available instances
         */
        printf("\n Available Resource for av[%d] = ", i);
        scanf("%d", &av[i]);
    }

    /*
     * Print allocation values
     */
    printf("Allocation Values :\n");
    for (i = 0; i < m; i++) {
        /*
         * printing allocation matrix
         */
        for (j = 0; j < n; j++) printf(" \t %d", al[i][j]);
        printf("\n");
    }

    printf("\n\n");

    /*
     * Print max values
     */
    printf("Max Values :\n");
    for (i = 0; i < m; i++) {
        /*
         * printing max matrix
         */
        for (j = 0; j < n; j++) printf(" \t %d", max[i][j]);
        printf("\n");
    }

    printf("\n\n");

    /*
     * Print need values
     */
    printf("Need Values :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            /*
             * calculating need matrix
             */
            need[i][j] = max[i][j] - al[i][j];
            /*
             *  printing need matrix
             */
            printf("\t %d", need[i][j]);
        }
        printf("\n");
    }

    /*
     * used for terminating while loop
     */
    p = 1;
    y = 0;

    while (p != 0) {
        for (i = 0; i < m; i++) {
            z = 0;
            /*
             * Comparing need with available instance and checking if the process is
             * done or not counter if condition TRUE
             */
            for (j = 0; j < n; j++)
                if (need[i][j] <= av[j] && (need[i][0] != -1)) z++;

            if (z == n) {
                /*
                 * if need<=available TRUE for all resources then condition is TRUE
                 */

                for (k = 0; k < n; k++) av[k] += al[i][k];
                /*
                 * new work = work + allocated
                 */

                /*
                 * Print the Process, assign -1 if Process done, count if process done
                 */
                printf("\n SS process %d", i);
                need[i][0] = -1;
                y++;
            }
        }
        /*
         * end for loop
         * if all done then
         * exit while loop
         */
        if (y == m) p = 0;
    }

    printf("\n");
}
