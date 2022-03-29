// THIS IS AN AUTOGENERATED FILE (settings.py)
#pragma once

#include <Common.h>

// Enums
enum {
    SP_DRIFT_MODE_MANUAL = 0x0,
    SP_DRIFT_MODE_AUTO = 0x1,
    SP_DRIFT_MODE_DEFAULT = SP_DRIFT_MODE_MANUAL,
};

enum {
    SP_SETTING_HUD_LABELS_HIDE = 0x0,
    SP_SETTING_HUD_LABELS_SHOW = 0x1,
    SP_SETTING_HUD_LABELS_DEFAULT = SP_SETTING_HUD_LABELS_SHOW,
};

enum {
    SP_SETTING_169_FOV_169 = 0x0,
    SP_SETTING_169_FOV_43 = 0x1,
    SP_SETTING_169_FOV_DEFAULT = SP_SETTING_169_FOV_169,
};

enum {
    SP_SETTING_MAP_ICONS_CHARACTERS = 0x0,
    SP_SETTING_MAP_ICONS_MIIS = 0x1,
    SP_SETTING_MAP_ICONS_DEFAULT = SP_SETTING_MAP_ICONS_MIIS,
};

enum {
    SP_TA_RULE_CLASS_150CC = 0x0,
    SP_TA_RULE_CLASS_200CC = 0x1,
    SP_TA_RULE_CLASS_DEFAULT = SP_TA_RULE_CLASS_150CC,
};

enum {
    SP_TA_RULE_GHOST_SORTING_FASTEST = 0x0,
    SP_TA_RULE_GHOST_SORTING_SLOWEST = 0x1,
    SP_TA_RULE_GHOST_SORTING_NEWEST = 0x2,
    SP_TA_RULE_GHOST_SORTING_OLDEST = 0x3,
    SP_TA_RULE_GHOST_SORTING_DEFAULT = SP_TA_RULE_GHOST_SORTING_FASTEST,
};

enum {
    SP_TA_RULE_GHOST_TAG_VISIBILITY_NONE = 0x0,
    SP_TA_RULE_GHOST_TAG_VISIBILITY_WATCHED = 0x1,
    SP_TA_RULE_GHOST_TAG_VISIBILITY_ALL = 0x2,
    SP_TA_RULE_GHOST_TAG_VISIBILITY_DEFAULT = SP_TA_RULE_GHOST_TAG_VISIBILITY_ALL,
};

enum {
    SP_TA_RULE_GHOST_TAG_CONTENT_NAME = 0x0,
    SP_TA_RULE_GHOST_TAG_CONTENT_TIME = 0x1,
    SP_TA_RULE_GHOST_TAG_CONTENT_TIME_NOLEADING = 0x2,
    SP_TA_RULE_GHOST_TAG_CONTENT_DATE = 0x3,
    SP_TA_RULE_GHOST_TAG_CONTENT_DEFAULT = SP_TA_RULE_GHOST_TAG_CONTENT_NAME,
};

enum {
    SP_TA_RULE_SOLID_GHOSTS_NONE = 0x0,
    SP_TA_RULE_SOLID_GHOSTS_WATCHED = 0x1,
    SP_TA_RULE_SOLID_GHOSTS_ALL = 0x2,
    SP_TA_RULE_SOLID_GHOSTS_DEFAULT = SP_TA_RULE_SOLID_GHOSTS_NONE,
};

enum {
    SP_SETTING_PAGE_TRANSITIONS_DISABLE = 0x0,
    SP_SETTING_PAGE_TRANSITIONS_ENABLE = 0x1,
    SP_SETTING_PAGE_TRANSITIONS_DEFAULT = SP_SETTING_PAGE_TRANSITIONS_ENABLE,
};

enum {
    SP_SETTING_RACE_INPUT_DISPLAY_DISABLE = 0x0,
    SP_SETTING_RACE_INPUT_DISPLAY_SIMPLE = 0x1,
    SP_SETTING_RACE_INPUT_DISPLAY_CLASSIC = 0x2,
    SP_SETTING_RACE_INPUT_DISPLAY_PRESET2 = 0x3,
    SP_SETTING_RACE_INPUT_DISPLAY_PRESET3 = 0x4,
    SP_SETTING_RACE_INPUT_DISPLAY_PRESET4 = 0x5,
    SP_SETTING_RACE_INPUT_DISPLAY_PRESET5 = 0x6,
    SP_SETTING_RACE_INPUT_DISPLAY_PRESET6 = 0x7,
    SP_SETTING_RACE_INPUT_DISPLAY_DEFAULT = SP_SETTING_RACE_INPUT_DISPLAY_SIMPLE,
};

enum {
    SP_TA_RULE_GHOST_SOUND_NONE = 0x0,
    SP_TA_RULE_GHOST_SOUND_WATCHED = 0x1,
    SP_TA_RULE_GHOST_SOUND_ALL = 0x2,
    SP_TA_RULE_GHOST_SOUND_DEFAULT = SP_TA_RULE_GHOST_SOUND_WATCHED,
};


// Bit fields
typedef struct {
    u32 driftMode : 1;
    u32 settingHudLabels : 1;
    u32 setting169Fov : 1;
    u32 settingMapIcons : 1;
    u32 taRuleClass : 1;
    u32 taRuleGhostSorting : 2;
    u32 taRuleGhostTagVisibility : 2;
    u32 taRuleGhostTagContent : 2;
    u32 taRuleSolidGhosts : 2;
    u32 settingPageTransitions : 1;
    u32 settingRaceInputDisplay : 3;
    u32 taRuleGhostSound : 2;
} SpSettingBitField;