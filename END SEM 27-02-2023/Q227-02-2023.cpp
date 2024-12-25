#include<iostream>
using namespace std;

int function2(int sum,int i)
{  static int j=1,n=0;
  if(sum==j)
  {  
    if(n==i){ j=1;n=0;return true;}
    else{ j=1;n=0; return  false;}
  }
  if(sum%j==0)
  {
    n+=j;j++;function2(sum,i);
  }
  else{j++;function2(sum,i);}

}

void function1(int q)
{
  static int i=12285
  ,p=0,j=1,sum=0;
  if(p==q){;}
  else if(i==j)
  {
    if(function2(sum,i))
      {
        p++;cout<<sum<<" "<<i<<" ";
      }
      sum=0;j=1;i++;function1(q);
  }
  else if(i%j==0){sum+=j;j++;function1(q);}
  else{j++;function1(q);}
}

int main()
{
  int q;cin>>q;
  function1(q);
return 0;
}

/*#include <iostream>
using namespace std;

bool function2(int sum, int i, int j = 1, int n = 0)
{
    if (sum == j) {
        if (n == i) {
            return true;
        } else {
            return false;
        }
    }
    if (sum % j == 0) {
        n += j;
    }
    j++;
    return function2(sum, i, j, n);
}

void function1(int q, int i = 2620, int p = 0, int j = 1, int sum = 0)
{
    if (p == q) {
        return;
    }
    if (i == j) {
        if (function2(sum, i)) {
            p++;
            cout << sum << " " << i << " ";
        }
        sum = 0;
        j = 1;
        i++;
        function1(q, i, p, j, sum);
    } else {
        if (i % j == 0) {
            sum += j;
        }
        j++;
        function1(q, i, p, j, sum);
    }
}

int main()
{
    int q;
    cin >> q;
    function1(q);
    return 0;
}*/
