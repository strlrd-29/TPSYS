#include <stdio.h>
#include <stdlib.h>

typedef struct process Process;
struct process
{
    int pid;
    int burst;
    int arrival;
    int turnaround;
    int waiting_time;
    int priority;
    Process *next;
};


typedef struct list
{
    Process *head;
    Process *tail;
} List;


List *initialisationListe(Process process)
{
    List *l;
    Process *p;
    l = (List*)malloc(sizeof(List));
    p = (Process*)malloc(sizeof(Process));

    if(l == NULL || p == NULL)
    {
        exit(-1);
    }

    p->pid= process.pid;
    p->burst= process.burst;
    p->arrival= process.arrival;
    p->turnaround= process.turnaround;
    p->priority = process.priority;
    p->waiting_time = 0;
    p->next = NULL;
    l->head = p;
    l->tail = p;

    return l;
}

void addProcess(List *l, Process p)
{
    Process *nouveau;
    nouveau = (Process*)malloc(sizeof(Process));
    if(!nouveau)
    {
        exit(-1);
    }
    nouveau->next= NULL;
    nouveau->pid = p.pid;
    nouveau->arrival = p.arrival;
    nouveau->burst = p.burst;
    nouveau->turnaround = 0;
    nouveau->waiting_time = 0;
    nouveau->priority = p.priority;
    l->tail->next= nouveau;
    l->tail = nouveau;
}

void printList(List *l)
{
    Process *p = l->head;
    int i = 1;
    while(p != NULL)
    {
        printf("Process number %d \n", i);
        printf("PID = %d \n", p->pid);
        printf("ARRIVAL = %d \n", p->arrival);
        printf("BURST = %d \n", p->burst);
        printf("TURNAROUND = %d \n", p->turnaround);
        printf("WAITING TIME = %d \n", p->waiting_time);
        printf("PRIORITY = %d \n", p->priority);
        printf("----------------\n");
        p = p->next;
        i++;
    }
}

Process createProcess(int PID, int arrival, int burst, int priority)
{
    Process p;
    p.pid = PID;
    p.arrival = arrival;
    p.burst = burst;
    p.priority = priority;
    p.turnaround = 0;
    p.next = NULL;

    return p;
}

// sort list by arrival time
void sortArr(List *l)
{
    Process *p = l->head;
    Process *index = NULL;
    Process temp;
    while(p != NULL)
    {
        //Node index will point to node next to current
        index = p->next;

        while(index != NULL)
        {
            //If current node's data is greater than index's node data, swap the data between them
            if(p->arrival > index->arrival)
            {
                temp.pid = p->pid;
                temp.arrival = p->arrival;
                temp.burst = p->burst;
                temp.turnaround = p->turnaround;
                temp.priority = p->priority;

                p->pid= index->pid;
                p->arrival= index->arrival;
                p->burst= index->burst;
                p->turnaround= index->turnaround;
                p->priority = index->priority;

                index->pid = temp.pid;
                index->arrival = temp.arrival;
                index->burst = temp.burst;
                index->turnaround = temp.turnaround;
                index->priority = temp.priority;
            }
            index = index->next;
        }
        p = p->next;
    }
}

void sortPriority(List *l)
{
    Process *p = l->head;
    Process *index = NULL;
    Process temp;
    while(p != NULL)
    {
        //Node index will point to node next to current
        index = p->next;

        while(index != NULL)
        {
            //If current node's data is greater than index's node data, swap the data between them
            if(p->priority > index->priority)
            {
                temp.pid = p->pid;
                temp.arrival = p->arrival;
                temp.burst = p->burst;
                temp.turnaround = p->turnaround;
                temp.priority = p->priority;

                p->pid= index->pid;
                p->arrival= index->arrival;
                p->burst= index->burst;
                p->turnaround = index->turnaround;
                p->priority = index->priority;

                index->pid = temp.pid;
                index->arrival = temp.arrival;
                index->burst = temp.burst;
                index->turnaround = temp.turnaround;
                index->priority = temp.priority;
            }
            index = index->next;
        }
        p = p->next;
    }
}

void sortSjf(List *l)
{
    Process *p = l->head;
    Process *index = NULL;
    Process temp;
    while(p != NULL)
    {
        //Node index will point to node next to current
        index = p->next;

        while(index != NULL)
        {
            //If current node's data is greater than index's node data, swap the data between them
            if(p->burst > index->burst)
            {
                temp.pid = p->pid;
                temp.arrival = p->arrival;
                temp.burst = p->burst;
                temp.turnaround = p->turnaround;
                temp.priority = p->priority;

                p->pid= index->pid;
                p->arrival= index->arrival;
                p->burst= index->burst;
                p->turnaround = index->turnaround;
                p->priority = index->priority;

                index->pid = temp.pid;
                index->arrival = temp.arrival;
                index->burst = temp.burst;
                index->turnaround = temp.turnaround;
                index->priority = temp.priority;
            }else if(p->burst == index->burst) {
                if(p->arrival > index->arrival) {
                    temp.pid = p->pid;
                    temp.arrival = p->arrival;
                    temp.burst = p->burst;
                    temp.turnaround = p->turnaround;
                    temp.priority = p->priority;

                    p->pid= index->pid;
                    p->arrival= index->arrival;
                    p->burst= index->burst;
                    p->turnaround = index->turnaround;
                    p->priority = index->priority;

                    index->pid = temp.pid;
                    index->arrival = temp.arrival;
                    index->burst = temp.burst;
                    index->turnaround = temp.turnaround;
                    index->priority = temp.priority;
                }
            }
            index = index->next;
        }
        p = p->next;
    }
}

float waitingTime(List *l, int i)
{
    if(i == 1)
    {
        sortArr(l);
    }
    else
    {
        sortPriority(l);
    }
    Process *p = l->head->next;
    Process *prev = l->head;
    int total_time = prev->burst;
    float total_waiting_time = 0;

    // waiting time[i] = burst time + waiting time[i-1]
    while(p != NULL)
    {
        if(p->arrival > total_time)
        {
            p->waiting_time = 0;
            total_time = p->arrival  + p->burst;
            p = p->next;
            prev = prev->next;
        }
        else
        {
            p->waiting_time = total_time - p->arrival;
            total_waiting_time += p->waiting_time;
            total_time += p->burst;
            p = p->next;
            prev = prev->next;
        }
    }
    return total_waiting_time;
}

float turnaroundTime(List *l, int i)
{
    if(i == 1) {
    sortArr(l);

    }else {
    sortPriority(l);
    }
    Process *p = l->head;
    float total_turnaround_time = 0;

    while(p != NULL)
    {
        p->turnaround = p->waiting_time + p->burst;
        total_turnaround_time += p->turnaround;
        p = p->next;
    }
    return total_turnaround_time;
}

int getListSize(List *l)
{
    Process *p = l->head;
    int i = 0;
    while(p!=NULL)
    {
        i++;
        p = p->next;
    }
    return i;
}

void findAVGtime(List *l, int response)
{
    int listSize = getListSize(l);
    float avgWaitingTime = waitingTime(l,response)/listSize;
    float avgTurnaroundTime = turnaroundTime(l,response)/listSize;

    printf("The average waiting Time is : %f\n", avgWaitingTime);
    printf("The average turnaround Time is : %f\n", avgTurnaroundTime);
}

int main()
{
    List *l;
    int response;

    printf("What Scheduling Algorithm would you like to do ? please enter the corresponding number.\n");
    printf("1. FIFO (1)\n");
    printf("2. PRIORITY (2) \n");
    scanf("%d", &response);
    if(response == 1)
    {
        printf("\nFIFO it is !\n");
        Process p1 = createProcess(1,2,3,1);
        l = initialisationListe(p1);

        Process p2 = createProcess(2,0,10,5);
        addProcess(l, p2);

        Process p3 = createProcess(3,10,6,3);
        addProcess(l, p3);

        Process p4 = createProcess(3,20,6,2);
        addProcess(l, p4);

        printf("List before Sort \n\n");
        printList(l);

        // calculate the waiting time for each process
        waitingTime(l, response);

        // calculate the turnaround time for each process
        turnaroundTime(l, response);

        sortArr(l);
        printf("\nList with waiting and turnaround times after Sort by arrival time \(FIFO\) \n\n");
        printList(l);

        findAVGtime(l, response);
    }
    else 
        {
            Process p1 = createProcess(1,2,3,1);
            l = initialisationListe(p1);

            Process p2 = createProcess(2,0,10,5);
            addProcess(l, p2);

            Process p3 = createProcess(3,10,6,3);
            addProcess(l, p3);

            Process p4 = createProcess(3,20,6,2);
            addProcess(l, p4);

            printf("List before Sort \n\n");
            printList(l);

            // calculate the waiting time for each process
            waitingTime(l,response);

            // calculate the turnaround time for each process
            turnaroundTime(l, response);

            sortPriority(l);
            printf("\nList with waiting and turnaround times after Sort by priority \(FIFO\) \n\n");
            printList(l);

            findAVGtime(l, response);
        } 
    return 0;
}
