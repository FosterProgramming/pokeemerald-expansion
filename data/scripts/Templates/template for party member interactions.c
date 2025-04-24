raw`
.set VAR_FULL_PARTY, 15
.set VAR_ACE_TALON_NYX_PARTY, 14
.set VAR_DRAKE_TALON_NYX_PARTY, 13
.set VAR_DRAKE_ACE_NYX_PARTY, 12
.set VAR_DRAKE_ACE_TALON_PARTY, 11
.set VAR_TALON_NYX_PARTY, 10
.set VAR_ACE_NYX_PARTY, 9
.set VAR_ACE_TALON_PARTY, 8
.set VAR_DRAKE_NYX_PARTY, 7
.set VAR_DRAKE_TALON_PARTY, 6
.set VAR_DRAKE_ACE_PARTY, 5
.set VAR_DRAKE_PARTY, 4
.set VAR_ACE_PARTY, 3
.set VAR_TALON_PARTY, 2
.set VAR_NYX_PARTY, 1
.set VAR_NO_PARTY, 0
.set LOCALID_NYX, 0
.set LOCALID_VEE, 1
.set LOCALID_DRAKE, 2
.set LOCALID_ACE, 3
.set LOCALID_TALON, 4
.set PlayerXCoordinates, VAR_TEMP_3
.set PlayerYCoordinates, VAR_TEMP_4
`

script MapName_EventScripts_ScriptName
{
  lock
  call(CommonEventScript_SetLocalIdsToPlayerXY) //sets OW party Members to Players XY Coords
  call(CommonEventScript_DetermineParty) //determines which flags have been set and sets a var for which party members are in the party
  call(CommonEventScripts_AddPartyObjectsToOW) //adds OW objects to map, based on which var is set from CommonEventScript_DetermineParty
  call(CommonEventScripts_ExecutePartyBasedScript) //uses the var to determine which script to execute (this will be unique for each script and is just a template)
  call(CommonEventScript_RemovePartyObjects) // removes the party objects
  release
  end  
}

script CommonEventScript_DetermineParty
    {
	if(flag(FLAG_HIDE_STRATOSCAPE_DRAKE) && flag(FLAG_HIDE_VOLTBROOK_TOWN_ACE) && flag(FLAG_HIDE_VERDANT_HALLOW_TALON) && flag(FLAG_HIDE_MURKWELL_BOG_NYX))
		{
			setvar(VAR_TEMP_F, VAR_FULL_PARTY)
		}
	elif(flag(FLAG_HIDE_VOLTBROOK_TOWN_ACE) && flag(FLAG_HIDE_VERDANT_HALLOW_TALON) && flag(FLAG_HIDE_MURKWELL_BOG_NYX))
		{
			setvar(VAR_TEMP_F, VAR_ACE_TALON_NYX_PARTY)
		}
	elif(flag(FLAG_HIDE_STRATOSCAPE_DRAKE) && flag(FLAG_HIDE_VERDANT_HALLOW_TALON) && flag(FLAG_HIDE_MURKWELL_BOG_NYX))
		{
			setvar(VAR_TEMP_F, VAR_DRAKE_TALON_NYX_PARTY)
		}
    elif(flag(FLAG_HIDE_STRATOSCAPE_DRAKE) && flag(FLAG_HIDE_VOLTBROOK_TOWN_ACE) && flag(FLAG_HIDE_MURKWELL_BOG_NYX))
		{
			setvar(VAR_TEMP_F, VAR_DRAKE_ACE_NYX_PARTY)
		}
    elif(flag(FLAG_HIDE_STRATOSCAPE_DRAKE) && flag(FLAG_HIDE_VOLTBROOK_TOWN_ACE) && flag(FLAG_HIDE_VERDANT_HALLOW_TALON))
		{
			setvar(VAR_TEMP_F, VAR_DRAKE_ACE_TALON_PARTY)
		}
    elif(flag(FLAG_HIDE_VERDANT_HALLOW_TALON) && flag(FLAG_HIDE_MURKWELL_BOG_NYX))
		{
			setvar(VAR_TEMP_F, VAR_TALON_NYX_PARTY)
		}
    elif(flag(FLAG_HIDE_VOLTBROOK_TOWN_ACE) && flag(FLAG_HIDE_MURKWELL_BOG_NYX))
		{
			setvar(VAR_TEMP_F, VAR_ACE_NYX_PARTY)
		}
    elif(flag(FLAG_HIDE_VOLTBROOK_TOWN_ACE) && flag(FLAG_HIDE_VERDANT_HALLOW_TALON))
		{
			setvar(VAR_TEMP_F, VAR_ACE_TALON_PARTY)
		}
    elif(flag(FLAG_HIDE_STRATOSCAPE_DRAKE) && flag(FLAG_HIDE_MURKWELL_BOG_NYX))
		{
			setvar(VAR_TEMP_F, VAR_DRAKE_NYX_PARTY)
		}
    elif(flag(FLAG_HIDE_STRATOSCAPE_DRAKE) && flag(FLAG_HIDE_VERDANT_HALLOW_TALON))
		{
			setvar(VAR_TEMP_F, VAR_DRAKE_TALON_PARTY)
		}
    elif(flag(FLAG_HIDE_STRATOSCAPE_DRAKE) && flag(FLAG_HIDE_VOLTBROOK_TOWN_ACE))
		{
			setvar(VAR_TEMP_F, VAR_DRAKE_ACE_PARTY)
		}
    elif(flag(FLAG_HIDE_STRATOSCAPE_DRAKE))
		{
			setvar(VAR_TEMP_F, VAR_DRAKE_PARTY)
		}
    elif(flag(FLAG_HIDE_VOLTBROOK_TOWN_ACE))
		{
			setvar(VAR_TEMP_F, VAR_ACE_PARTY)
		}
    elif(flag(FLAG_HIDE_VERDANT_HALLOW_TALON))
		{
			setvar(VAR_TEMP_F, VAR_TALON_PARTY)
		}
    elif(flag(FLAG_HIDE_MURKWELL_BOG_NYX))
		{
			setvar(VAR_TEMP_F, VAR_NYX_PARTY)
		}
	else
		{
			setvar(VAR_TEMP_F, VAR_NO_PARTY)
		}
    return
}

script CommonEventScripts_AddPartyObjectsToOW
{
  switch(var(VAR_TEMP_F))
  {
      case VAR_FULL_PARTY:
        addobject(LOCALID_NYX)
        addobject(LOCALID_VEE)
        addobject(LOCALID_ACE)
        addobject(LOCALID_TALON)
        addobject(LOCALID_DRAKE)
      case VAR_ACE_TALON_NYX_PARTY:
        addobject(LOCALID_NYX)
        addobject(LOCALID_VEE)
        addobject(LOCALID_ACE)
        addobject(LOCALID_TALON)
      case VAR_DRAKE_TALON_NYX_PARTY:
        addobject(LOCALID_NYX)
        addobject(LOCALID_VEE)
        addobject(LOCALID_DRAKE)
        addobject(LOCALID_TALON)
      case VAR_DRAKE_ACE_NYX_PARTY:
        addobject(LOCALID_NYX)
        addobject(LOCALID_VEE)
        addobject(LOCALID_DRAKE)
        addobject(LOCALID_ACE)
      case VAR_DRAKE_ACE_TALON_PARTY:
        addobject(LOCALID_TALON)
        addobject(LOCALID_VEE)
        addobject(LOCALID_DRAKE)
        addobject(LOCALID_ACE)
      case VAR_TALON_NYX_PARTY:
        addobject(LOCALID_TALON)
        addobject(LOCALID_VEE)
        addobject(LOCALID_NYX)
      case VAR_ACE_NYX_PARTY:
        addobject(LOCALID_ACE)
        addobject(LOCALID_VEE)
        addobject(LOCALID_NYX)
      case VAR_ACE_TALON_PARTY:
        addobject(LOCALID_ACE)
        addobject(LOCALID_VEE)
        addobject(LOCALID_TALON)
      case VAR_DRAKE_NYX_PARTY:
        addobject(LOCALID_DRAKE)
        addobject(LOCALID_NYX)
        addobject(LOCALID_VEE)
      case VAR_DRAKE_TALON_PARTY:
        addobject(LOCALID_DRAKE)
        addobject(LOCALID_VEE)
        addobject(LOCALID_TALON)
      case VAR_DRAKE_ACE_PARTY:
        addobject(LOCALID_DRAKE)
        addobject(LOCALID_VEE)
        addobject(LOCALID_ACE)
      case VAR_DRAKE_PARTY:
        addobject(LOCALID_DRAKE)
        addobject(LOCALID_VEE)
      case VAR_ACE_PARTY:
        addobject(LOCALID_ACE)
        addobject(LOCALID_VEE)
      case VAR_TALON_PARTY:
        addobject(LOCALID_TALON)
        addobject(LOCALID_VEE)
      case VAR_NYX_PARTY:
        addobject(LOCALID_NYX)
        addobject(LOCALID_VEE)
      case VAR_NO_PARTY:
        addobject(LOCALID_VEE)
      default:
        addobject(LOCALID_VEE)
  }
  return
}
script CommonEventScripts_ExecutePartyBasedScript
{
  switch(var(VAR_TEMP_F))
  {
      case VAR_FULL_PARTY:
        call(MapName_EventScripts_ScriptName_FullParty)  
      case VAR_ACE_TALON_NYX_PARTY:
        call(MapName_EventScripts_ScriptName_AceTalonNyxParty)
      case VAR_DRAKE_TALON_NYX_PARTY:
        call(MapName_EventScripts_ScriptName_DrakeTalonNyxParty)
      case VAR_DRAKE_ACE_NYX_PARTY:
        call(MapName_EventScripts_ScriptName_DrakeAceNyxParty)
      case VAR_DRAKE_ACE_TALON_PARTY:
        call(MapName_EventScripts_ScriptName_DrakeAceTalonParty)
      case VAR_TALON_NYX_PARTY:
        call(MapName_EventScripts_ScriptName_TalonNyxParty)
      case VAR_ACE_NYX_PARTY:
        call(MapName_EventScripts_ScriptName_AceNyxParty)
      case VAR_ACE_TALON_PARTY:
        call(MapName_EventScripts_ScriptName_AceTalonParty)
      case VAR_DRAKE_NYX_PARTY:
        call(MapName_EventScripts_ScriptName_DrakeNyxParty)
      case VAR_DRAKE_TALON_PARTY:
        call(MapName_EventScripts_ScriptName_DrakeTalonParty)
      case VAR_DRAKE_ACE_PARTY:
        call(MapName_EventScripts_ScriptName_DrakeAceParty)
      case VAR_DRAKE_PARTY:
        call(MapName_EventScripts_ScriptName_DrakeParty)
      case VAR_ACE_PARTY:
        call(MapName_EventScripts_ScriptName_AceParty)
      case VAR_TALON_PARTY:
        call(MapName_EventScripts_ScriptName_TalonParty)
      case VAR_NYX_PARTY:
        call(MapName_EventScripts_ScriptName_NyxParty)
      case VAR_NO_PARTY:
        call(MapName_EventScripts_ScriptName_NoParty)
      default:
        call(MapName_EventScripts_ScriptName_NoParty)
  }
  return
}
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

script CommonEventScript_SetLocalIdsToPlayerXY
  {
      getplayerxy(PlayerXCoordinates, PlayerYCoordinates)
      setobjectxyperm(LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates)
      setobjectxyperm(LOCALID_DRAKE, PlayerXCoordinates, PlayerYCoordinates)
      setobjectxyperm(LOCALID_TALON, PlayerXCoordinates, PlayerYCoordinates)
      setobjectxyperm(LOCALID_ACE, PlayerXCoordinates, PlayerYCoordinates)
      setobjectxyperm(LOCALID_NYX, PlayerXCoordinates, PlayerYCoordinates)
      return
  }

script CommonEventScript_RemovePartyObjects
  {
    removeobject(LOCALID_NYX)
    removeobject(LOCALID_VEE)
    removeobject(LOCALID_DRAKE)
    removeobject(LOCALID_ACE)
    removeobject(LOCALID_TALON)
    return
  }


script CommonEventScripts_ApplyFullPartySpawnMovement      
  {
    applymovement(LOCALID_NYX, Common_Movement_PartyMemberTalksToPlayerWest) // When turning the player to face NYX in full party use CommonMovement_FaceWest
    applymovement(LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast) // When turning the player to face VEE in full party use CommonMovement_FaceEast
    applymovement(LOCALID_DRAKE, Common_Movement_PartyMemberTalksToPlayerNorth) // When turning the player to face DRAKE in full party use CommonMovement_FaceNorth
    applymovement(LOCALID_ACE, Common_Movement_PartyMemberTalksToPlayerNorthWest) // When turning the player to face ACE in full party use CommonMovement_FaceNorth
    applymovement(LOCALID_TALON, Common_Movement_PartyMemberTalksToPlayerNorthEast) // When turning the player to face TALON in full party use CommonMovement_FaceNorth
    waitmovement(LOCALID_TALON)
  }

script CommonEventScripts_ApplyFullPartyReturnMovement
  {
    applymovement(LOCALID_NYX, Common_Movement_PartyMemberReturnsToPlayerWest)
    applymovement(LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast)
    applymovement(LOCALID_DRAKE, Common_Movement_PartyMemberReturnsToPlayerNorth)
    applymovement(LOCALID_ACE, Common_Movement_PartyMemberReturnsToPlayerNorthWest)
    applymovement(LOCALID_TALON, Common_Movement_PartyMemberReturnsToPlayerNorthEast)
    waitmovement(LOCALID_TALON)
  }

  script CommonEventScripts_ApplyAceTalonNyxSpawnMovement      
  {
    applymovement(LOCALID_NYX, Common_Movement_PartyMemberTalksToPlayerWest) // When turning the player to face NYX in full party use CommonMovement_FaceWest
    applymovement(LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast) // When turning the player to face VEE in full party use CommonMovement_FaceEast
    applymovement(LOCALID_ACE, Common_Movement_PartyMemberTalksToPlayerNorth) // When turning the player to face ACE in full party use CommonMovement_FaceNorth
    applymovement(LOCALID_TALON, Common_Movement_PartyMemberTalksToPlayerSouth) // When turning the player to face TALON in full party use CommonMovement_FaceSouth
  }

script CommonEventScripts_ApplyAceTalonNyxReturnMovement
  {
    applymovement(LOCALID_NYX, Common_Movement_PartyMemberReturnsToPlayerWest) 
    applymovement(LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast)
    applymovement(LOCALID_ACE, Common_Movement_PartyMemberReturnsToPlayerNorth)
    applymovement(LOCALID_TALON, Common_Movement_PartyMemberReturnsToPlayerSouth)
  }

 script CommonEventScripts_ArtifactsCollectedCountAddVar
 {
  if(var(VAR_ARTIFACTS_COLLECTED_COUNT) < 8)
    {
      addvar(VAR_ARTIFACTS_COLLECTED_STATE)
    }
 }

 script MapName_EventScripts_ArtifactsCollectedCount
 {
  if(var(VAR_ARTIFACTS_COLLECTED_COUNT) == 0)
    {
      call(MapName_EventScripts_FirstArtifactCollected)
    }
  elif(var(VAR_ARTIFACTS_COLLECTED_COUNT) < 8)
    {
      call(MapName_EventScripts_ArtifactCollected)
    }
  elif(var(VAR_ARTIFACTS_COLLECTED_COUNT) == 8)
    {
      call(MapName_EventScripts_FinalArtifactCollected)
    }
 }