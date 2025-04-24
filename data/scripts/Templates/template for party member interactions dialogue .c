script MapName_EventScripts_ScriptName_FullParty
    {
        lock
        call(CommonEventScripts_ApplyFullPartySpawnMovement)
        applymovement(OBJ_EVENT_ID_PLAYER, CommonMovement_FaceWest) //Face the talking party memeber. There are only 4 directions, so anything north or southeast will be just north or south
        waitmovement(OBJ_EVENT_ID_PLAYER) //finish movement before starting textbox
        speakername("Nyx")
        msgbox(format("Nyx text here"))
        applymovement(OBJ_EVENT_ID_PLAYER, CommonMovement_FaceEast) //Face the talking party memeber. There are only 4 directions, so anything north or southeast will be just north or south
        waitmovement(OBJ_EVENT_ID_PLAYER) //finish movement before starting textbox
        speakername("Vee")
        msgbox(format("Vee text here"))
        applymovement(OBJ_EVENT_ID_PLAYER, CommonMovement_FaceNorth) //Face the talking party memeber. There are only 4 directions, so anything north or southeast will be just north or south
        waitmovement(OBJ_EVENT_ID_PLAYER) //finish movement before starting textbox
        speakername("Drake")
        msgbox(format("Drake text here"))
        applymovement(OBJ_EVENT_ID_PLAYER, CommonMovement_FaceNorth) //Face the talking party memeber. There are only 4 directions, so anything north or southeast will be just north or south
        waitmovement(OBJ_EVENT_ID_PLAYER) //finish movement before starting textbox
        speakername("Ace")
        msgbox(format("Ace text here"))
        applymovement(OBJ_EVENT_ID_PLAYER, CommonMovement_FaceNorth) //Face the talking party memeber. There are only 4 directions, so anything north or southeast will be just north or south
        waitmovement(OBJ_EVENT_ID_PLAYER) //finish movement before starting textbox
        speakername("Talon")
        msgbox(format("Talon text here"))
        call(CommonEventScripts_ApplyFullPartyReturnMovement)
        release
    }