void heapifyUp(int heap[], int index) {
    while (index > 0) {
        int parent = (index - 1) / 2;
        if (heap[parent] > heap[index]) {
            int temp = heap[parent];
            heap[parent] = heap[index];
            heap[index] = temp;
            index = parent;
        } else {
            break;
        }
    }
}

void heapifyDown(int heap[], int size, int index) {
    while (2 * index + 1 < size) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int smallest = index;
        if (left < size && heap[left] < heap[smallest]) smallest = left;
        if (right < size && heap[right] < heap[smallest]) smallest = right;
        if (smallest != index) {
            int temp = heap[smallest];
            heap[smallest] = heap[index];
            heap[index] = temp;
            index = smallest;
        } else {
            break;
        }
    }
}

int findKthLargest(int* nums, int numsSize, int k) {
    int* heap = (int*)malloc(sizeof(int) * k);
    int heapSize = 0;

    for (int i = 0; i < numsSize; i++) {
        if (heapSize < k) {
            heap[heapSize++] = nums[i];
            heapifyUp(heap, heapSize - 1);
        } else if (nums[i] > heap[0]) {
            heap[0] = nums[i];
            heapifyDown(heap, k, 0);
        }
    }

    int result = heap[0];
    free(heap);
    return result;
}

