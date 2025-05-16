


typedef struct {
    int *data;
    int *minData;
    int top;
    int capacity;
} MinStack;


MinStack* minStackCreate() {
    MinStack* stack = (MinStack*)malloc(sizeof(MinStack));
    stack->capacity = 30000;
    stack->data = (int*)malloc(sizeof(int) * stack->capacity);
    stack->minData = (int*)malloc(sizeof(int) * stack->capacity);
    stack->top = -1;
    return stack;
}

void minStackPush(MinStack* obj, int val) {
    obj->top++;
    obj->data[obj->top] = val;
    if (obj->top == 0)
        obj->minData[obj->top] = val;
    else
        obj->minData[obj->top] = val < obj->minData[obj->top - 1] ? val : obj->minData[obj->top - 1]; 
}

void minStackPop(MinStack* obj) {
    if (obj->top >= 0)
        obj->top--;
}

int minStackTop(MinStack* obj) {
    return obj->data[obj->top];
}

int minStackGetMin(MinStack* obj) {
    return obj->minData[obj->top];
}

void minStackFree(MinStack* obj) {
    free(obj->data);
    free(obj->minData);
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
