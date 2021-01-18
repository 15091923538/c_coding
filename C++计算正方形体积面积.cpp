#include <iostream>
using namespace std;
class box    //声明类Box及其数据和方法
{
  private:
    float   a,volume,area;     
  public:
  	box(float aa){a=aa; };
  	box(){  };
    void seta(float r);  //构造函数   
    float getvolume() ; //box立方体体积 
    float getarea() ;  //立方体表面积 
    void disp();
};
void box::seta(float r)// 计算立方体体积 
{a=r;}
float box::getvolume() 
{
    return a*a*a;// 计算立方体表面积 
}    
float box::getarea() 
{
    return a*a*6;
}
void box::disp()
{cout<<"a=5"<<endl;
cout<<"volume="<<getvolume() <<","<<"area="<< getarea() <<endl;
}
int main ()
{ box nn;
  nn.seta(5);
  nn.disp();
}
 

