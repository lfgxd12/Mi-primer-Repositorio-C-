#include <iostream>

class Extra{
    public:
    virtual void saludate() = 0; // Pure virtual function
};

class ExtraImplementation : public Extra{
    public:
    void saludate() override {
        std::cout << "Hello from ExtraImplementation!" << std::endl;
    }
};