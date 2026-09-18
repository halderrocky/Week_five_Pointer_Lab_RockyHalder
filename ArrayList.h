//
// Created by rames on 9/15/2026.
//

# pragma once

# include <iostream>
using namespace std;

template <typename T> // during runtime, map it to whatever data type is being used into a main program
class ArrayList {
    public:
        ArrayList():size(0) {

        }
        void addFront(T item) { // big O is n
            // tackle any issue before you write data[size++] = item;
            if (size>=CAPACITY) {
                cout<<"Array is full"<<endl;
                return;
            }
            for (int i = size ; i>0 ; i--) { //starting from size going down to 0
                data[i] = data[i-1];
            }
            data[0] = item;
            size++;
        }

    void addBack(T item) { // big O is 1
        if (size>=CAPACITY) {
            cout<<"Array is full"<<endl;
            return;
        }
            data[size] = item;
            size++;
        }

    void deleteFront() { // big O is n
            if (size==0) {
                cout<<"Array is empty"<<endl;
                return;
            }
            for (int i = 0; i < size-1; i++) {
                data[i] = data[i+1];
            }
            size--;
        }

    void deleteBack() { // big O is 1
            if (size==0) {
                cout<<"Array is empty"<<endl;
                return;
            }
            size--;
        }

    bool search(T item) { // big O is n
            if (size==0) {
                cout<<"Array is empty"<<endl;
                return false;
            }
            for (int i = 0; i < size; i++) {
                if (data[i] == item)
                return true;
            }
            return false;
        }

    void printArray() {
            for (int i = 0; i < size; i++) {
                cout<<data[i]<<",";
            }
            cout<<endl;
        }

    private:
        static const int CAPACITY = 15;
        T data[CAPACITY];
        int size;
};
