#include<stdio.h>
void roundrobin(int processes[],int n,int burstTime[],int quantum){
    int remainingTime[n];
    int waitingTime[n];
    int turnaroundTime[n];
    int time=0;
    int completed=0;

    for(int i=0;i<i<n;i++){
        remainingTime[i]=burstTime[i];
        waitingTime[i]=0;
    }
    while(completed<n){
        for(int i=0;i<n;i++){
            if(remainingTime[i]>0){
                if(remainingTime[i]>quantum){
                    time+=quantum;
                    remainingTime[i]=time-burstTime[i];
                    remainingTime[i]=0;
                    completed++;   
            }
            }
        }
    }
    // calculate TurnaroundTime
    for(int i=0;i<n;i++){
        turnaroundTime[i]=burstTime[i]+waitingTime[i];
    }
    // display result
    printf("process\t Burst Time \t Waiting Time \t Turnaround Time");
    for(int i=0;i<n;i++){
        printf("P%d\t %d\t %d\t %d\t \n",processes[i],burstTime[i],waitingTime[i],turnaroundTime[i]);
    }

    // Average Waiting Time an TurnAroundTime
    float avgWaitingTime=0,avgTurnAroundTime=0;
        for(int i=0;i<n;i++){
       avgWaitingTime+=waitingTime[i];
       avgTurnAroundTime+=turnaroundTime[i];
    }
    printf("\n Average Waiting Time : %2f\n",avgWaitingTime /n);
     printf("\n Turnaround Time : %2f\n",avgTurnAroundTime /n);

    
}

int main(){
    int n,quantum;

    printf("Enter the Number of Processes");
    scanf("%d",&n);

    int processes[n],burstTime[n];

    printf("Enter burst TIme for each processes:\n");
    for(int i=0;i<n;i++){
        processes[i]=i+1;
        printf("P %d :",i+1);
        scanf("%d",&burstTime[i]);
    }
    printf("Enter the time quantum");
    scanf("%d,& quantum");
    roundrobin(processes,n,burstTime,quantum);
    return 0;
}