#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void stackInit(Stack* s) {
    s->top = -1;
}

bool stackIsEmpty(Stack* s) {
    return s->top == -1;
}

bool stackPush(Stack* s, int x) {
    if (s->top >= MAX_SIZE - 1) return false;
    s->data[++(s->top)] = x;
    return true;
}

int stackPop(Stack* s) {
    return s->data[(s->top)--];
}

int stackPeek(Stack* s) {
    return s->data[s->top];
}

// MyQueue Definition
typedef struct {
    Stack inStack;
    Stack outStack;
} MyQueue;

MyQueue* myQueueCreate() {
    MyQueue* queue = (MyQueue*)malloc(sizeof(MyQueue));
    stackInit(&queue->inStack);
    stackInit(&queue->outStack);
    return queue;
}

void myQueuePush(MyQueue* obj, int x) {
    stackPush(&obj->inStack, x);
}

int myQueuePop(MyQueue* obj) {
    if (stackIsEmpty(&obj->outStack)) {
        while (!stackIsEmpty(&obj->inStack)) {
            stackPush(&obj->outStack, stackPop(&obj->inStack));
        }
    }
    return stackPop(&obj->outStack);
}

int myQueuePeek(MyQueue* obj) {
    if (stackIsEmpty(&obj->outStack)) {
        while (!stackIsEmpty(&obj->inStack)) {
            stackPush(&obj->outStack, stackPop(&obj->inStack));
        }
    }
    return stackPeek(&obj->outStack);
}

bool myQueueEmpty(MyQueue* obj) {
    return stackIsEmpty(&obj->inStack) && stackIsEmpty(&obj->outStack);
}

void myQueueFree(MyQueue* obj) {
    free(obj);
}
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void stackInit(Stack* s) {
    s->top = -1;
}

bool stackIsEmpty(Stack* s) {
    return s->top == -1;
}

bool stackPush(Stack* s, int x) {
    if (s->top >= MAX_SIZE - 1) return false;
    s->data[++(s->top)] = x;
    return true;
}

int stackPop(Stack* s) {
    return s->data[(s->top)--];
}

int stackPeek(Stack* s) {
    return s->data[s->top];
}

// MyQueue Definition
typedef struct {
    Stack inStack;
    Stack outStack;
} MyQueue;

MyQueue* myQueueCreate() {
    MyQueue* queue = (MyQueue*)malloc(sizeof(MyQueue));
    stackInit(&queue->inStack);
    stackInit(&queue->outStack);
    return queue;
}

void myQueuePush(MyQueue* obj, int x) {
    stackPush(&obj->inStack, x);
}

int myQueuePop(MyQueue* obj) {
    if (stackIsEmpty(&obj->outStack)) {
        while (!stackIsEmpty(&obj->inStack)) {
            stackPush(&obj->outStack, stackPop(&obj->inStack));
        }
    }
    return stackPop(&obj->outStack);
}

int myQueuePeek(MyQueue* obj) {
    if (stackIsEmpty(&obj->outStack)) {
        while (!stackIsEmpty(&obj->inStack)) {
            stackPush(&obj->outStack, stackPop(&obj->inStack));
        }
    }
    return stackPeek(&obj->outStack);
}

bool myQueueEmpty(MyQueue* obj) {
    return stackIsEmpty(&obj->inStack) && stackIsEmpty(&obj->outStack);
}

void myQueueFree(MyQueue* obj) {
    free(obj);
}
