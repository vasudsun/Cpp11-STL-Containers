#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello World!";



    for( std::string::iterator it = str.begin(); it != str.end(); it++ )
    {
        string expectsString( 2, *it );
        cout << expectsString;


    }

    cout << std::endl;

    return 0;
}
