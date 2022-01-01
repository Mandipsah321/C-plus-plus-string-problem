#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
int n;
cout<<"Enter the number of letter in the given word." <<endl;
cin>>n;
char str[n+1];
cout<<"Enter the word."<<endl;
cin>> str;
int freq[26];
for(int i=0; i<26; i++){
    freq[i]=0;
}
for(int i=0; i<n; i++){
    freq[str[i]-'a']++;
}
int max=0;
char ans=0;
for(int i=0; i<26; i++){
    if(freq[i]> max){
        max=freq[i];
        ans=i+'a';
    }
}
cout<<"The maximum iterating word is :"<<ans<<endl;
cout<<"and the number of iteration is "<<max;
return 0;
}