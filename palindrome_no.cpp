#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int x = 121;

    string s = to_string(x);
    string rev = s;
    reverse(rev.begin(), rev.end());

    if (s == rev)
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}