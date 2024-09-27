#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int T;


struct List {
    T * array;
    int capacity;
    int size;
};


typedef struct List * ArrayList;


bool initArrayList(ArrayList list) {
    list->array = (T*)malloc(sizeof(T) * 10);
    if (list->array == NULL) return 0;
    list->capacity = 10;
    list->size = 0;
    return 1;
}


bool insertArrayList(ArrayList list, T element, int index) {
    if (index < 0 || index > list->size) return 0;
    if (list->size == list->capacity) {
        int new_capacity = list->capacity + (list->capacity >> 1);
        T * new_array = (T*)realloc(list->array, sizeof(T) * new_capacity);
        if (new_array == NULL) return 0;
        list->array = new_array;
        list->capacity = new_capacity; 
    }
    for (int i = list->size; i > index; i--)
        list->array[i] = list->array[i - 1];
    list->array[index] = element;
    list->size++;
    return 1;
}


bool deleteArrayList(ArrayList list, int index) {
    if (index < 0 || index > list->size - 1) return 0;
    for (int i = index; i < list->size - 1; i++)
        list->array[i] = list->array[i + 1];
    list->size--;
    return 1;
}


int sizeArrayList(ArrayList list) {
    return list->size;
}


T * getArrayList(ArrayList list, int index) {
    if (index < 0 || index > list->size - 1) return NULL;
    return &list->array[index];
}


int findArraylist(ArrayList list, T element) {
    for (int i = 0; i < list->size; i++)
        if (list->array[i] == element) return i;
    return -1;
}


void printArrayList(ArrayList list) {
    printf("size: %d, capacity: %d\n", sizeArrayList(list), list->capacity);
    for (int i = 0; i < list->size; i++)
        printf("%d ", list->array[i]);
    printf("\n");
}


int main() {
    struct List list;
    if (initArrayList(&list)) {
        for (int i = 0; i < 30; i++)
            insertArrayList(&list, i, i);
        for (int i = 0; i < 30; i += 1)
            deleteArrayList(&list, i);
        printArrayList(&list);
        printf("%d\n", *getArrayList(&list, 2));
        printf("%d\n", findArraylist(&list, 9));
        printf("%d\n", findArraylist(&list, 4));
    } else {
        printf("ArrayList初始化失败");
    }
}
