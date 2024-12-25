 #include<bits/stdc++.h>
 using namespace std;
 
  
    
    
//     vector<int> GetIndex(string &s,string &a)
//     {
//         int length=s.length();
//         int l=a.length();
//         vector<int> ans;
//         int start=0;int ptr=0,i=0;
//         while(i<length)
//         {
//             if(s[i]==a[ptr])ptr++;
//             else
//             {
//               start++;ptr=0;while(start<length && s[start]!=a[ptr])start++;if(start<length)ptr++;i=start;
//             }
//             if(ptr==l){ans.push_back(start);cout<<start<<" ";start++;ptr=0;}
//             i++;
//         }
//         cout<<endl;
//         return ans;
//     }
//     vector<int> beautifulIndices(string s, string a, string b, int k) 
//     {
//         vector<int> v1=GetIndex(s,a);
//         vector<int> v2=GetIndex(s,b);
//         int size1=v1.size();int size2=v2.size();
        
//         for(int i=0;i<size1;i++)
//         {
//             int j;cout<<v1[i]<<" ";
//             for(j=0;j<size2;j++)
//             {
//                 if(abs(v2[j]-v1[i])<=k)break;
//             }
//             if(j==size2)v1[i]=-1;
//         }
//         vector<int> ans;
//         for(int i=0;i<size1;i++)
//         {
//             if(v1[i]!=-1)ans.push_back(v1[i]);
//         }
//        return ans; 
//     }

//  int main()
//  {
//     string s="bsbsvnmvnm";
//     string a="vnm";
//     string b="bs";
//     vector<int> v=beautifulIndices(s,a,b,4);
//  return 0;
//  } 


class Solution {
public:
  
    vector<string> wordBreak(string p, vector<string>& wordDict) 
    {
        unordered_set<string> s;
        int size=wordDict.size();
        for(int i=0;i<size;i++)
        {
            s.insert(wordDict[i]);
        }
        unordered_map<string,int> m;
        m[p.substr(0,1)]=1;size=p.length();
        for(int i=1;i<size;i++)
        {
           unordered_map<string, int> newMap;
           for(auto &it:m)
           {
              string h=it.first,d;int length=h.length();
              for(int i=length-1;i>=0;i--)
              {
                if(h[i]==' ')break;  d+=h[i];
              }
               reverse(d.begin(),d.end());
               if(s.find(d)!=s.end())
               {
                 newMap[h+" "+p[i]]=i+1;
               }
           }
           for(auto it=m.begin();it!=m.end();++it)
           {
              string d=it->first;int t=it->second;newMap.insert({d+=p[i],t});//cout<<it->first<<" "<<it->second<<endl;;
           }
           m.swap(newMap);
        }   vector<string> ans;
           for(auto &it:m)
           {
              string h=it.first,d;int length=h.length();
              for(int i=length-1;i>=0;i--)
              {
                if(h[i]==' ')break;  d+=h[i];
              }
               reverse(d.begin(),d.end());
               if(s.find(d)!=s.end())
               {
                 ans.push_back(h);
               }
           }
           return ans;       
    }
};