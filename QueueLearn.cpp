#include <iostream> 
#define MAX 5
class Queue{
    private: 
    int front, rear , items[MAX];
    public:
    Queue(){
        front = -1;
        rear = -1;
    }
    bool isFull(){
        if (front == 0 && rear == MAX -1)
            return true;
        else 
            return false;
    }
    bool isEmpty(){
        if (front == -1)
            return true;
        else 
            return false;
    }
    void enQueue(int element){
        if(isFull()){
            std:: cout << "Queue is full";
        }
        else {
            if (front == -1) front = 0; 
            rear ++;
            items[rear] = element;
            std:: cout<< std::endl;
            std:: cout<<"Insert element " <<element <<" in Queue";
        }
    }
    int deQueue(){
        int element;
        if(isEmpty()) {
            std::cout<<"Queue is Empty";
            return (-1);
        }
        else {
            element = items[front];
            if (front >= rear){
                front = -1;
                rear = -1;
            }
            else {
            front++;
            }
        std::cout <<"Delete ->" <<element<<std::endl;
        return element;
        }
    }
    void Display(){
        if (isEmpty()){
            std::cout<<std::endl;
            std:: cout<< "Empty Queue"<<std::endl;
        }
        else {
            std::cout<<std::endl;
            std::cout<<"Front Index: "<<front<<std::endl;
            for (int i = front; i<=rear ; i++){
                std::cout<<items[i]<<std::endl;
            }
            std::cout <<"Rear Index: "<<rear<<std::endl;
        }
    }
};
int main(){
    Queue q;
    q.enQueue(5);
    q.enQueue(10);
    q.enQueue(20);
    q.Display();
    return 0;
}