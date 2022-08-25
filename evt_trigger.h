
#ifndef	__EVT_TRIGGER_H__
#define	__EVT_TRIGGER_H__
#include <stdint.h>

#define TRIG_ASSERT(exper)	do{if(exper == 1){while(1);}}while(0)

typedef struct{
	uint16_t	value;
}sEvtTrig;

typedef enum{
	E_TRIG_FALSE,
	E_TRIG_TRUE
}eTrigBool;
	
void trigger_init(sEvtTrig*trig,uint16_t init_value);

eTrigBool trigger_poll(sEvtTrig*trig,uint16_t value);

#endif

