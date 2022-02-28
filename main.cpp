#include <iostream>
class Calculator{
  public:
  
    int ADD(int x,int y)
    {
      return x+y;
    }
    double ADD(double x, double y)
    {
     return x + y;
    }

    float ADD(float x, float y)
    {
     return x + y;
    }
};

int main(void) {
  Calculator obj;
  cout<<obj.ADD(2,15)<<'\n';
  cout<<obj.ADD(2.5,15e5)<<'\n';
  cout<<obj.ADD(2.0,15.5)<<'\n';
}