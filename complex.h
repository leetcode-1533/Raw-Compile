
class complex{
        private:
        int real;
        int com;
        public:
        complex operator + (complex c1);
        complex(){
                real = 0;
                com = 0;
        }
        void giver(int re,int co);
        void show();
}

