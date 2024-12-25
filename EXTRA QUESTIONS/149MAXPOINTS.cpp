#include<iostream>
#include<vector>
using namespace std;

    int maxPoints(vector<vector<int>>& points)
    {
        int max,t=0,c=0;float a,b,d;
        for(int i=0;i<points.size()-1;i++)
        {    
            for(int j=i+1;j<points.size();j++)
            {     max=2;float m; a=(points[j][1]-points[i][1]);b=(points[j][0]-points[i][0]);
                if(b!=0) m=a/b;
                for(int k=j+1;k<points.size();k++)
                {     float p;a=(points[j][1]-points[k][1]);d=(points[j][0]-points[k][0]);
                    if(d!=0){ p=a/d ;}
                    if(m==p ||( b==0 && d==0) ) max++;
                }
             if(t==0){c=max;t++;}
             else if(max>c) c=max;
            }
        }
        if(t==0) {if(points.size()>=2) c=2;else c=1;}
        return c;
    }

int main()
{
 vector<vector<int>> v={{0,0},{4,5},{7,8},{8,9},{5,6},{3,4},{1,1}};
 cout<<maxPoints(v);
return 0;
}