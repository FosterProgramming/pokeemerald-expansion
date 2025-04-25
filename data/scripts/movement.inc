@ Starting from here, these movements are considered
@ 'safe' (won't put follower into a Pokeball)
Common_Movement_FollowerSafeStart::
Common_Movement_QuestionMark:
	emote_question_mark
	step_end

Common_Movement_ExclamationMark:
	emote_exclamation_mark
	step_end

Common_Movement_Delay48:
	delay_16
	delay_16
	delay_16
	step_end

Common_Movement_FacePlayer:
	face_player
	step_end

Common_Movement_FaceAwayPlayer:
	face_away_player
	step_end

Common_Movement_FaceOriginalDirection:
	face_original_direction
	step_end

Common_Movement_WalkInPlaceFasterLeft:
	walk_in_place_faster_left
	step_end

Common_Movement_WalkInPlaceFasterUp:
	walk_in_place_faster_up
	step_end

Common_Movement_WalkInPlaceFasterRight:
	walk_in_place_faster_right
	step_end

Common_Movement_WalkInPlaceFasterDown:
	walk_in_place_faster_down
	step_end

Common_Movement_FaceRight:
	face_right
	step_end

Common_Movement_FaceLeft:
	face_left
	step_end

Common_Movement_FaceDown:
	face_down
	step_end

Common_Movement_FaceUp:
	face_up
	step_end

Common_Movement_WalkInPlaceDown:
	walk_in_place_down
	step_end

Common_Movement_WalkInPlaceLeft:
	walk_in_place_left
	step_end

Common_Movement_WalkInPlaceRight:
	walk_in_place_right
	step_end

@ End of follower-safe movements
Common_Movement_FollowerSafeEnd::
	step_end

Common_Movement_WalkUp6:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Common_Movement_WalkUp4:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Common_Movement_Delay32:
	delay_16
	delay_16
	step_end

Common_Movement_WalkUp:
	walk_up
	step_end

@ Unused
Common_Movement_WalkUp2::
	walk_up
	walk_up
	step_end

Common_Movement_WalkLeft::
	walk_left
	step_end

Common_Movement_PartyMemberTalksToPlayerNorth::
	walk_up
	face_down
	emote_exclamation_mark
	step_end

Common_Movement_PartyMemberTalksToPlayerWest::
	walk_left
	face_right
	emote_exclamation_mark
	step_end

Common_Movement_PartyMemberTalksToPlayerSouth::
	walk_down
	face_up
	emote_exclamation_mark
	step_end

Common_Movement_PartyMemberTalksToPlayerEast::
	walk_right
	face_left
	emote_exclamation_mark
	step_end

Common_Movement_PartyMemberReturnsToPlayerNorth::
	walk_down
	step_end

Common_Movement_PartyMemberReturnsToPlayerWest::
	walk_right
	step_end

Common_Movement_PartyMemberReturnsToPlayerSouth::
	walk_up
	step_end

Common_Movement_PartyMemberReturnsToPlayerEast::
	walk_left
	step_end

Common_Movement_PartyMemberTalksToPlayerNorthEast::
	walk_right
	walk_up
	emote_exclamation_mark
	face_down
	step_end

Common_Movement_PartyMemberTalksToPlayerNorthWest::
	walk_left
	walk_up
	emote_exclamation_mark
	face_down
	step_end

Common_Movement_PartyMemberTalksToPlayerSouthEast::
	walk_right
	walk_down
	emote_exclamation_mark
	face_up
	step_end

Common_Movement_PartyMemberTalksToPlayerSouthWest::
	walk_left
	walk_down
	emote_exclamation_mark
	face_up
	step_end

Common_Movement_PartyMemberReturnsToPlayerNorthEast::
	walk_down
	walk_left
	step_end

Common_Movement_PartyMemberReturnsToPlayerNorthwest::
	walk_down
	walk_right
	step_end

Common_Movement_PartyMemberReturnsToPlayerSouthEast::
	walk_up
	walk_left
	step_end

Common_Movement_PartyMemberReturnsToPlayerSouthWest::
	walk_up
	walk_right
	step_end

Common_Movement_PlayerFacesPartyMemberEast::
	walk_in_place_right
	step_end
