
#define MAX_SIZE 110

typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initQueue(Queue* q) {
    q->front = 0;
    q->rear = 0;
}

bool isEmpty(Queue* q) {
    return q->front == q->rear;
}

int size(Queue* q) {
    return q->rear - q->front;
}

void enqueue(Queue* q, int val) {
    if (q->rear < MAX_SIZE) {
        q->data[q->rear++] = val;
    }
}

int dequeue(Queue* q) {
    if (!isEmpty(q)) {
        return q->data[q->front++];
    }
    return -1;
}

int front(Queue* q) {
    if (!isEmpty(q)) {
        return q->data[q->front];
    }
    return -1;
}

typedef struct {
    Queue q1;
    Queue q2;
} MyStack;

MyStack* myStackCreate() {
    MyStack* stack = (MyStack*)malloc(sizeof(MyStack));
    initQueue(&stack->q1);
    initQueue(&stack->q2);
    return stack;
}

void myStackPush(MyStack* obj, int x) {
    enqueue(&obj->q2, x);
    while (!isEmpty(&obj->q1)) {
        enqueue(&obj->q2, dequeue(&obj->q1));
    }
    // Swap q1 and q2
    Queue temp = obj->q1;
    obj->q1 = obj->q2;
    obj->q2 = temp;
}

int myStackPop(MyStack* obj) {
    return dequeue(&obj->q1);
}

int myStackTop(MyStack* obj) {
    return front(&obj->q1);
}

bool myStackEmpty(MyStack* obj) {
    return isEmpty(&obj->q1);
}

void myStackFree(MyStack* obj) {
    free(obj);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/
