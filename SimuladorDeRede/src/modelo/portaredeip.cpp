#include "portaredeip.h"

PortaRedeIP::PortaRedeIP()
{
}

string PortaRedeIP::getIp(){
    return this->ip;
}

void PortaRedeIP::setIp(string ip){
    this->ip = ip;
}

string PortaRedeIP::getMac(){
    return this->mac;
}

void PortaRedeIP::setMac(string mac){
    this->mac = mac;
}
