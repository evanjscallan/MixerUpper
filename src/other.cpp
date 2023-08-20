#include <iostream>
#include <memory>
using namespace std;
class MyClass
{
public:
    MyClass(int value) : data(value)
    {
        cout << "Constructor called. Value: " << data << endl;
    }

    ~MyClass()
    {
        cout << "Destructor called. Value: " << data << endl;
    }

    void display()
    {
        cout << "Display Value: " << data << endl;
    }

private:
    int data;
};

int main()
{
    // Using unique_ptr
    unique_ptr<MyClass> uniquePtr(new MyClass(42));
    uniquePtr->display();

    // Using shared_ptr
    shared_ptr<MyClass> sharedPtr1 = make_shared<MyClass>(10);
    shared_ptr<MyClass> sharedPtr2 = sharedPtr1; // shared ownership
    // showing destructor 10
    sharedPtr1->display();
    // showing destructor 42
    sharedPtr2->display();

    // sharedPtr1 and sharedPtr2 will be automatically deallocated when out of scope

    return 0;
}
