#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;vector<int> v;
    while(1)
    {
        if(n!=-1){v.push_back(n);}
        else break;
        cin>>n;
    } 
    vector<int> count;vector<int> index;int c=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)
        {   index.push_back(i);
            count.push_back(c);c=0;
        }
        else
        {
            c++;
        }
    }
    if(v[v.size()-1]==1)
    {   if(index.size()==0)
        {index.push_back(-1);}
        count.push_back(c);
    }
    for(int i=0;i<count.size();i++)cout<<count[i]<<" ";cout<<endl;
    for(int i=0;i<index.size();i++)cout<<index[i]<<" "; cout<<endl;
    if(count.size()==0) cout<<-1;
    else if(count.size()==1)cout<<index[0];
    else
    {
        int sum=count[0]+count[1];int h=index[0];
        for(int i=1;i<count.size()-1;i++)
        {
            if(count[i]+count[i+1]>sum){sum=count[i]+count[i+1];h=index[i];}
        }
        cout<<h;
    }
    
    
    return 0;
}
