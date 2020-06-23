#include<iostream>

using namespace std;

int main()
{

    int n,length;
    cin >> n;
    int i = 0;
    string word[n];

    while(n > i)
    {
        cin >> word[i];
        i++;
    }
    i = 0;

    while(n > i)
    {
        length = word[i].length();

        if(length > 10){
            cout << word[i][0] << (length-2) << word[i][length-1] << "\n"  ;
        }else{
            cout << word[i] << "\n";
        }
        i++;
    }


}
