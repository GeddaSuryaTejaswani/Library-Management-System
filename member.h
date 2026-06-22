#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;

class Member {
public:
    int memberID;
    string name;

    Member();
    Member(int id, string name);
};

#endif