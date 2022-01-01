#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of letters in the given word:";
cin>>n;
char array[n];
cout<<"Enter the word to be checked:";
cin >> array;
bool check=true;
for(int i=0; i<n; i++){
    if(array[i]==array[n-1-i]){
        check = true;

    }
    else{
        check= false;
        break;
    }
}
if(check==true){
    cout<<"Entered word is palindrome.";
}
else{
    cout<<"Entered word isn't a palindrome.";
}
return 0;
}