DebugItems::
    setvar VAR_TEMP_0, 1
    call GiveBerries
    call GiveTms
    end

GiveBerries::
    additem ITEM_ASPEAR_BERRY, 1
    additem ITEM_LEPPA_BERRY, 1
    additem ITEM_LUM_BERRY, 1
    bufferstring STR_VAR_2, BerryListSummary
    bufferstdstring STR_VAR_3, STDSTRING_BERRIES
    call EventScript_PlayFanfareObtainedItem
    message BerryListText
    call EventScript_ContinueObtainedItem
    return

GiveTms::
    additem ITEM_TM_NONE, 1
    additem ITEM_TM_ELECTRIC_TERRAIN, 1
    additem ITEM_TM_PSYCHIC_TERRAIN, 1
    bufferstring STR_VAR_2, TmListSummary
    bufferstdstring STR_VAR_3, STDSTRING_TMHMS
    call EventScript_PlayFanfareObtainedItem
    message TmListText
    waitmessage
    call EventScript_ContinueObtainedItem
    return

BerryListText:
    .string "Obtained the Aspear, Leppa\n"
    .string "and Lum berries!$"

BerryListSummary:
    .string "3 new berries$"

TmListText:
    .string "Obtained the TM01!\n"
    .string "(Move Deleter)\p"
    .string "Obtained the TM02!\n"
    .string "(Electric Terrain)\p"
    .string "Obtained the TM03!\n"
    .string "(Psychic Terrain)$"

TmListSummary:
    .string "3 new TMs$"

ReceivePhoneCall::
    playse SE_POKENAV_CALL
    applymovement LOCALID_PLAYER, ShakePlayer
    waitmovement LOCALID_PLAYER
    setflag PHONE_CALL_MSGBOX_FLAG
    callnative Native_ReceivePhoneCall
    end

ProfessorFirstCall::
    playse SE_POKENAV_ON
    message FirstCallText
    end

ProfessorExplainsSneaking::
    playse SE_POKENAV_ON
    message ExplainsSneakingText
    end

ProfessorExplainsBerries::
    playse SE_POKENAV_ON
    message ExplainsBerriesText
    end

ProfessorExplainsTms::
    playse SE_POKENAV_ON
    message ExplainsTmsText
    end

SafariEnd::
    playse SE_POKENAV_ON
    message SafariEndText
    end

EndPhoneCall::
    //playse SE_POKENAV_OFF
    playse SE_POKENAV_HANG_UP
    delay 30
    closemessage
    clearflag PHONE_CALL_MSGBOX_FLAG
    end

ReceiveBerries::
    //playse SE_POKENAV_OFF
    playse SE_POKENAV_HANG_UP
    setflag RECEIVING_ITEMS_FLAG
    delay 30
    call GiveBerries
    closemessage
    clearflag RECEIVING_ITEMS_FLAG
    clearflag PHONE_CALL_MSGBOX_FLAG
    end

ReceiveTms::
    //playse SE_POKENAV_OFF
    playse SE_POKENAV_HANG_UP
    setflag RECEIVING_ITEMS_FLAG
    delay 30
    call GiveTms
    closemessage
    clearflag RECEIVING_ITEMS_FLAG
    clearflag PHONE_CALL_MSGBOX_FLAG
    end

RollCredits::
    delay 90
    closemessage
    clearflag RECEIVING_ITEMS_FLAG
    clearflag PHONE_CALL_MSGBOX_FLAG
    special GameClear
    end

FirstCallText:
    .string "Hey it's the professor\n"
    .string "Thank you for accepting to go though\l"
    .string "this.\p"
    .string "You may be familiar with Pokemon \n"
    .string "catching, but for our studies, we\l"
    .string "need to catch Pokemon without\l"
    .string "hurting them.\p"
    .string "Different Pokemon of the same species\n"
    .string "might like different things so try\l"
    .string "different moves in battle to find what\l"
    .string "they like.\p"
    .string "You should try looking for Oddish first,\n"
    .string "they are the easiest pokemon to\l"
    .string "capture here.\l"
    .string "Good luck!$"

ExplainsSneakingText:
    .string "Hey it's the professor\n"
    .string "I see you caught an Oddish, good job!\p"
    .string "You may have noticed some Pokemon\n"
    .string "running away when you get close to\l"
    .string "them. They get easily scared so you\l"
    .string "need to approach them carefully.\p"
    .string "Don't move if they are looking in your\n"
    .string "direction and use the A button to walk\l"
    .string "slowly towards them so you don't make\l"
    .string "noise either\p"
    .string "You should try catching a Girafarig now.$"

ExplainsBerriesText:
    .string "Hey it's the professor\p"
    .string "You seem to be good at this. You\n"
    .string "should try to throw berries at \l"
    .string "wild Pokemon. If it's a berry \l"
    .string "they like, you might keep their\l"
    .string "attention longer. I will send you\l"
    .string "some berries. Use them to catch\l"
    .string "a Doduo, a Natua and a Gloom.$"

ExplainsTmsText:
    .string "Hey it's the professor\p"
    .string "Some pokemon are easier to capture\n"
    .string "if you set up an environment they\l"
    .string "like. I am sending you some TMs\l"
    .string "to try out.$"

SafariEndText:
    .string "Hey it's the professor\p"
    .string "You caught every pokemon in\n"
    .string "the safari zone. Congrats!$"

ShakePlayer:
    shake_horizontal
    step_end
