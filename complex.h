#include <iostream>
using namespace std;

class complex{
       private:
        float real;
        float com;
        public:
        void show();
        complex(int = 0 ,int = 0 );
        complex operator + (complex c1);
        complex operator - (complex c1);
        complex operator * (complex c1);
        complex operator / (complex c1);
};
