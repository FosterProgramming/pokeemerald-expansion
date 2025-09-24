ReceivePhoneCall::
    playse SE_POKENAV_CALL
    applymovement LOCALID_PLAYER, ShakePlayer
    waitmovement LOCALID_PLAYER
    setflag PHONE_CALL_MSGBOX_FLAG
    callnative Native_ReceivePhoneCall
    end

AnswerPhone::
    playse SE_POKENAV_ON
    message PhoneCall1
    end

EndPhoneCall::
    //playse SE_POKENAV_OFF
    playse SE_POKENAV_HANG_UP
    closemessage
    clearflag PHONE_CALL_MSGBOX_FLAG
    end

PhoneCall1:
    .string "Hey it's the professor\p$"
    //.string "Throw {POKEBLOCK}S at wild POKéMON to make\n"
    //.string "them less likely to flee.$"

ShakePlayer:
    shake_horizontal
    step_end