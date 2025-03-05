#include<stdio.h>

int main() {
    int i, j, n;
    printf("Enter the no of process::");
    scanf("%d", &n);

    // Declaration and Initialization
    int p[n], pr[n], bt[n], wt[n], tat[n];
    float avgwt = 0, avgtat = 0;

    printf("Enter the priority and Burst time of each process::\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &pr[i]);
        scanf("%d", &bt[i]);
        p[i] = i + 1;
    }

    // Sort the process based on priority (Bubble Sort)
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (pr[j] > pr[j + 1]) {
                // Swap priority
                int temp = pr[j];
                pr[j] = pr[j + 1];
                pr[j + 1] = temp;

                // Swap process ID
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;

                // Swap burst time
                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;
            }
        }
    }

    
    wt[0] = 0;  
    tat[0] = bt[0]; 
    avgwt += wt[0];
    avgtat += tat[0];

    for (i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];  
        tat[i] = wt[i] + bt[i]; 
        avgwt += wt[i];
        avgtat += tat[i];
    }

    // Print the results
    printf("pid\tpriority\tBurst time\tWaiting time\tTurn around\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", p[i], pr[i], bt[i], wt[i], tat[i]);
    }
    printf("Average waiting time::%.2f\n", avgwt/n);
    printf("Average Turn around time::%.2f\n", avgtat/n);

    return 0;
}
