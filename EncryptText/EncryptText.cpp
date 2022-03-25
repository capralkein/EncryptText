#include <algorithm>
#include <iostream>
#include <map>

void EncryptText(std::string& Str);

int main()
{
    // Tests
    std::string InitialStr = "din";
    EncryptText(InitialStr);

    InitialStr = "recede";
    EncryptText(InitialStr);

    InitialStr = "recede";
    EncryptText(InitialStr);

    InitialStr = "Success";
    EncryptText(InitialStr);

    InitialStr = "(( @";
    EncryptText(InitialStr);   
}

void EncryptText(std::string& Str)
{
    using namespace std;

    string EncrStr;
    int Len = Str.length();

    transform(Str.begin(), Str.end(), Str.begin(), ::tolower);

    map<char, char> MyMap;

    for (int i = 0; i < Len; i++)
    {
        char Chr = Str[i];
        MyMap[Chr] = MyMap[Chr] ? ')' : '(';
    }


    for (int i = 0; i < Len; i++)
    {
        EncrStr += MyMap[Str[i]];
    }

    cout << Str << "\t\t=>\t " << EncrStr << endl;
}
