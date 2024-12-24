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
