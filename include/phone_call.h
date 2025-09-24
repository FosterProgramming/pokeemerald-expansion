#ifndef GUARD_PHONE_CALL_H
#define GUARD_PHONE_CALL_H




extern EWRAM_DATA u8 gPhoneCallIndex;

//data/scripts/phone_call.inc
extern const u8 AnswerPhone[];
extern const u8 EndPhoneCall[];

const u8 *GetPhoneCallScript(void);

#endif // GUARD_PHONE_CALL_H