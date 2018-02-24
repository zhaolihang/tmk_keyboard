#ifndef SUART
#define SUART

#ifdef __cplusplus
extern "C" {
#endif


void xmit(uint8_t);
uint8_t rcvr(void);
uint8_t recv(void);

#ifdef __cplusplus
}
#endif


#endif	/* SUART */
