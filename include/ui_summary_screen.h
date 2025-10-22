#ifndef GUARD_UI_SUMMARY_SCREEN_H
#define GUARD_UI_SUMMARY_SCREEN_H

#include "main.h"

void Task_OpenSummaryScreenFromStartMenu(u8 taskId);
void SummaryScreen_Init(MainCallback callback);
u16 tryToGivePartyMemberExp(struct Pokemon *mon);
u8 getCurrentPartyMember(u16 species);
void Start_New_Summary_Screen(u8 monNumber, bool8 locked, MainCallback callback);

#endif // GUARD_UI_SUMMARY_SCREEN_H