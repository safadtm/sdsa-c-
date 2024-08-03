// UNARY OPERATOR OVERLOADING ++,-- 
#include<iostream>
using namespace std;

class Weight{
    private:
        int kg;
    public:
        Weight(){
            kg=0;
        } 
        Weight(int x){
            kg=x;
        } 

        void printWeight(){
            cout<<"Weight in KG : "<<kg<<endl;
        }  

        // operator overloading
        Weight operator ++ (){
            Weight temp;
            temp.kg = ++kg;
            return temp;
        }
};

int main(){
    Weight obj1,obj2;
     
   obj1(5);

     obj1.printWeight();
     obj2.printWeight();

    obj2=++obj1;
    obj1.printWeight();
    obj2.printWeight();
    return 0;
}