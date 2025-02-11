/**
 * typedef      reserved keyword used to create an additional name
 *              (alias) for another datatype.
 *              New identifier for an existing type helps with readability
 *              and reduces typos. Should be used when there is a clear
 *              benefit. typedef have been replaced with 'using' which works 
 *              better with templates.
 */
#include <iostream>
#include <vector>

namespace Typedef {
    typedef std::string String;
    typedef int Number;
    typedef char Letter;
}

namespace Using {
    using String = std::string;
    using Number = int;
    using Letter = char;
}


int main() {
    using std::cout;
    using std::make_pair;

    Typedef::Number t_age = 43;
    Typedef::String t_firstName = "Argenis";
    Typedef::Letter t_middleInitial = 'R';
    Typedef::String t_lastName = "Dominguez";
    Typedef::String t_fullName = t_firstName + " " + t_middleInitial + ". " + t_lastName;

    Using::Number u_age = 43;
    Using::String u_firstName = "Argenis";
    Using::Letter u_middleInitial = 'R';
    Using::String u_lastName = "Dominguez";
    Using::String u_fullName = u_firstName + " " + u_middleInitial + ". " + u_lastName;


    cout << "Typedef > Name...: " << t_fullName << '\n';
    cout << "Typedef > Age....: " << t_age << '\n';

    cout << "Using > Name...: " << u_fullName << '\n';
    cout << "Using > Age....: " << u_age << '\n';

    return 0;
}
