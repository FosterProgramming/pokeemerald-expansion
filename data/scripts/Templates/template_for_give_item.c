//OBJ_EVENT_GFX_SPECIES(BELLOSSOM)
script VerdantHollow_EventScripts_BellossomGiftNPC
{
    lock
    if(flag(FLAG_RECEIVED_VERDANT_HALLOW_MIRACLESEED))
        {
            msgbox(format("Miracle Seeds don’t sprout just anywhere. Only the Elder knows how to coax them forth…"))
        }
    else
        {
            msgbox(format("Oh! Hello, little travelers. The forest seems brighter today, doesn’t it? Here—take this. A gift from the Elder’s grove. They only grow when he wills it."),MSGBOX_NPC)
            playfanfare(MUS_OBTAIN_ITEM)
            giveitem(ITEM_MIRACLE_SEED)
            waitfanfare
            msgbox(format("They say these seeds carry old memories. Plant one, and you might grow a dream."))
            setflag(FLAG_RECEIVED_VERDANT_HALLOW_MIRACLESEED)
        }
    release
    end
}