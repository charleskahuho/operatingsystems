#include<stdio.h>
void waitingTime(int at[], int bt[], int n)
{
int wt[n];
int i;
wt[0] = 0;
printf("PN\t\tAT\t\tBT\t\tWT\n\n");
printf("1\t\t%d\t\t%d\t\t%d\n", at[0], bt[0], wt[0]);
for (i =o; i < n; i++)
{
    wt[i] = (at[i-1] + bt[i-1]+wt[i-1])-at[i];
    printf(%d\t\t%d\t\t%d\t\t%d\n, i+1, at[i], bt[1], wt[i]);
}
float avg;
float sum = 0;
for (i = 0; i <n; i++)
{
    sum = sum _wt[i];
}
avg = sum/ n;
printf("the avearge waiting is = %f\n", avg);
}
int main()
{
    int n = 5;
    int bt[n]={4, 5, 4, 7. 8};
    int at[n]={0, 2, 4, 5, 6}

    waitingTime(at, bt, n);
    return 0;

}