# OS
Learning  OS in 5th Semester

#Round Robin =>is a CPU scheduling algorithm where each process is cyclically assigned a fixed time slot. 
CHARACTERISTICS :-  * It is simple, easy to implement, and starvation-free as all processes get a fair share of CPU.
                    * One of the most commonly used techniques in CPU scheduling is a core.
                    * It is preemptive as processes are assigned CPU only for a fixed slice of time at most.
                    * The disadvantage of it is more overhead of context switching.

ADVANTAGE :-  * There is fairness since every process gets an equal share of the CPU.
              * The newly created process is added to the end of the ready queue.
              * A round-robin scheduler generally employs time-sharing, giving each job a time slot or quantum. 
              * While performing a round-robin scheduling, a particular time quantum is allotted to different jobs. 
              * Each process get a chance to reschedule after a particular quantum time in this scheduling. 

DISADVANTAGE :-   * There is Larger waiting time and Response time.
                  * There is Larger waiting time and Response time.
                  * There is Low throughput.
                  * There is Context Switches.
                  * Gantt chart seems to come too big (if quantum time is less for scheduling. For Example:1 ms for big scheduling.)
                  * Time consuming scheduling for small quantum.

Algorithm Steps:
Input:
Get the number of processes, their burst times (time required for execution), and the time quantum.

Initialization:
Create a copy of the burst times to track remaining burst times for each process. Initialize arrays for waiting time and turnaround time to zero.

Simulation Loop:
Iterate through the processes in a circular manner until all processes are completed.

For each process:
If the remaining burst time is greater than the time quantum:
Decrement the remaining burst time by the quantum.
Add the quantum to the current time.
Else (remaining burst time is less than or equal to the quantum):
Add the remaining burst time to the current time.
Set the remaining burst time to zero (process completed).
Calculate the waiting time for the process: waiting_time = current_time - original_burst_time.
Calculate the turnaround time: turnaround_time = waiting_time + original_burst_time.

Calculate Averages:
Sum up all waiting times and turnaround times, then divide by the total number of processes to get the average waiting time and average turnaround time.

Output:
Print the burst time, waiting time, and turnaround time for each process, along with the average waiting time and average turnaround time.
