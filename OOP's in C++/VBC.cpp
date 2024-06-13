#include <iostream>
using namespace std;

class Premium
{
protected:
    char ads;
    int cost;
    int quality;

public:
    Premium(char A, int C, int Q) : ads(A), cost(C), quality(Q) {}

    virtual void show()
    {
        cout << "The Ads Category of Premium User : " << ads << endl;
        cout << "The Cost of Premium User(in Rupee) : " << cost << endl;
        cout << "The Quality and Clarity of Screen in Premium User (In px) : " << quality << endl;
    }
};

class Prime : virtual public Premium
{
public:
    Prime(char A, int C, int Q) : Premium(A, C, Q) {}

    void show() override
    {
        cout << "The Ads Category of Prime User : " << ads << endl;
        cout << "The Cost of Prime User(in Rupee) : " << cost << endl;
        cout << "The Quality and Clarity of Screen in Prime User (In px) : " << quality << endl;
    }
};

class VIP : virtual public Premium
{
public:
    VIP(char A, int C, int Q) : Premium(A, C, Q) {}

    void show() override
    {
        cout << "The Ads Category of VIP User : " << ads << endl;
        cout << "The Cost of VIP User(in Rupee) : " << cost << endl;
        cout << "The Quality and Clarity of Screen in VIP User (In px) : " << quality << endl;
    }
};

class Free : public VIP, public Prime
{
public:
    Free(char A, int C, int Q) : Premium(A, C, Q), VIP(A, C, Q), Prime(A, C, Q) {}

    void show() override
    {
        cout << "The Ads Category of Free User : " << ads << endl;
        cout << "The Cost of Free User(in Rupee) : " << cost << endl;
        cout << "The Quality and Clarity of Screen in Free User (In px) : " << quality << endl;
    }
};

int main()
{
    Free P1('A', 1599, 2048);
    Free P2('B', 799, 1048);
    Free V1('C', 499, 720);
    Free F1('D', 0, 480);

    P1.show();
    P2.show();
    V1.show();
    F1.show();

    return 0;
}
