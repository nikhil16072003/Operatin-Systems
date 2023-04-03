

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define N 2

int turn = 0;
int interested[N] = {0, 0};
sem_t sem[N];

void* thread_func(void* arg) {
    int i = *(int*) arg;
    while (1) {
        // Entry section
        interested[i] = 1;
        turn = 1 - i;
        while (turn == 1 - i && interested[1 - i]) {
            // Wait until it's my turn and the other process is not interested
        }
        // Critical section
        printf("Thread %d is in the critical section\n", i);
        // Exit section
        interested[i] = 0;
        // Non-critical section
        printf("Thread %d is in the non-critical section\n", i);
    }
}

int main() {
    int i;
    pthread_t threads[N];
    int thread_args[N];
    sem_init(&sem[0], 0, 1);
    sem_init(&sem[1], 0, 1);
    for (i = 0; i < N; i++) {
        thread_args[i] = i;
        pthread_create(&threads[i], NULL, thread_func, &thread_args[i]);
    }
    for (i = 0; i < N; i++) {
        pthread_join(threads[i], NULL);
    }
    return 0;
}
