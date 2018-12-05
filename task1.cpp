#include<iostream>
#include<cmath>
using namespace std;
class TwoD
{
protected:
  double x;
  double y;
public:
  TwoD(double i,double j)
  {
    x=i;
    y=j;
  }
  void setX(double newX)
  {
    x=newX;
  }
  void setY(double newY)
  {
    y=newY;
  }
  double getX() const
  {
    return x;
  }
  double getY() const
  {
    return y;
  }
  double get_distance(const TwoD& point) const

  {
    return sqrt(pow(x-point.x,2)+pow(y-point.y,2));
  }
};
class ThreeD :public TwoD
{
private:
  double z;
public:
  ThreeD(double i,double j,double k):TwoD(i,j),z(k)
  {
  }
  void setZ(double newZ)
  {
    z=newZ;
  }
  double getZ() const
  {
    return z;
  }
  double get_distance(const ThreeD& point) const
  {
    return sqrt(pow(x-point.x,2)+pow(y-point.y,2)+pow(z-point.z,2));
  }
};
int main()
{
  TwoD p1(2,4);
  TwoD p2(4,8);
  ThreeD q1(1,2,3);
  ThreeD q2(4,5,6);
  //cout<<p1.getZ()<<endl;
  cout<<p1.get_distance(p2)<<endl;
  cout<<q1.get_distance(q2)<<endl;
  return 0;
}
