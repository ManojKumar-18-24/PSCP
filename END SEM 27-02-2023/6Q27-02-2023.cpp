#include<iostream>
using namespace std;

int main()
{
    int a[9], min, v[9],c[6];
    for(int i=0;i<9;i++)
      {
         cin>>a[i];v[i]=0;
       }int k=0,w,r;
    for(int i=0;i<6;i++){c[i]=0;}
    for(int i=0;i<8;i++)
    {  min=a[i];w=0;
       for(int j=i+1;j<9;j++)
         {
            if(a[j]<min){min=a[j];r=j;w++;}
         }
        if(w>0)
         {
          int t=a[i];
           a[i]=a[r];
            a[r]=t;
         }
    }
    int p=0,x=0,y=0,z=0,pq=0;w=0;
      for(int i=0;i<9;i++)
          {
           if(a[i]==1) p++;
           if(a[i]==0) x++;
           if(a[i]==2) w++;
           if(a[i]==1 && a[i+1]==2) z++;
           if(a[i]==0 && a[i+1]==1) y++;
          }
        if(x>=4 && z==1)
         {
         pq++;cout<<"12:00:00";
         }
        if(p>=2 && pq==0)
         {
           p=0;
          for(int i=0;i<9;i++)
           {
            if(a[i]==1)
               {
                v[i]=1;c[k]=1;k++;p++;
               }
            if(p==2) break;
           }
          for(int i=8;i>=0;i--)
           {
            if(a[i]<6)
               {
                v[i]=1;c[k]=a[i];k++;break;
               }
           }
           for(int i=8;i>=0;i--)
           {
            if(v[i]!=1){c[k]=a[i];k++;v[i]=1;break;}
           }
           for(int i=8;i>=0;i--)
           {
            if(v[i]!=1 && a[i]<6){c[k]=a[i];k++;v[i]=1;break;}
           }
           for(int i=8;i>=0;i--)
           {
            if(v[i]!=1){c[k]=a[i];k++;v[i]=1;break;}
           }
           if(k==6) 
           {
            for(int i=0;i<6;i++) cout<<c[i];
            pq++;
           }
           else
           {
               for(int i=0;i<9;i++) v[i]=0;
           }                    
         }
        if(y==1 &&& pq==0)
        {
            c[0]=1;c[1]=0;
            p=0;y=0;k=2;
            for(int i=0;i<9;i++)
             {
                if(p==0 && a[i]==0){v[i]=1;p++;}
                if(y==0 && a[i]==1){v[i]=1;y++;}
             }
          for(int i=8;i>=0;i--)
           {
            if(a[i]<6 && v[i]!=1)
               {
                v[i]=1;c[k]=a[i];k++;break;
               }
           }
           for(int i=8;i>=0;i--)
           {
            if(v[i]!=1){c[k]=a[i];k++;v[i]=1;break;}
           }
           for(int i=8;i>=0;i--)
           {
            if(v[i]!=1 && a[i]<6){c[k]=a[i];k++;v[i]=1;break;}
           }
           for(int i=8;i>=0;i--)
           {
            if(v[i]!=1){c[k]=a[i];k++;v[i]=1;break;}
           }
        if(k==6) 
           {
            for(int i=0;i<6;i++) cout<<c[i];
            pq++;
           }
        else
           {
               for(int i=0;i<9;i++) v[i]=0;
           }                          
        }
     if(x>=1 && pq==0)
     {  
        c[0]=0;k=1;
        v[0]=1;
            for(int i=8;i>=0;i--)
           {
            if(v[i]!=1){c[k]=a[i];k++;v[i]=1;break;}
           }
          for(int i=8;i>=0;i--)
           {
            if(a[i]<6 && v[i]!=1)
               {
                v[i]=1;c[k]=a[i];k++;break;
               }
           } 
            for(int i=8;i>=0;i--)
           {
            if(v[i]!=1){c[k]=a[i];k++;v[i]=1;break;}
           }
          for(int i=8;i>=0;i--)
           {
            if(a[i]<6 && v[i]!=1)
               {
                v[i]=1;c[k]=a[i];k++;break;
               }
           }
            for(int i=8;i>=0;i--)
           {
            if(v[i]!=1){c[k]=a[i];k++;v[i]=1;break;}
           }
        if(k==6) 
           {
            for(int i=0;i<6;i++) cout<<c[i];
            pq++;
           }
        else
           {
               for(int i=0;i<9;i++) v[i]=0;
           }           
     }
 if(pq==0){cout<<"invalid";}  
    return 0;
}