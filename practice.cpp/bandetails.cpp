#include <iostream>
using namespace std;
class ATM
{
private:
    double balance;

public:
    ATM()
    {
        balance = 0.0;
    }
    ATM(int balance)
    {
        cout<<this<<endl;
        this->balance=balance;
    }
    double getBalance()
    {
        return balance;
    }
    void setBalance(int b)
    {
        balance = b;
    }
    void displayBalance()
    {
        cout << "Balance is: " << balance << endl;
    }
};

int main()
{
    ATM sanket(100.00);
    ATM *pratham=new ATM(100.00);

    cout<<"address is : "<<&sanket<<endl;
    cout<<"address is: "<<pratham<<endl;
    sanket.displayBalance();
    pratham->displayBalance();
}