#ifndef PORTAREDEIP_H
#define PORTAREDEIP_H

#include "PortaRede.h"

class PortaRedeIP : public PortaRede
{
public:
    PortaRedeIP();
    string getIp();
    void setIp(string ip);
    string getMac();
    void setMac(string mac);
private:
    string ip;
    string mac;
};

#endif // PORTAREDEIP_H
