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
    closemessage
    clearflag PHONE_CALL_MSGBOX_FLAG
    end

ReceiveBerries::
    //playse SE_POKENAV_OFF
    playse SE_POKENAV_HANG_UP
    setflag RECEIVING_ITEMS_FLAG
    giveitem ITEM_ASPEAR_BERRY
    giveitem ITEM_LEPPA_BERRY
    giveitem ITEM_LUM_BERRY
    closemessage
    clearflag RECEIVING_ITEMS_FLAG
    clearflag PHONE_CALL_MSGBOX_FLAG
    end

ReceiveTms::
    //playse SE_POKENAV_OFF
    playse SE_POKENAV_HANG_UP
    setflag RECEIVING_ITEMS_FLAG
    giveitem ITEM_TM_NONE
    giveitem ITEM_TM_ELECTRIC_TERRAIN
    giveitem ITEM_TM_PSYCHIC_TERRAIN
    closemessage
    clearflag RECEIVING_ITEMS_FLAG
    clearflag PHONE_CALL_MSGBOX_FLAG
    end

RollCredits::
    closemessage
    clearflag RECEIVING_ITEMS_FLAG
    clearflag PHONE_CALL_MSGBOX_FLAG
    special GameClear
    end

FirstCallText:
    .string "Hey it's the professor\p$"
    //.string "Throw {POKEBLOCK}S at wild POKéMON to make\n"
    //.string "them less likely to flee.$"

ExplainsSneakingText:
    .string "Hey it's the professor\p$"
    //.string "Throw {POKEBLOCK}S at wild POKéMON to make\n"
    //.string "them less likely to flee.$"

ExplainsBerriesText:
    .string "Hey it's the professor\p$"
    //.string "Throw {POKEBLOCK}S at wild POKéMON to make\n"
    //.string "them less likely to flee.$"

ExplainsTmsText:
    .string "Hey it's the professor\p$"
    //.string "Throw {POKEBLOCK}S at wild POKéMON to make\n"
    //.string "them less likely to flee.$"

SafariEndText:
    .string "Hey it's the professor\p$"
    //.string "Throw {POKEBLOCK}S at wild POKéMON to make\n"
    //.string "them less likely to flee.$"

ShakePlayer:
    shake_horizontal
    step_end