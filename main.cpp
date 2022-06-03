#include "libholder.h"

#include "System/System.h"


using namespace std;

int main() {
    auto* system = new System();
    system->Start();
    return 0;
}
