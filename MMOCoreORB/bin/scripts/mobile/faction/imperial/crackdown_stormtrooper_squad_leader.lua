crackdown_stormtrooper_squad_leader = Creature:new {
	objectName = "@mob/creature_names:crackdown_stormtrooper_squad_leader",
	socialGroup = "imperial",
	pvpFaction = "imperial",
	faction = "imperial",
	level = 1,
	chanceHit = 0.37,
	damageMin = 260,
	damageMax = 270,
	baseXp = 45,
	baseHAM = 8100,
	baseHAMmax = 9900,
	armor = 0,
	resists = {0,0,0,-1,30,-1,30,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK,
	optionsBitmask = 128,
	diet = HERBIVORE,

	aiTemplate = "default",

	templates = {"object/mobile/dressed_stormtrooper_squad_leader_white_gold.iff",
				"object/mobile/dressed_stormtrooper_groupleader_m.iff"
	},
	lootGroups = {
		{
			groups = {
				{group = "color_crystals", chance = 200000},
				{group = "junk", chance = 6500000},
				{group = "rifles", chance = 500000},
				{group = "loot_kit_parts", chance = 1300000},
				{group = "carbines", chance = 500000},
				{group = "pistols", chance = 500000},
				{group = "clothing_attachments", chance = 250000},
				{group = "armor_attachments", chance = 250000}
			},
			lootChance = 4000000
		}		
	},
	weapons = {"stormtrooper_weapons"},
	conversationTemplate = "",
	attacks = merge(riflemanmaster,carbineermaster)
}

CreatureTemplates:addCreatureTemplate(crackdown_stormtrooper_squad_leader, "crackdown_stormtrooper_squad_leader")