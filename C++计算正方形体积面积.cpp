#include <iostream>
using namespace std;
class box    //������Box�������ݺͷ���
{
  private:
    float   a,volume,area;     
  public:
  	box(float aa){a=aa; };
  	box(){  };
    void seta(float r);  //���캯��   
    float getvolume() ; //box��������� 
    float getarea() ;  //���������� 
    void disp();
};
void box::seta(float r)// ������������� 
{a=r;}
float box::getvolume() 
{
    return a*a*a;// �������������� 
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
 

