# include <string>
# include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string*    strptr = &str;
    std::string&    strref = str;

    std::cout << "string ptr = " << strptr;
    std::cout << "string ref = " << strref;
}