#include <nan.h>
#include "testworker.h"

void TestWorker::Execute() {
    for (int i = 0; i < 1000; i++)
    {
        myNumber++;
    }
}

void TestWorker::HandleOKCallback()
{
    Nan::HandleScope scope;

    auto numberJS = Nan::New(myNumber);

    v8::Local<v8::Value> argv[] = { Nan::Undefined(), numberJS };
    myCallback->Call(2, argv);
}