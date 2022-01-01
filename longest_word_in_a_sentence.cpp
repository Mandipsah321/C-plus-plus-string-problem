#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of letters in the sentence."<<endl;
    cin >> n;
    cin.ignore();
    char array[n + 1];
    cout << "Enter the sentence." << endl;
    cin.getline(array, n);
    cin.ignore();
    int i = 0;
    int currLen = 0, maxLen = 0;
    int st = 0, mxst=0;
    while (1)
    {
        if (array[i] == ' ' || array[i] =='\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                mxst = st;
            }
            currLen = 0;
            st=i+1;
        }
        else
        {
            currLen++;
            
        }
        if (array[i] =='\0')
            break;
            i++;
    }
    cout << "The number of letters in the longest word of the given sentence is: " << maxLen <<endl;
    cout<<"The longest word is: ";
    for(int i=0; i<maxLen; i++){
        cout<<array[i+mxst];
    }
    return 0;
}