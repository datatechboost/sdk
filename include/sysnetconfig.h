#ifndef _sysnetconfig_h_
#define _sysnetconfig_h_

#ifdef  __cplusplus
extern "C" {
#endif

typedef void (*system_getip_fcb)(void* param, const char* mac, const char* name, int dhcp, const char* ip, const char* netmask, const char* gateway);

int system_getip(system_getip_fcb fcb, void* param);
int system_setip(const char* name, int enableDHCP, const char* ip, const char* netmask, const char* gateway);

// dns: dns1;dns2
// dns: 222.222.202.100;8.8.8.8
int system_getdns(const char* name, char* dns, int dnsLen);
int system_setdns(const char* name, const char* dns);

int system_getgateway(char* gateway, int len);
int system_setgateway(const char* gateway);

#ifdef  __cplusplus
}
#endif

#endif /* !_sysnetconfig_h_ */
