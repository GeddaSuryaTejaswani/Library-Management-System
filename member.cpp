#include "Member.h"

Member::Member() {
    memberID = 0;
    name = "";
}

Member::Member(int id, string name) {
    this->memberID = id;
    this->name = name;
}