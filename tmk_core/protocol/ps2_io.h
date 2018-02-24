#ifndef PS2_IO_H
#define PS2_IO_H

#ifdef __cplusplus
extern "C" {
#endif
void clock_init(void);
void clock_lo(void);
void clock_hi(void);
bool clock_in(void);

void data_init(void);
void data_lo(void);
void data_hi(void);
bool data_in(void);

#ifdef __cplusplus
}
#endif

#endif
