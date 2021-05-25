
#include <bits/stdc++.h>

using namespace std;

// Returns resul when we pass title.
int titleToNumber(string s)
{
    // This process is similar to
    // binary-to-decimal conversion
    int result = 0;
    for (const auto& c : s)
    {
        result *= 26;
        result += c  - 'A' + 1;
    }

    return result;
}

// Driver function
int main()
{
    cout << titleToNumber("CDA") << endl;
    return 0;
}
