#include<iostream>
using namespace std;

class Time
{
  private:
  int hours;
  int minutes;
  int seconds;
  public:
  void settime(int h,int m,int s)
  {
     hours=h; minutes=m;seconds=s;
  }
  void print()
  {
    cout<<hours<<" "<<minutes<<" "<<seconds;
  }
  bool compare(Time t2)
  {
    if(hours==t2.hours && minutes==t2.minutes && seconds==t2.seconds )
    {
        return true;
    }
    else return false;
  }
  Time addtime(Time &t2)
  {  Time t3;
      t3.hours=hours+t2.hours;
      t3.seconds=seconds+t2.seconds;
      t3.minutes=minutes+t2.minutes;      
    if(seconds+t2.seconds>=60){t3.seconds=seconds+t2.seconds-60;t3.minutes++;}
    if(minutes+t2.minutes>=60){t3.minutes=minutes+t2.minutes-60;t3.hours++;}
    if(hours+t2.hours>=24){t3.hours-=24;}  
    return t3;    
  }
};


int main(){
    int b;
   Time t,t2;
  t.settime(2,46,45);
  t2.settime(23,47,45);
  t.print();
 cout<<"\n"<<t2.compare(t)<<endl;
 Time t3=t.addtime(t2);
  t3.print();
return 0;
}