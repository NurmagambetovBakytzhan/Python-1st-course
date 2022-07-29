#include <iostream>
using namespace std;

struct deque{
private:
    int start, finish;
    int arr[100000];


public:
    deque(){
        start = 50000;
        finish = 50000;
    }

    void push_back(int x){
        arr[finish++] = x;
    }
    void push_front(int x){
        arr[--start] = x;
    }
    
    void pop_back(){
        if(!empty()){
            finish--;
        }
        else{
            cout<<"Error\n";
        }
    }
    void pop_front(){
        if(!empty()){
            start++;
        }
        else{
            cout<<"Error\n";
        }
    }

    int back(){
        if(!empty()){
            return arr[finish-1];
        }
        else{
            return -999999;
        }
    }
    int front(){
        if(!empty()){
            return arr[start];
        }
        else{
            return -9999999;
        }
    }

    bool empty(){
        return finish - start <= 0;
    }

    int size(){
        return finish - start;
    }
    void clear(){
        start = 50000;
        finish = 50000;
    } 

    void print(){
        cout<<"Array: ";
        for(int i = start  ; i < finish; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    deque dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);

    dq.print();

    cout << "Deque size: " << dq.size() << endl;    // 6
    cout << "Deque front: " << dq.front() << endl;  // 6
    cout << "Deque back: " << dq.back() << endl;

    
}