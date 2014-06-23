#include "hub.h"
#include "interfacehub.h"

Hub::Hub()
{
    i1 = new InterfaceHub();
    i2 = new InterfaceHub();
    i3 = new InterfaceHub();
    i4 = new InterfaceHub();
}
