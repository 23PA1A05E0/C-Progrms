#include <stdio.h>

int main() {
    int i, n, t, temp = 0;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    int bt[n], re_bt[n], wt[n], tat[n], ct[n];
    float avgwt = 0, avgtat = 0;
    printf("Enter the burst time of each process:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
        re_bt[i] = bt[i]; // Copy burst time into re_bt[]
    }
    printf("Enter the Time Quantum: ");
    scanf("%d", &t);
    // Round Robin Scheduling Logic
    while (1) {
        int done = 1; // Flag to check if all processes are done

        for (i = 0; i < n; i++) {
            if (re_bt[i] > 0) {
                done = 0; // There is a process still pending

                if (re_bt[i] > t) {
                    // Process still has remaining burst time
                    temp += t;
                    re_bt[i] -= t;
                } else {
                    // Process completes execution
                    temp += re_bt[i];
                    ct[i] = temp; // Completion time
                    re_bt[i] = 0; // Mark process as completed
                }
            }
        }
        if (done == 1) {
            break; // All processes are done
        }
    }

    // Calculate waiting time and turnaround time
    for (i = 0; i < n; i++) {
        tat[i] = ct[i]; // Turnaround time = Completion time (since arrival time is 0)
        wt[i] = tat[i] - bt[i]; 
        avgwt += wt[i]; 
        avgtat += tat[i]; 
    }
    // Display processes in the order they were input
    printf("\nPROCESS\t\tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n");
    for (i = 0; i < n; i++) {
        printf("\t%d\t\t\t%d\t\t\t%d\t\t\t\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }
        // Display results
    printf("\nThe Average Turnaround time :: %.2f", avgtat / n);
    printf("\nThe Average Waiting time :: %.2f", avgwt / n);
    return 0;
}
