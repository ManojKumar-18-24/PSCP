/*Given a string licensePlate and an array of strings words, 
find the shortest completing word in words.

A completing word is a word that contains all the letters in licensePlate.
 Ignore numbers and spaces in licensePlate, and treat letters as case insensitive. 
 If a letter appears more than once in licensePlate, then it must appear in the word the same number of times or more.

For example, if licensePlate = "aBc 12c", then it contains letters 'a', 'b' (ignoring case), 
and 'c' twice. Possible completing words are "abccdef", "caaacab", and "cbca".

Return the shortest completing word in words. It is guaranteed an answer exists.
 If there are multiple shortest completing words, return the first one that occurs in words.

 

Example 1:

Input: licensePlate = "1s3 PSt", words = ["step","steps","stripe","stepple"]
Output: "steps"
Explanation: licensePlate contains letters 's', 'p', 's' (ignoring case), and 't'.
"step" contains 't' and 'p', but only contains 1 's'.
"steps" contains 't', 'p', and both 's' characters.
"stripe" is missing an 's'.
"stepple" is missing an 's'.
Since "steps" is the only word containing all the letters, that is the answer.
Example 2:

Input: licensePlate = "1s3 456", words = ["looks","pest","stew","show"]
Output: "pest"
Explanation: licensePlate only contains the letter 's'. All the words contain 's',
but among these "pest", "stew", and "show" are shortest. The answer is "pest" because it is the
word that appears earliest of the 3.*/

#include<iostream>
#include<string>
using namespace std;

void  recursion(string s,string a[],int n,string b[])
{   static int i=0,p=0,m=0,l=0;
if(i==s.length()){cout<<b[l];}
else if(n==l){;}
else if(m==a[l].length()){i=0;p=0;l++;m=0;recursion(s,a,n,b);}
else if(p==1){  //cout<<s[i]<<" "<<a[l][m];
    if(s[i]==a[l][m]){
        i++;
        a[l].erase(m,1);p=0;m=0;recursion(s,a,n,b);
        }
    else{
        m++;recursion(s,a,n,b);
    }
}
else if((s[i]>64 && s[i]<91) || (s[i]>96 && s[i]<123 ))
{
    if(s[i]<91){s[i]+=32;}
    p++;recursion(s,a,n,b);

}
else{
    i++;
    recursion(s,a,n,b);
}

}
int main(){
//int n;cout<<"size=";cin>>n;
string licenseplate="1s3 manojkumar  str";string a[4]={"looks","pest","manojkumarsstr","stew"};
//getline(cin,licenseplate);
//for(int i=0;i<n;i++){cin>>a[i];
string b[4]={"looks","pest","stew","manojkumarsstr"};
recursion(licenseplate,a,4,b);
return 0;
}