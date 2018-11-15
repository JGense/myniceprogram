#include <iostream>
#include <assert.h>
#include "new/Identitee.h"
#include <stdio.h>
#include <string.h>

int main() {
    auto * moi = new Identitee("Jean","Paul");
    assert(moi->toString() =="Identitee : Jean Paul" && "Test 1 failed");

    auto * toi = new Identitee("Paul","Jean",12);
    assert(toi->toString() == "Identitee : Paul Jean 12" && "Test 2 failed");

    moi->setPhoneNumber("0633793232");
    assert(moi->toString(true) == "Identitee : Jean Paul (+33)0633793232" && "Test 3 failed");

    toi->setPhoneNumber("0633793233");
    assert(toi->toString() == "Identitee : Paul Jean 12" && "Test 4 failed");
    assert(toi->toString(true) == "Identitee : Paul Jean 12 (+33)0633793233" && "Test 5 failed");

    delete moi;
    delete toi;
}
