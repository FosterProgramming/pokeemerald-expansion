#include "global.h"
#include "main.h"
#include "field_message_box.h"
#include "menu.h"
#include "phone_call.h"
#include "script.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "window.h"

EWRAM_DATA u8 gPhoneCallIndex = 0;
static const u8 sText_Ringtone0[] = _(" . {PAUSE 20} . {PLAY_SE SE_POKENAV_CALL}{PAUSE 30} . {PAUSE 20}");
static const u8 sText_Ringtone1[] = _("{PLAY_SE SE_POKENAV_CALL} . {PAUSE 30} . {PAUSE 20}{PLAY_SE SE_POKENAV_CALL} . {PAUSE 30} . {PAUSE 20}");

const u8 *GetPhoneCallScript(void)
{
    const u8 *script;
    switch (gPhoneCallIndex)
    {
    case 0:
        script = ProfessorFirstCall;
        break;
    case 1:
        script =  EndPhoneCall;
        break;
    case 2:
        script = ProfessorExplainsSneaking;
        break;
    case 3:
        script =  EndPhoneCall;
        break;
    case 4:
        script = ProfessorExplainsBerries;
        break;
    case 5:
        script =  ReceiveBerries;
        break;
    case 6:
        script = ProfessorExplainsTms;
        break;
    case 7:
        script =  ReceiveTms;
        break;
    case 8:
        script =  SafariEnd;
        break;
    case 9:
        script =  RollCredits;
        break;
    default:
        script = EndPhoneCall;
        break;
    }
    gPhoneCallIndex++;
    return script;
}

#define tState data[0]

static void Task_DrawPhoneCallMessage(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->tState)
    {
        case 0:
            LoadMessageBoxAndBorderGfx();
            task->tState++;
            break;
        case 1:
            ChangePrinterFont(0, FONT_NORMAL_FRLG);
            DrawStdWindowFrame(0, TRUE);
            task->tState++;
            break;
        case 2:
            if (JOY_NEW(A_BUTTON))
            {
                ScriptContext_SetupScript(GetPhoneCallScript());
                DeactivateTextPrinter(0);
                DestroyTask(taskId);
            }
            else if (RunTextPrintersAndIsPrinter0Active() != TRUE)
            {
                FillWindowPixelBuffer(0, PIXEL_FILL(1));
                CopyWindowToVram(0, COPYWIN_GFX);
                StringExpandPlaceholders(gStringVar4, sText_Ringtone1);
                AddTextPrinterForMessage(FALSE);
            }
    }
}

bool8 Native_ReceivePhoneCall(struct ScriptContext *ctx)
{
    if (gFieldMessageBoxMode != FIELD_MESSAGE_BOX_HIDDEN)
        return FALSE;
    StringExpandPlaceholders(gStringVar4, sText_Ringtone0);
    AddTextPrinterForMessage(TRUE);
    u32 taskId = CreateTask(Task_DrawPhoneCallMessage, 0x50);
    gFieldMessageBoxMode = FIELD_MESSAGE_BOX_NORMAL;
    return TRUE;
}

#undef tState
