#ifndef GUARD_ORRE_MET_LOCATIONS_H
#define GUARD_ORRE_MET_LOCATIONS_H

// Colosseum and XD don't account for each other in regards to met locations.
// What's one location in Colosseum could be another in XD.
// This accounts for those differences. Many of these go unused in normal gameplay
// but they're accounted for the sake of compatibility.
static const u16 sOrreMetLocationTable[][2] =
{
    //Colosseum                      // XD
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},// 0
    {ORRE_MAPSEC_OUTSKIRT_STAND,     ORRE_MAPSEC_CIPHER_LAB},      // 1
    {ORRE_MAPSEC_OUTSKIRT_STAND,     ORRE_MAPSEC_DISTANT_LAND},    // 2
    {ORRE_MAPSEC_PHENAC_CITY,        ORRE_MAPSEC_DISTANT_LAND},    // 3
    {ORRE_MAPSEC_PHENAC_CITY,        ORRE_MAPSEC_DISTANT_LAND},    // 4
    {ORRE_MAPSEC_MAYORS_HOUSE,       ORRE_MAPSEC_DISTANT_LAND},    // 5
    {ORRE_MAPSEC_MAYORS_HOUSE,       ORRE_MAPSEC_DISTANT_LAND},    // 6
    {ORRE_MAPSEC_PHENAC_CITY,        ORRE_MAPSEC_CIPHER_LAB},      // 7
    {ORRE_MAPSEC_PHENAC_CITY,        ORRE_MAPSEC_CIPHER_LAB},      // 8
    {ORRE_MAPSEC_PHENAC_CITY,        ORRE_MAPSEC_CIPHER_LAB},      // 9
    {ORRE_MAPSEC_PHENAC_CITY,        ORRE_MAPSEC_CIPHER_LAB},      // 10
    {ORRE_MAPSEC_PRE_GYM,            ORRE_MAPSEC_CIPHER_LAB},      // 11
    {ORRE_MAPSEC_PRE_GYM,            ORRE_MAPSEC_MT_BATTLE},       // 12
    {ORRE_MAPSEC_PHENAC_STADIUM,     ORRE_MAPSEC_MT_BATTLE},       // 13
    {ORRE_MAPSEC_PHENAC_STADIUM,     ORRE_MAPSEC_MT_BATTLE},       // 14
    {ORRE_MAPSEC_PYRITE_TOWN,        ORRE_MAPSEC_MT_BATTLE},       // 15
    {ORRE_MAPSEC_PYRITE_TOWN,        ORRE_MAPSEC_MT_BATTLE},       // 16
    {ORRE_MAPSEC_PYRITE_TOWN,        ORRE_MAPSEC_MT_BATTLE},       // 17
    {ORRE_MAPSEC_PYRITE_TOWN,        ORRE_MAPSEC_MT_BATTLE},       // 18
    {ORRE_MAPSEC_PYRITE_TOWN,        ORRE_MAPSEC_MT_BATTLE},       // 19
    {ORRE_MAPSEC_PYRITE_TOWN,        ORRE_MAPSEC_MT_BATTLE},       // 20
    {ORRE_MAPSEC_PYRITE_TOWN,        ORRE_MAPSEC_MT_BATTLE},       // 21
    {ORRE_MAPSEC_PYRITE_TOWN,        ORRE_MAPSEC_DISTANT_LAND},    // 22
    {ORRE_MAPSEC_PYRITE_TOWN,        ORRE_MAPSEC_MT_BATTLE},       // 23
    {ORRE_MAPSEC_PYRITE_TOWN,        ORRE_MAPSEC_MT_BATTLE},       // 24
    {ORRE_MAPSEC_PYRITE_BUILDING,    ORRE_MAPSEC_MT_BATTLE},       // 25
    {ORRE_MAPSEC_PYRITE_BUILDING,    ORRE_MAPSEC_MT_BATTLE},       // 26
    {ORRE_MAPSEC_PYRITE_BUILDING,    ORRE_MAPSEC_MT_BATTLE},       // 27
    {ORRE_MAPSEC_PYRITE_BUILDING,    ORRE_MAPSEC_MT_BATTLE},       // 28
    {ORRE_MAPSEC_PYRITE_CAVE,        ORRE_MAPSEC_MT_BATTLE},       // 29
    {ORRE_MAPSEC_MIRORS_HIDEOUT,     ORRE_MAPSEC_MT_BATTLE},       // 30
    {ORRE_MAPSEC_PYRITE_CAVE,        ORRE_MAPSEC_MT_BATTLE},       // 31
    {ORRE_MAPSEC_PYRITE_CAVE,        ORRE_MAPSEC_MT_BATTLE},       // 32
    {ORRE_MAPSEC_PYRITE_CAVE,        ORRE_MAPSEC_MT_BATTLE},       // 33
    {ORRE_MAPSEC_PYRITE_CAVE,        ORRE_MAPSEC_MT_BATTLE},       // 34
    {ORRE_MAPSEC_PYRITE_COLOSSEUM,   ORRE_MAPSEC_SS_LIBRA},        // 35
    {ORRE_MAPSEC_AGATE_VILLAGE,      ORRE_MAPSEC_SS_LIBRA},        // 36
    {ORRE_MAPSEC_RELIC_CAVE,         ORRE_MAPSEC_SS_LIBRA},        // 37
    {ORRE_MAPSEC_RELIC_CAVE,         ORRE_MAPSEC_SS_LIBRA},        // 38
    {ORRE_MAPSEC_AGATE_VILLAGE,      ORRE_MAPSEC_SS_LIBRA},        // 39
    {ORRE_MAPSEC_AGATE_VILLAGE,      ORRE_MAPSEC_SS_LIBRA},        // 40
    {ORRE_MAPSEC_AGATE_VILLAGE,      ORRE_MAPSEC_SS_LIBRA},        // 41
    {ORRE_MAPSEC_AGATE_VILLAGE,      ORRE_MAPSEC_SS_LIBRA},        // 42
    {ORRE_MAPSEC_AGATE_VILLAGE,      ORRE_MAPSEC_SS_LIBRA},        // 43
    {ORRE_MAPSEC_AGATE_VILLAGE,      ORRE_MAPSEC_SS_LIBRA},        // 44
    {ORRE_MAPSEC_AGATE_VILLAGE,      ORRE_MAPSEC_REALGAM_TOWER},   // 45
    {ORRE_MAPSEC_AGATE_VILLAGE,      ORRE_MAPSEC_REALGAM_TOWER},   // 46
    {ORRE_MAPSEC_THE_UNDER,          ORRE_MAPSEC_DISTANT_LAND},    // 47
    {ORRE_MAPSEC_THE_UNDER,          ORRE_MAPSEC_DISTANT_LAND},    // 48
    {ORRE_MAPSEC_THE_UNDER,          ORRE_MAPSEC_REALGAM_TOWER},   // 49
    {ORRE_MAPSEC_THE_UNDER,          ORRE_MAPSEC_REALGAM_TOWER},   // 50
    {ORRE_MAPSEC_THE_UNDER,          ORRE_MAPSEC_REALGAM_TOWER},   // 51
    {ORRE_MAPSEC_THE_UNDER,          ORRE_MAPSEC_DISTANT_LAND},    // 52
    {ORRE_MAPSEC_THE_UNDER,          ORRE_MAPSEC_DISTANT_LAND},    // 53
    {ORRE_MAPSEC_THE_UNDER,          ORRE_MAPSEC_DISTANT_LAND},    // 54
    {ORRE_MAPSEC_THE_UNDER,          ORRE_MAPSEC_DISTANT_LAND},    // 55
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 56
    {ORRE_MAPSEC_THE_UNDER_SUBWAY,   ORRE_MAPSEC_REALGAM_TOWER},   // 57
    {ORRE_MAPSEC_THE_UNDER_SUBWAY,   ORRE_MAPSEC_REALGAM_TOWER},   // 58
    {ORRE_MAPSEC_THE_UNDER_SUBWAY,   ORRE_MAPSEC_REALGAM_TOWER},   // 59
    {ORRE_MAPSEC_THE_UNDER_SUBWAY,   ORRE_MAPSEC_REALGAM_TOWER},   // 60
    {ORRE_MAPSEC_THE_UNDER_SUBWAY,   ORRE_MAPSEC_REALGAM_TOWER},   // 61
    {ORRE_MAPSEC_THE_UNDER,          ORRE_MAPSEC_DISTANT_LAND},    // 62
    {ORRE_MAPSEC_UNDER_COLOSSEUM,    ORRE_MAPSEC_DISTANT_LAND},    // 63
    {ORRE_MAPSEC_DEEP_COLOSSEUM,     ORRE_MAPSEC_CIPHER_KEY_LAIR}, // 64
    {ORRE_MAPSEC_FRONT_OF_LAB,       ORRE_MAPSEC_CIPHER_KEY_LAIR}, // 65
    {ORRE_MAPSEC_LABORATORY,         ORRE_MAPSEC_CIPHER_KEY_LAIR}, // 66
    {ORRE_MAPSEC_LABORATORY,         ORRE_MAPSEC_CIPHER_KEY_LAIR}, // 67
    {ORRE_MAPSEC_LABORATORY,         ORRE_MAPSEC_CIPHER_KEY_LAIR}, // 68
    {ORRE_MAPSEC_LABORATORY,         ORRE_MAPSEC_CIPHER_KEY_LAIR}, // 69
    {ORRE_MAPSEC_LABORATORY,         ORRE_MAPSEC_CIPHER_KEY_LAIR}, // 70
    {ORRE_MAPSEC_LABORATORY,         ORRE_MAPSEC_CIPHER_KEY_LAIR}, // 71
    {ORRE_MAPSEC_LABORATORY,         ORRE_MAPSEC_CITADARK_ISLE},   // 72
    {ORRE_MAPSEC_LABORATORY,         ORRE_MAPSEC_CITADARK_ISLE},   // 73
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 74
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 75
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 76
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 77
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 78
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 79
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 80
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 81
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 82
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 83
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 84
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 85
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 86
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 87
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 88
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_CITADARK_ISLE},   // 89
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_POKE_SPOT_ROCK},  // 90
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_POKE_SPOT_OASIS}, // 91
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_POKE_SPOT_CAVE},  // 92
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_PHENAC_CITY},     // 93
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_PHENAC_CITY},     // 94
    {ORRE_MAPSEC_MT_BATTLE_COLOSSEUM,ORRE_MAPSEC_PHENAC_CITY},     // 95
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_PHENAC_CITY},     // 96
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_PHENAC_CITY},     // 97
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_PHENAC_CITY},     // 98
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_PHENAC_CITY},     // 99
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_PHENAC_CITY},     // 100
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_PHENAC_CITY},     // 101
    {ORRE_MAPSEC_REALGAM_TOWER,      ORRE_MAPSEC_PHENAC_CITY},     // 102
    {ORRE_MAPSEC_REALGAM_TOWER_DOME, ORRE_MAPSEC_PHENAC_CITY},     // 103
    {ORRE_MAPSEC_REALGAM_TOWER_DOME, ORRE_MAPSEC_PHENAC_CITY},     // 104
    {ORRE_MAPSEC_REALGAM_TOWER_DOME, ORRE_MAPSEC_PHENAC_CITY},     // 105
    {ORRE_MAPSEC_REALGAM_TOWER_DOME, ORRE_MAPSEC_PHENAC_CITY},     // 106
    {ORRE_MAPSEC_REALGAM_TOWER_DOME, ORRE_MAPSEC_PHENAC_CITY},     // 107
    {ORRE_MAPSEC_REALGAM_TOWER_DOME, ORRE_MAPSEC_PYRITE_TOWN},     // 108
    {ORRE_MAPSEC_REALGAM_TOWER_DOME, ORRE_MAPSEC_PYRITE_TOWN},     // 109
    {ORRE_MAPSEC_REALGAM_TOWER_DOME, ORRE_MAPSEC_PYRITE_TOWN},     // 110
    {ORRE_MAPSEC_REALGAM_TOWER_DOME, ORRE_MAPSEC_PYRITE_TOWN},     // 111
    {ORRE_MAPSEC_REALGAM_TOWER_DOME, ORRE_MAPSEC_PYRITE_TOWN},     // 112
    {ORRE_MAPSEC_REALGAM_TOWER_DOME, ORRE_MAPSEC_PYRITE_TOWN},     // 113
    {ORRE_MAPSEC_REALGAM_TOWER_LOBBY,ORRE_MAPSEC_DISTANT_LAND},    // 114
    {ORRE_MAPSEC_REALGAM_TOWER,      ORRE_MAPSEC_PYRITE_TOWN},     // 115
    {ORRE_MAPSEC_REALGAM_TOWER,      ORRE_MAPSEC_PYRITE_TOWN},     // 116
    {ORRE_MAPSEC_REALGAM_TOWER,      ORRE_MAPSEC_PYRITE_TOWN},     // 117
    {ORRE_MAPSEC_TOWER_COLOSSEUM,    ORRE_MAPSEC_PYRITE_TOWN},     // 118
    {ORRE_MAPSEC_PHENAC_CITY,        ORRE_MAPSEC_PYRITE_TOWN},     // 119
    {ORRE_MAPSEC_PYRITE_COLOSSEUM,   ORRE_MAPSEC_PYRITE_TOWN},     // 120
    {ORRE_MAPSEC_UNDER_COLOSSEUM,    ORRE_MAPSEC_PYRITE_TOWN},     // 121
    {ORRE_MAPSEC_THE_UNDER,          ORRE_MAPSEC_PYRITE_TOWN},     // 122
    {ORRE_MAPSEC_REALGAM_TOWER,      ORRE_MAPSEC_PYRITE_TOWN},     // 123
    {ORRE_MAPSEC_REALGAM_TOWER,      ORRE_MAPSEC_DISTANT_LAND},    // 124
    {ORRE_MAPSEC_DEEP_COLOSSEUM,     ORRE_MAPSEC_AGATE_VILLAGE},   // 125
    {ORRE_MAPSEC_ORRE_COLOSSEUM,     ORRE_MAPSEC_AGATE_VILLAGE},   // 126
    {ORRE_MAPSEC_THE_UNDER,          ORRE_MAPSEC_AGATE_VILLAGE},   // 127
    {ORRE_MAPSEC_PHENAC_CITY,        ORRE_MAPSEC_AGATE_VILLAGE},   // 128 // Colosseum; Pok�mon from the eReader are obtained here
    {ORRE_MAPSEC_SNAGEM_HIDEOUT,     ORRE_MAPSEC_AGATE_VILLAGE},   // 129
    {ORRE_MAPSEC_SNAGEM_HIDEOUT,     ORRE_MAPSEC_AGATE_VILLAGE},   // 130
    {ORRE_MAPSEC_SNAGEM_HIDEOUT,     ORRE_MAPSEC_AGATE_VILLAGE},   // 131
    {ORRE_MAPSEC_SNAGEM_HIDEOUT,     ORRE_MAPSEC_AGATE_VILLAGE},   // 132
    {ORRE_MAPSEC_SNAGEM_HIDEOUT,     ORRE_MAPSEC_AGATE_VILLAGE},   // 133
    {ORRE_MAPSEC_SNAGEM_HIDEOUT,     ORRE_MAPSEC_AGATE_VILLAGE},   // 134
    {ORRE_MAPSEC_SNAGEM_HIDEOUT,     ORRE_MAPSEC_AGATE_VILLAGE},   // 135
    {ORRE_MAPSEC_SNAGEM_HIDEOUT,     ORRE_MAPSEC_DISTANT_LAND},    // 136
    {ORRE_MAPSEC_SNAGEM_HIDEOUT,     ORRE_MAPSEC_DISTANT_LAND},    // 137
    {ORRE_MAPSEC_THE_UNDER_SUBWAY,   ORRE_MAPSEC_POKEMON_HQ_LAB},  // 138
    {ORRE_MAPSEC_THE_UNDER_SUBWAY,   ORRE_MAPSEC_POKEMON_HQ_LAB},  // 139
    {ORRE_MAPSEC_LABORATORY,         ORRE_MAPSEC_POKEMON_HQ_LAB},  // 140
    {ORRE_MAPSEC_LABORATORY,         ORRE_MAPSEC_POKEMON_HQ_LAB},  // 141
    {ORRE_MAPSEC_PYRITE_COLOSSEUM,   ORRE_MAPSEC_POKEMON_HQ_LAB},  // 142
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_POKEMON_HQ_LAB},  // 143
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 144
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 145
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 146
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 147
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 148
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 149
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 150
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 151
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 152
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 153
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 154
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 155
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 156
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 157
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 158
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 159
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 160
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 161
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_GATEON_PORT},     // 162
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_OUTSKIRT_STAND},  // 163
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_OUTSKIRT_STAND},  // 164
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_SNAGEM_HIDEOUT},  // 165
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_SNAGEM_HIDEOUT},  // 166
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_SNAGEM_HIDEOUT},  // 167
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_SNAGEM_HIDEOUT},  // 168
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_KAMINKOS_HOUSE},  // 169
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_KAMINKOS_HOUSE},  // 170
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_KAMINKOS_HOUSE},  // 171
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_KAMINKOS_HOUSE},  // 172
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_KAMINKOS_HOUSE},  // 173
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_ORRE_COLOSSEUM},  // 174
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 175
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 176
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 177
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 178
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 179
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 180
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_PHENAC_CITY},     // 181
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 182
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 183
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 184
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 185
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 186
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 187
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 188
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 189
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 190
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 191
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 192
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 193
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 194
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 195
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 196
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 197
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 198
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 199
    {ORRE_MAPSEC_OUTSKIRT_STAND,     ORRE_MAPSEC_DISTANT_LAND},    // 200
    {ORRE_MAPSEC_SNAGEM_HIDEOUT,     ORRE_MAPSEC_DISTANT_LAND},    // 201
    {ORRE_MAPSEC_PHENAC_CITY,        ORRE_MAPSEC_DISTANT_LAND},    // 202
    {ORRE_MAPSEC_PRE_GYM,            ORRE_MAPSEC_DISTANT_LAND},    // 203
    {ORRE_MAPSEC_MAYORS_HOUSE,       ORRE_MAPSEC_DISTANT_LAND},    // 204
    {ORRE_MAPSEC_PYRITE_TOWN,        ORRE_MAPSEC_DISTANT_LAND},    // 205
    {ORRE_MAPSEC_PYRITE_CAVE,        ORRE_MAPSEC_DISTANT_LAND},    // 206
    {ORRE_MAPSEC_PYRITE_BUILDING,    ORRE_MAPSEC_DISTANT_LAND},    // 207
    {ORRE_MAPSEC_AGATE_VILLAGE,      ORRE_MAPSEC_DISTANT_LAND},    // 208
    {ORRE_MAPSEC_AGATE_VILLAGE,      ORRE_MAPSEC_DISTANT_LAND},    // 209
    {ORRE_MAPSEC_RELIC_CAVE,         ORRE_MAPSEC_DISTANT_LAND},    // 210
    {ORRE_MAPSEC_THE_UNDER,          ORRE_MAPSEC_DISTANT_LAND},    // 211
    {ORRE_MAPSEC_THE_UNDER,          ORRE_MAPSEC_DISTANT_LAND},    // 212
    {ORRE_MAPSEC_THE_UNDER_SUBWAY,   ORRE_MAPSEC_DISTANT_LAND},    // 213
    {ORRE_MAPSEC_FRONT_OF_LAB,       ORRE_MAPSEC_DISTANT_LAND},    // 214
    {ORRE_MAPSEC_LABORATORY,         ORRE_MAPSEC_DISTANT_LAND},    // 215
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_DISTANT_LAND},    // 216
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_DISTANT_LAND},    // 217
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_DISTANT_LAND},    // 218
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_DISTANT_LAND},    // 219
    {ORRE_MAPSEC_MT_BATTLE,          ORRE_MAPSEC_DISTANT_LAND},    // 220
    {ORRE_MAPSEC_REALGAM_TOWER_DOME, ORRE_MAPSEC_DISTANT_LAND},    // 221
    {ORRE_MAPSEC_REALGAM_TOWER_LOBBY,ORRE_MAPSEC_DISTANT_LAND},    // 222
    {ORRE_MAPSEC_REALGAM_TOWER,      ORRE_MAPSEC_DISTANT_LAND},    // 223
    {ORRE_MAPSEC_REALGAM_TOWER,      ORRE_MAPSEC_DISTANT_LAND},    // 224
    {ORRE_MAPSEC_REALGAM_TOWER,      ORRE_MAPSEC_DISTANT_LAND},    // 225
    {ORRE_MAPSEC_REALGAM_TOWER,      ORRE_MAPSEC_DISTANT_LAND},    // 226
    {ORRE_MAPSEC_TOWER_COLOSSEUM,    ORRE_MAPSEC_DISTANT_LAND},    // 227
    {ORRE_MAPSEC_MT_BATTLE_COLOSSEUM,ORRE_MAPSEC_DISTANT_LAND},    // 228
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 229
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 230
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 231
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 232
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 233
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 234
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 235
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 236
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 237
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 238
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 239
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 240
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 241
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 242
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 243
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 244
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 245
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 246
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 247
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 248
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 249
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 250
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 251
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 252
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 253
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND},    // 254
    {ORRE_MAPSEC_DISTANT_LAND,       ORRE_MAPSEC_DISTANT_LAND}     // 255
};

#endif // GUARD_ORRE_MET_LOCATIONS_H
