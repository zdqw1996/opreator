#include <iostream>
#include <cstring>
using namespace std;

class Mystring
{
    
    friend Mystring operator+(Mystring &str1,Mystring &str2);
    friend void operator<<(istream &is, Mystring &str1);
    char str[128];
    public:
        Mystring(char *value)
        {
            for(int i = 0; value[i]!='\0';i++)
            {
                str[i] = value[i]; 
            }
        }
        bool operator==(const Mystring &str2)
        {
            for(int i=0; str[i]!='\0'|| str2.str[i]!='\0'; i++ )
            {
                if(!(str[i] != str2.str[i]));
                else
                {
                    return !(str[i] != str2.str[i]);
                    break;
                }
            }
        }

        bool operator!=(const Mystring &str2)
        {
             for(int i=0; str[i]!='\0'|| str2.str[i]!='\0'; i++)
            {
                if(str[i] != str2.str[i]);
                else
                {
                    return str[i] != str2.str[i];
                    break;
                }
            }
        }
        bool operator<(const Mystring &str2)
        {        
            for(int i=0; str[i]!='\0'|| str2.str[i]!='\0'; i++ )
            {
                if(str[i] == str2.str[i]);
                else if(str[i] < str2.str[i])
                {
                    return str[i] < str2.str[i];
                    break;
                }
                else
                {
                    return !(str[i] < str2.str[i]);
                    break;
                    
                }
            }
        }
        bool operator>(const Mystring &str2)
        {
            for(int i=0; str[i]!='\0'|| str2.str[i]!='\0'; i++ )
            {
                if(str[i] == str2.str[i]);
                else if(str[i] > str2.str[i])
                {
                    return (str[i] > str2.str[i]);
                    break;
                }
                else
                {
                    return !(str[i] > str2.str[i]);
                    break;
                }
            }
        }
        char operator[](int i)
        {
            return str[i];
        }


};
int main()
{

}