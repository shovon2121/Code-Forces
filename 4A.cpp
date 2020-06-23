#include<iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    ((num % 2 == 0) && (num > 2 ))? cout << "YES": cout << "NO";
    return 0;
}
