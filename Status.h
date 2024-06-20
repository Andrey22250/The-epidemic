#pragma once
#include <iostream>

using namespace std;

enum Stat { healthy, infected, sick, dead, resisted };

string StatusToString(Stat status);

