#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int main()
{
    cout << getBit(5, 0) << endl;
    return 0;
}

/*
#include<iostream>
using namespace std;

int setBit(int n,int pos)
{
return(n|(1<<pos));
}
int main()
{
    cout<<setBit(5,1)<<endl;
return 0;
}


#include<iostream>
using namespace std;

int clearBit(int n,int pos)
{
    int mask=~(1<<pos);
    return(n & mask);
}
int main()
{
cout<<clearBit(5,2)<<endl;
return 0;
}


#include<iostream>
using namespace std;
int updateBit(int n,int pos,int value)
{
int mask=~(1<<pos);
n=n&mask;
return(n|(value<<pos));
}
int main()
{
cout<<updateBit(5,1,1)<<endl;
return 0;
}

*/