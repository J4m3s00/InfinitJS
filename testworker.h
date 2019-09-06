#include <nan.h>

class TestWorker : public Nan::AsyncWorker {
public:
TestWorker(int number, Nan::Callback* callback)
    : Nan::AsyncWorker(callback), myNumber(number), myCallback(callback) {}
    ~TestWorker() { delete callback; }

    void Execute();
    void HandleOKCallback();
private:
    int myNumber;
    Nan::Callback* myCallback;
};