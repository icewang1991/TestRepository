#include "evt_trigger.h"

void trigger_init(sEvtTrig*trig,uint16_t init_value)
{
	TRIG_ASSERT((trig==NULL));
	trig->value	=	init_value;
}

eTrigBool trigger_poll(sEvtTrig*trig,uint16_t value)
{
	eTrigBool ret = E_TRIG_FALSE;
	TRIG_ASSERT((trig==NULL));
	if(trig->value!=value){
		trig->value = value;
		ret = E_TRIG_TRUE;
	}
	return ret;
}

