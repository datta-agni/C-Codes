#include <memory.h>
#include <stdint.h>
#include <stdio.h>

int findFlow(int n, int c[n][n], int f[n][n], int anc[n], int que[n], int flow[n]) {
    int qCurrent = 0;
    int qNumber  = 1;
    que[0]       = 0;
    anc[n - 1]   = -1;
    memset(flow, 0, sizeof(int) * n);
    flow[0] = INT32_MAX;

    int curV;

    while (anc[n - 1] == -1 && qCurrent < qNumber) {
        curV = *(que + qCurrent);
        for (int i = 0; i < n; ++i) {
            if ((c[curV][i] - f[curV][i] > 0) && (flow[i] == 0)) {
                que[qNumber] = i;
                qNumber++;

                anc[i] = curV;
                if (c[curV][i] - f[curV][i] < flow[curV]) {
                    flow[i] = c[curV][i];
                } else {
                    flow[i] = flow[curV];
                }
            }
        }
        qCurrent++;
    }

    if (anc[n - 1] == -1) return 0;

    curV = n - 1;

    while (curV != 0) {
        f[anc[curV]][curV] += flow[n - 1];
        curV = anc[curV];
    }

    return *(flow + n - 1);
}

int findMaxFlow(int n, int c[n][n]) {
    int f[n][n];
    memset(f, 0, sizeof(int) * n * n);

    int ancestors[n];
    int queue[n];
    int flow[n];

    int maxFlow = 0;
    int augPathFlow;

    do {
        augPathFlow = findFlow(n, c, f, ancestors, queue, flow);
        maxFlow += augPathFlow;
    } while (augPathFlow > 0);

    return maxFlow;
}

int main(int argc, const char *argv[]) {
    int n;

    printf("Enter number of vertices : ");
    scanf("%d", &n);
    printf("Enter matrix\n");

    int c[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) scanf("%d", &c[i][j]);
    }

    printf("\nMaxFlow : %d\n", findMaxFlow(n, c));

    return 0;
}