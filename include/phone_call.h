#ifndef GUARD_PHONE_CALL_H
#define GUARD_PHONE_CALL_H

extern EWRAM_DATA u8 gPhoneCallIndex;

//data/scripts/phone_call.inc
extern const u8 ReceivePhoneCall[];

extern const u8 ProfessorFirstCall[];
extern const u8 ProfessorExplainsSneaking[];
extern const u8 ProfessorExplainsBerries[];
extern const u8 ProfessorExplainsTms[];
extern const u8 EndPhoneCall[];
extern const u8 ReceiveBerries[];
extern const u8 ReceiveTms[];

extern const u8 SafariEnd[];
extern const u8 RollCredits[];


const u8 *GetPhoneCallScript(void);

#endif // GUARD_PHONE_CALL_H