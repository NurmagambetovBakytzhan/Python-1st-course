#include <iostream>

using namespace std;

struct myStack
{
    int pos;
    int arr[100000];

    myStack(){
        pos = 0;
    }

    void push(int x){
        arr[pos++] = x;
    }

    void pop(){
        if(!empty()){
            pos--;
        }
        else{
            cout<<"Error \n";
        }
    }

    int top(){
        if(!empty()){
            return arr[pos - 1];
        }
        else{
            return -999999;
        }
    }

    bool empty(){
        return pos == 0;
    }

    int size(){
        return pos;
    }

};


int main(){
    myStack st;

    st.push(1); 						// [1]
	st.push(2); 						// [2, 1]
	st.push(3); 						// [3, 2, 1]
	cout <<  "Stack size: "  << st.size() << endl; 		// 3
	cout <<  "Stack last element: "  << st.top() << endl;	// 3
	st.pop(); 						// [2, 1]
	cout <<  "Stack last element: "  << st.top() << endl; 	// 2
	st.pop(); 						// [1]
	cout <<  "Stack last element: "  << st.top() << endl; 	// 1
	st.pop(); 						// []
	cout <<  "Stack is empty? ";
	cout << (st.empty() ?  "YES\n"  :  "NO\n"); 		// YES
	cout <<  "Stack last element: "  << st.top() << endl; 	// -1
	st.pop(); 						// ERROR
	cout <<  "Stack last element: "  << st.top() << endl; 	// -1   
    
}