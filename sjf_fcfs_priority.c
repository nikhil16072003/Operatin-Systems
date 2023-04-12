/*Consider there are n processes in a system with respective burst times. The
priority of those n processes are also given for all n processes. We can
consider all the processes arrive on the ready queue at time 0. Calculate the
total waiting time, total turn around time, average waiting time and
average turn around time using following algorithms
1. FCFS
2. SJF
3. PRIORITY
Code:
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000
typedef struct
{
int processid;
int bursttime;
int arrivaltime;
int priority;
int waitingtime;
int turnaroundtime;
}totalprocess;
int totaltime = 0, tat = 0, wt = 0;
int process;
totalprocess p[MAX];
void FCFS()
{
int i, j;
for(i = 0; i < process - 1; i++)
{
for(j = i + 1; j < process; j++)
{
if(p[i].arrivaltime > p[j].arrivaltime)
{
totalprocess temp = p[i];
p[i] = p[j];
p[j] = temp;
}
}
}
for(i = 0; i < process; i++)
{
if(i == 0)
{
p[i].waitingtime = 0;
}
else
{
p[i].waitingtime = p[i - 1].bursttime + p[i - 1].waitingtime;
}
p[i].turnaroundtime = p[i].bursttime + p[i].waitingtime;
tat += p[i].turnaroundtime;
wt += p[i].waitingtime;
}
printf("\nFCFS:\n");
printf("Process ID\tBurst Time\tArrival Time\tWaiting Time\tTurnaround Time\n");
for(i = 0; i < process; i++)
{
printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", p[i].processid, p[i].bursttime, p[i].arrivaltime,
p[i].waitingtime, p[i].turnaroundtime);
}
printf("\nAverage Turnaround Time of scheduling: %.2f\n", (float)tat / process);
printf("Average Waiting Time of scheduling: %.2f\n", (float)wt / process);
}
void SJF()
{
int i, j;
for(i = 0; i < process - 1; i++)
{
for(j = i + 1; j < process; j++)
{
if(p[i].bursttime > p[j].bursttime)
{
totalprocess temp = p[i];
p[i] = p[j];
p[j] = temp;
}
}
}
for(i = 0; i < process; i++)
{
if(i == 0)
{
p[i].waitingtime = 0;
}
else
{
p[i].waitingtime = p[i - 1].bursttime + p[i - 1].waitingtime;
}
p[i].turnaroundtime = p[i].bursttime + p[i].waitingtime;
tat += p[i].turnaroundtime;
wt += p[i].waitingtime;
}
printf("\nSJF:\n");
printf("Process ID\tBurst Time\tArrival Time\tWaiting Time\tTurnaround Time\n");
for(i = 0; i < process; i++)
{
printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", p[i].processid, p[i].bursttime, p[i].arrivaltime,
p[i].waitingtime, p[i].turnaroundtime);
}
printf("\nAverage Turnaround Time: %.2f\n", (float)tat / process);
printf("Average Waiting Time: %.2f\n", (float)wt / process);
}
void Priority()
{
int i, j;
for(i = 0; i < process - 1; i++)
{
for(j = i + 1; j < process; j++)
{
if(p[i].priority > p[j].priority)
{
totalprocess temp = p[i];
p[i] = p[j];
p[j] = temp;
}
}
}
for(i = 0; i < process; i++)
{
if(i == 0)
{
p[i].waitingtime = 0;
}
else
{
p[i].waitingtime = p[i - 1].bursttime + p[i - 1].waitingtime;
}
p[i].turnaroundtime = p[i].bursttime + p[i].waitingtime;
tat += p[i].turnaroundtime;
wt += p[i].waitingtime;
}
printf("\nPriority:\n");
printf("Process ID\tBurst Time\tArrival Time\tPriority\tWaiting Time\tTurnaround Time\n");
for(i = 0; i < process; i++)
{
printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", p[i].processid, p[i].bursttime, p[i].arrivaltime,
p[i].waitingtime, p[i].turnaroundtime);
}
printf("\nAverage Turnaround Time: %.2f\n", (float)tat / process);
printf("Average Waiting Time: %.2f\n", (float)wt / process);
}
int main()
{
int m;
printf("Enter the total number of processes: ");
scanf("%d", &process);
printf("Enter the type of Sxheduling :");
printf("\nType-1 :fcfs");
printf("\nType-2 :SJF");
printf("\nType-3 :Priority :");
printf("\nEnter your choice of scheduling:");
scanf(" %d",&m);
if(m==1){
for(int j = 0; j < process; j++)
{
p[j].processid = j + 1;
printf("Enter the burst time for process %d: ", j + 1);
scanf("%d", &p[j].bursttime);
printf("Enter the arrival time for process %d: ", j + 1);
scanf("%d", &p[j].arrivaltime);
}
FCFS();
}
if(m==2){
for(int i = 0; i < process; i++)
{
p[i].processid = i + 1;
printf("Enter the burst time for process %d: ", i + 1);
scanf("%d", &p[i].bursttime);
printf("Enter the arrival time for process %d: ", i + 1);
scanf("%d", &p[i].arrivaltime);
}
SJF();
}
if(m==3){
for(int k = 0; k < process; k++)
{
p[k].processid = k + 1;
printf("Enter the burst time for process %d: ", k + 1);
scanf("%d", &p[k].bursttime);
printf("Enter the arrival time for process %d: ", k + 1);
scanf("%d", &p[k].arrivaltime);
printf("Enter the priority for process %d (1-high, 9-low): ", k + 1);
scanf("%d", &p[k].priority);
}
Priority();
}
return 0;
