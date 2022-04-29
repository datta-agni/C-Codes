#include <stdio.h>

int a[100], b[100], i, n, z, f, j, pf, h, temp;

int main() {
    /*
     * no. of page referencing
     */
    printf("\nEnter the no. of pages : ");
    scanf("%d", &n);
    /*
     * no. of page frames
     */
    printf("\nEnter the size of frame : ");
    scanf("%d", &f);
    /*
     * values of page referencing
     */
    printf("\n Enter the pages value :\n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    /*
     * assign values of page frames 1 initially
     */
    for (i = 0; i < f; i++) b[i] = -1;

    i = 0;
    j = 0;
    h = 0;
    /*
     * i , j used for loop, h for hit count all initialized to 0
     */

    while (i < n) {
        if (b[i] == -1 && i < f) {
            /*
             * when frames are empty so for starting enqueue
             */
            b[i] = a[i];
            /*
             * page fault counter
             */
            pf++;
        } else {
            z = 0;
            for (j = 0; j < f; j++) {
                /*
                 * to check if value already present
                 */
                if (b[j] == a[i])
                    /*
                     * hit counter
                     */
                    h++;
                else
                    /*
                     * if not hit count increment
                     */
                    z++;
            }
            if (z == f) {                      // if no value matched
                pf++;                          // page fault counter
                for (j = 0; j < f - 1; j++) {  // shifting values
                    temp     = b[j];
                    b[j]     = b[j + 1];
                    b[j + 1] = temp;
                }
                b[f - 1] = a[i];  // insert new values
            }

        }  // end else

        printf("\n Current Frame:  %d \t %d \t %d \n", b[2], b[1], b[0]);  // frames value for every iteration

        i++;
    }  // end while

    printf("\n frame at the end :");

    for (i = 0; i < f; i++) printf("\n b[%d] = %d", i, b[i]);

    printf("\n Page Fault = %d ", pf);  // no. of page faults
    printf("\n Hit = %d ", h);          // no. of hits
    printf("\n");
}
