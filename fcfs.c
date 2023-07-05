#include<stdio.h>
void waitingTime(int at[], int bt[], int n)
{
    declare an array for the waiting time 
int wt[n];
int i;
//declare the first first element in the waiting time array as 0
wt[0] = 0;
printf("PN\t\tAT\t\tBT\t\tWT\n\n");
printf("1\t\t%d\t\t%d\t\t%d\n", at[0], bt[0], wt[0]);
for (i =o; i < n; i++)
{
    //perform the waiting time calculation equation
    wt[i] = (at[i-1] + bt[i-1]+wt[i-1])-at[i];
    printf(%d\t\t%d\t\t%d\t\t%d\n, i+1, at[i], bt[1], wt[i]);
}
//declare elements for calculating the average and sum
float avg;
float sum = 0;
for (i = 0; i <n; i++)
{
    // calculate the sum by using a for loop for all elements
    sum = sum _wt[i];
}
//calculate the average
avg = sum/ n;
printf("the avearge waiting is = %f\n", avg);
}
int main()
{
    // number of processes
    int n = 5;
    //create array for burst time
    int bt[n]={4, 5, 4, 7. 8};
    //create array for arrival time
    int at[n]={0, 2, 4, 5, 6};
    //call waitingtime function
    waitingTime(at, bt, n);
    return 0;

}