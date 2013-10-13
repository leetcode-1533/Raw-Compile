#include "complex.h"
#include <iostream>

using namespace std;

int main()
{
        complex tryer(-3,-2);
        complex tyer(2,2);

        void m(complex tryer, complex tyer);
        void s(complex tryer, complex tyer);
        void d(complex tryer, complex tyer);

        while (1)
        {
                cout<<"E"<<endl<<"1multiple"<<endl<<"2subtract"<<endl<<"3division"<<endl;
                int l;
                cin>>l;
                switch (l)
                {
                        case 1 : m(tryer,tyer);break;
                        case 2 : s(tryer,tyer);break;
                        case 3 : d(tryer,tyer);break;
                }
        }
        return 0;
}

void m(complex tryer, complex tyer)
{
        complex t;
        t=tryer*tyer;
        t.show();
}


void s(complex tryer, complex tyer)
{
        complex t;
        t = tryer - tyer;
        t.show();
}

void d(complex tryer, complex tyer)
{
        cout<< " This is a division Test, and it starts with the normal status"<<endl;
        complex t;
        t = tryer / tyer;
        t.show();
        cout<< " Now let's try to divide a zero"<<endl;
        complex a(0,0);
        t= tryer / a;
}

