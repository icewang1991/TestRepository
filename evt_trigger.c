#include "evt_trigger.h"
#include <string.h>
void trigger_init(sEvtTrig*trig,uint16_t init_value)
{
	TRIG_ASSERT((trig==NULL));
	trig->value	=	init_value;
}

eTrigBool trigger_diff_poll(sEvtTrig*trig,uint16_t cur_value)
{
	eTrigBool ret = E_TRIG_FALSE;
	TRIG_ASSERT((trig==NULL));
	if(trig->value!=cur_value){
		trig->value = cur_value;
		ret = E_TRIG_TRUE;
	}
	return ret;
}

eTrigBool trigger_tatget_poll(sEvtTrig*trig,uint16_t target_value,uint16_t cur_value)
{
	eTrigBool ret = E_TRIG_FALSE;
	TRIG_ASSERT((trig==NULL));
	if(trig->value!=cur_value){
		if(target_value == cur_value){
			trig->value = cur_value;
			ret = E_TRIG_TRUE;
		}
	}
	return ret;
}

