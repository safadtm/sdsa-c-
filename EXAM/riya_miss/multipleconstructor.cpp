// MULTIPLE CONSTRUCTOR
#include <iostream>
using namespace std;
class Integer{
    int m,n;
    public:
        Integer(){
            m=0;
            n=0;
        }
        Integer(int a,int b){
            m=a;
            n=b;
        }
        Integer(Integer &I){
            m=I.m;
            n=I.n;
        }

        void display(){
            cout<<"m="<<m<<",n="<<n<<endl;
        }
};
int main(){
    Integer I1;
    Integer I2(20,40);
    Integer I3(I2);

    I1.display();
    I2.display();
    I3.display();
    return 0;
}