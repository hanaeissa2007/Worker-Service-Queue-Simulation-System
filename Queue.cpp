#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue(int size) {
    maxSize = size;
    arr = new Worker[maxSize];
    front = 0;
    rear = -1;
    count = 0;
    Worker = new int[maxSize];
}
void Queue::initializeQueue(){
        front = 0;
        rear = -1;
        count = 0;
        for (int i = 0; i < maxSize; i++){
            Worker[i] = 0;
        }
    cout<< "Queue is initialized!" << endl;
    }

bool Queue::isEmpty() {
    return count == 0;
}

bool Queue::isFull() {
    return count == maxSize;
}

bool Queue::enqueue(Worker w) {
    if (isFull()) {
        cout << "Queue is full!\n";
        return false;
    }
    rear = (rear + 1) % maxSize;
    arr[rear] = w;
    count++;
    cout<< item << " is added" << endl;
        return true;
}

Worker Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty!\n";
        return -1;
    }
    int deletedItem = arr[front];
    arr[front] = 0;
    front = (front + 1) % maxSize;
    count--;
    return deletedItem;
}
void Queue::display(){
        if (isEmpty()){
            cout<< "The queue is empty" << endl;
            return;
        }
        cout<< "The queue contents are (from front to rear):" << endl;
        int index = front;
        for(int i = 0; i < count; i++){
            cout<< arr[index] << " ";
            index = (index + 1) % maxSize;
        }
        cout<< endl;
        cout<< "Front: " << front << ", Rear: " << rear << ", Count: " << count
        << ", Maximum size: " << maxSize << endl;
    }
