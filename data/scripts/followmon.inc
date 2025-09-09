InteractWithDynamicWildFollowMon::
    lockall
    special CreateFollowMonEncounter
    goto_if_eq VAR_RESULT, FALSE, InteractWithDynamicWildFollowMonEnd
    removeobject VAR_LAST_TALKED
    dowildbattle
InteractWithDynamicWildFollowMonEnd:
    releaseall
    end

