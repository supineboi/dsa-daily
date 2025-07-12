#include <iostream>
#include <list>
using namespace std;

/*
    Chaining using Linked Lists
    collision resolution strategy used in Hash Tables
*/

struct MyHash {
    int BUCKET;
    list<int>* table;

    // Constructor
    MyHash(int b) {
        BUCKET = b;
        table = new list<int>[BUCKET];
    }

    void insert(int key) {
        int i = key % BUCKET;
        table[i].push_back(key);
    }

    void remove(int key) {
        int i = key % BUCKET;
        table[i].remove(key);
    }

    void display() {
        for (int i = 0; i < BUCKET; ++i) {
            cout << i << ": ";
            for (int val : table[i]) {
                cout << val << " -> ";
            }
            cout << "NULL\n";
        }
    }

    bool search(int key){
        int i = key % BUCKET;
        for(auto k: table[i]){
            if(k == key){
                return true;
            }
        }
        return false;
    }

    ~MyHash() {
        delete[] table;
    }
};

int main() {
    MyHash mh(7);

    mh.insert(10);
    mh.insert(20);
    mh.insert(15);
    mh.insert(7);
    mh.insert(17);

    cout << "Hash Table:\n";
    mh.display();

    cout << "\nAfter removing 15:\n";
    mh.remove(15);
    mh.display();
    
    cout << "\nIs 15 present ? "<<(mh.search(15) ? "Yes" : "No")<<endl;
    cout << "\nIs 20 present ? "<<(mh.search(20) ? "Yes" : "No")<<endl;

    return 0;
}