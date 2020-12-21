#ifndef GUARD_TRAINERS_H
#define GUARD_TRAINERS_H

#include "constants/opponents.h"
#include "constants/battle_frontier_trainers.h"

// Special Trainer Ids.
//      0-299 are frontier trainers
#define TRAINER_RECORD_MIXING_FRIEND        FRONTIER_TRAINERS_COUNT
#define TRAINER_RECORD_MIXING_APPRENTICE    400
#define TRAINER_EREADER                     500
#define TRAINER_FRONTIER_BRAIN              1022
#define TRAINER_PLAYER                      1023
#define TRAINER_SECRET_BASE                 1024
#define TRAINER_LINK_OPPONENT               2048
#define TRAINER_UNION_ROOM                  3072
#define TRAINER_STEVEN_PARTNER              3075

#define TRAINER_PIC_YOUNGSTER                    0
#define TRAINER_PIC_BUG_CATCHER                  1
#define TRAINER_PIC_LASS                         2
#define TRAINER_PIC_SAILOR                       3
#define TRAINER_PIC_CAMPER                       4
#define TRAINER_PIC_PICNICKER                    5
#define TRAINER_PIC_POKEMANIAC                   6
#define TRAINER_PIC_SUPER_NERD                   7
#define TRAINER_PIC_HIKER                        8
#define TRAINER_PIC_BIKER                        9
#define TRAINER_PIC_BURGLAR                     10
#define TRAINER_PIC_ENGINEER                    11
#define TRAINER_PIC_FISHERMAN                   12
#define TRAINER_PIC_SWIMMER_M                   13
#define TRAINER_PIC_CUE_BALL                    14
#define TRAINER_PIC_GAMER                       15
#define TRAINER_PIC_BEAUTY                      16
#define TRAINER_PIC_SWIMMER_F                   17
#define TRAINER_PIC_PSYCHIC_M                   18
#define TRAINER_PIC_ROCKER                      19
#define TRAINER_PIC_JUGGLER                     20
#define TRAINER_PIC_TAMER                       21
#define TRAINER_PIC_BIRD_KEEPER                 22
#define TRAINER_PIC_BLACK_BELT                  23
#define TRAINER_PIC_RIVAL_1                     24
#define TRAINER_PIC_SCIENTIST                   25
#define TRAINER_PIC_GIOVANNI                    26
#define TRAINER_PIC_ROCKET_GRUNT_M              27
#define TRAINER_PIC_COOLTRAINER_M               28
#define TRAINER_PIC_COOLTRAINER_F               29
#define TRAINER_PIC_LORELEI                     30
#define TRAINER_PIC_BRUNO                       31
#define TRAINER_PIC_AGATHA                      32
#define TRAINER_PIC_LANCE                       33
#define TRAINER_PIC_BROCK                       34
#define TRAINER_PIC_MISTY                       35
#define TRAINER_PIC_LT_SURGE                    36
#define TRAINER_PIC_ERIKA                       37
#define TRAINER_PIC_KOGA                        38
#define TRAINER_PIC_BLAINE                      39
#define TRAINER_PIC_SABRINA                     40
#define TRAINER_PIC_GENTLEMAN                   41
#define TRAINER_PIC_RIVAL_2                     42
#define TRAINER_PIC_CHAMPION_RIVAL              43
#define TRAINER_PIC_CHANNELER                   44
#define TRAINER_PIC_TWINS                       45
#define TRAINER_PIC_COOL_COUPLE                 46
#define TRAINER_PIC_YOUNG_COUPLE                47
#define TRAINER_PIC_CRUSH_KIN                   48
#define TRAINER_PIC_SIS_AND_BRO                 49
#define TRAINER_PIC_PROFESSOR_OAK               50
#define TRAINER_PIC_ROCKET_GRUNT_F              51
#define TRAINER_PIC_PSYCHIC_F                   52
#define TRAINER_PIC_CRUSH_GIRL                  53
#define TRAINER_PIC_TUBER_F                     54
#define TRAINER_PIC_TUBER_M                     55
#define TRAINER_PIC_PKMN_BREEDER_F              56
#define TRAINER_PIC_PKMN_RANGER_M               57
#define TRAINER_PIC_PKMN_RANGER_F               58
#define TRAINER_PIC_AROMA_LADY                  59
#define TRAINER_PIC_RUIN_MANIAC                 60
#define TRAINER_PIC_LADY                        61
#define TRAINER_PIC_PAINTER                     62
#define TRAINER_PIC_PKMN_FAN_CLUB_PRESIDENT     63
#define HOENN_TRAINER_PIC_HIKER                 64
#define HOENN_TRAINER_PIC_PKMN_BREEDER_F        65
#define HOENN_TRAINER_PIC_COOLTRAINER_M         66
#define HOENN_TRAINER_PIC_BIRD_KEEPER           67
#define HOENN_TRAINER_PIC_COLLECTOR             68
#define HOENN_TRAINER_PIC_SWIMMER_M             69
#define HOENN_TRAINER_PIC_EXPERT_M              70
#define HOENN_TRAINER_PIC_BLACK_BELT            71
#define HOENN_TRAINER_PIC_HEX_MANIAC            72
#define HOENN_TRAINER_PIC_AROMA_LADY            73
#define HOENN_TRAINER_PIC_RUIN_MANIAC           74
#define HOENN_TRAINER_PIC_INTERVIEWER           75
#define HOENN_TRAINER_PIC_TUBER_F               76
#define HOENN_TRAINER_PIC_TUBER_M               77
#define HOENN_TRAINER_PIC_COOLTRAINER_F         78
#define HOENN_TRAINER_PIC_LADY                  79
#define HOENN_TRAINER_PIC_BEAUTY                80
#define HOENN_TRAINER_PIC_RICH_BOY              81
#define HOENN_TRAINER_PIC_EXPERT_F              82
#define HOENN_TRAINER_PIC_POKEMANIAC            83
#define HOENN_TRAINER_PIC_GUITARIST             84
#define HOENN_TRAINER_PIC_KINDLER               85
#define HOENN_TRAINER_PIC_CAMPER                86
#define HOENN_TRAINER_PIC_PICNICKER             87
#define HOENN_TRAINER_PIC_BUG_MANIAC            88
#define HOENN_TRAINER_PIC_PKMN_BREEDER_M        89
#define HOENN_TRAINER_PIC_PSYCHIC_M             90
#define HOENN_TRAINER_PIC_PSYCHIC_F             91
#define HOENN_TRAINER_PIC_GENTLEMAN             92
#define HOENN_TRAINER_PIC_SCHOOL_KID_M          93
#define HOENN_TRAINER_PIC_SCHOOL_KID_F          94
#define HOENN_TRAINER_PIC_POKEFAN_M             95
#define HOENN_TRAINER_PIC_POKEFAN_F             96
#define HOENN_TRAINER_PIC_YOUNGSTER             97
#define HOENN_TRAINER_PIC_FISHERMAN             98
#define HOENN_TRAINER_PIC_CYCLING_TRIATHLETE_M  99
#define HOENN_TRAINER_PIC_CYCLING_TRIATHLETE_F  100
#define HOENN_TRAINER_PIC_RUNNING_TRIATHLETE_M  101
#define HOENN_TRAINER_PIC_RUNNING_TRIATHLETE_F  102
#define HOENN_TRAINER_PIC_SWIMMING_TRIATHLETE_M 103
#define HOENN_TRAINER_PIC_SWIMMING_TRIATHLETE_F 104
#define HOENN_TRAINER_PIC_DRAGON_TAMER          105
#define HOENN_TRAINER_PIC_NINJA_BOY             106
#define HOENN_TRAINER_PIC_BATTLE_GIRL           107
#define HOENN_TRAINER_PIC_PARASOL_LADY          108
#define HOENN_TRAINER_PIC_SWIMMER_F             109
#define HOENN_TRAINER_PIC_SAILOR                110
#define HOENN_TRAINER_PIC_BUG_CATCHER           111
#define HOENN_TRAINER_PIC_PKMN_RANGER_M         112
#define HOENN_TRAINER_PIC_PKMN_RANGER_F         113
#define HOENN_TRAINER_PIC_LASS                  114
#define HOENN_TRAINER_PIC_ANABEL                115
#define HOENN_TRAINER_PIC_TUCKER                116
#define HOENN_TRAINER_PIC_SPENSER               117
#define HOENN_TRAINER_PIC_GRETA                 118
#define HOENN_TRAINER_PIC_NOLAND                119
#define HOENN_TRAINER_PIC_LUCY                  120
#define HOENN_TRAINER_PIC_BRANDON               121
#define HOENN_TRAINER_PIC_SCOTT                 122
#define TRAINER_PIC_RED                         123
#define TRAINER_PIC_LEAF                        124
#define TRAINER_PIC_E_BRENDAN                   125
#define TRAINER_PIC_E_MAY                       126
#define TRAINER_PIC_RS_BRENDAN                  127
#define TRAINER_PIC_RS_MAY                      128

#define TRAINER_BACK_PIC_RED                     0
#define TRAINER_BACK_PIC_LEAF                    1
#define TRAINER_BACK_PIC_POKE_DUDE               2
#define TRAINER_BACK_PIC_OLD_MAN                 3
#define TRAINER_BACK_PIC_E_BRENDAN               4
#define TRAINER_BACK_PIC_E_MAY                   5
#define TRAINER_BACK_PIC_RS_BRENDAN              6
#define TRAINER_BACK_PIC_RS_MAY                  7

#define FACILITY_CLASS_YOUNGSTER                   0
#define FACILITY_CLASS_BUG_CATCHER                 1
#define FACILITY_CLASS_LASS                        2
#define FACILITY_CLASS_SAILOR                      3
#define FACILITY_CLASS_CAMPER                      4
#define FACILITY_CLASS_PICNICKER                   5
#define FACILITY_CLASS_POKEMANIAC                  6 
#define FACILITY_CLASS_SUPER_NERD                  7
#define FACILITY_CLASS_HIKER                       8
#define FACILITY_CLASS_BIKER                       9
#define FACILITY_CLASS_BURGLAR                     10
#define FACILITY_CLASS_ENGINEER                    11
#define FACILITY_CLASS_FISHERMAN                   12
#define FACILITY_CLASS_SWIMMER_M                   13
#define FACILITY_CLASS_CUE_BALL                    14
#define FACILITY_CLASS_GAMER                       15
#define FACILITY_CLASS_BEAUTY                      16
#define FACILITY_CLASS_SWIMMER_F                   17
#define FACILITY_CLASS_PSYCHIC_M                   18
#define FACILITY_CLASS_ROCKER                      19
#define FACILITY_CLASS_JUGGLER                     20
#define FACILITY_CLASS_TAMER                       21
#define FACILITY_CLASS_BIRD_KEEPER                 22
#define FACILITY_CLASS_BLACK_BELT                  23
#define FACILITY_CLASS_SCIENTIST                   24
#define FACILITY_CLASS_COOLTRAINER_M               25
#define FACILITY_CLASS_COOLTRAINER_F               26
#define FACILITY_CLASS_GENTLEMAN                   27
#define FACILITY_CLASS_CHANNELER                   28
#define FACILITY_CLASS_TWINS                       29
#define FACILITY_CLASS_COOL_COUPLE                 30
#define FACILITY_CLASS_YOUNG_COUPLE                31
#define FACILITY_CLASS_CRUSH_KIN                   32
#define FACILITY_CLASS_PSYCHIC_F                   33
#define FACILITY_CLASS_CRUSH_GIRL                  34
#define FACILITY_CLASS_TUBER_F                     35
#define FACILITY_CLASS_PKMN_BREEDER_F              36
#define FACILITY_CLASS_PKMN_RANGER_M               37
#define FACILITY_CLASS_PKMN_RANGER_F               38
#define FACILITY_CLASS_AROMA_LADY                  39
#define FACILITY_CLASS_RUIN_MANIAC                 40
#define FACILITY_CLASS_LADY                        41
#define FACILITY_CLASS_PAINTER                     42
#define HOENN_FACILITY_CLASS_HIKER                 43
#define HOENN_FACILITY_CLASS_PKMN_BREEDER_F        44
#define HOENN_FACILITY_CLASS_COOLTRAINER_M         45
#define HOENN_FACILITY_CLASS_BIRD_KEEPER           46
#define HOENN_FACILITY_CLASS_COLLECTOR             47
#define HOENN_FACILITY_CLASS_SWIMMER_M             48
#define HOENN_FACILITY_CLASS_EXPERT_M              49
#define HOENN_FACILITY_CLASS_BLACK_BELT            50
#define HOENN_FACILITY_CLASS_HEX_MANIAC            51
#define HOENN_FACILITY_CLASS_AROMA_LADY            52
#define HOENN_FACILITY_CLASS_RUIN_MANIAC           53
#define HOENN_FACILITY_CLASS_TUBER_F               54
#define HOENN_FACILITY_CLASS_TUBER_M               55
#define HOENN_FACILITY_CLASS_COOLTRAINER_F         56
#define HOENN_FACILITY_CLASS_LADY                  57
#define HOENN_FACILITY_CLASS_BEAUTY                58
#define HOENN_FACILITY_CLASS_RICH_BOY              59
#define HOENN_FACILITY_CLASS_EXPERT_F              60
#define HOENN_FACILITY_CLASS_POKEMANIAC            61
#define HOENN_FACILITY_CLASS_GUITARIST             62
#define HOENN_FACILITY_CLASS_KINDLER               63
#define HOENN_FACILITY_CLASS_CAMPER                64
#define HOENN_FACILITY_CLASS_PICNICKER             65
#define HOENN_FACILITY_CLASS_BUG_MANIAC            66
#define HOENN_FACILITY_CLASS_PSYCHIC_M             67
#define HOENN_FACILITY_CLASS_PSYCHIC_F             68
#define HOENN_FACILITY_CLASS_GENTLEMAN             69
#define HOENN_FACILITY_CLASS_SCHOOL_KID_M          70
#define HOENN_FACILITY_CLASS_SCHOOL_KID_F          71
#define HOENN_FACILITY_CLASS_POKEFAN_M             72
#define HOENN_FACILITY_CLASS_POKEFAN_F             73
#define HOENN_FACILITY_CLASS_YOUNGSTER             74
#define HOENN_FACILITY_CLASS_FISHERMAN             75
#define HOENN_FACILITY_CLASS_CYCLING_TRIATHLETE_M  76
#define HOENN_FACILITY_CLASS_CYCLING_TRIATHLETE_F  77
#define HOENN_FACILITY_CLASS_RUNNING_TRIATHLETE_M  78
#define HOENN_FACILITY_CLASS_RUNNING_TRIATHLETE_F  79
#define HOENN_FACILITY_CLASS_SWIMMING_TRIATHLETE_M 80
#define HOENN_FACILITY_CLASS_SWIMMING_TRIATHLETE_F 81
#define HOENN_FACILITY_CLASS_DRAGON_TAMER          82
#define HOENN_FACILITY_CLASS_NINJA_BOY             83
#define HOENN_FACILITY_CLASS_BATTLE_GIRL           84
#define HOENN_FACILITY_CLASS_PARASOL_LADY          85
#define HOENN_FACILITY_CLASS_SWIMMER_F             86
#define HOENN_FACILITY_CLASS_SAILOR                87
#define HOENN_FACILITY_CLASS_PKMN_BREEDER_M        88
#define HOENN_FACILITY_CLASS_BUG_CATCHER           89
#define HOENN_FACILITY_CLASS_PKMN_RANGER_M         90
#define HOENN_FACILITY_CLASS_PKMN_RANGER_F         91
#define HOENN_FACILITY_CLASS_LASS                  92
#define HOENN_FACILITY_CLASS_SALON_MAIDEN          93
#define HOENN_FACILITY_CLASS_DOME_ACE              94
#define FACILITY_CLASS_RED                         95
#define FACILITY_CLASS_LEAF                        96
#define FACILITY_CLASS_E_BRENDAN                   97
#define FACILITY_CLASS_E_MAY                       98
#define FACILITY_CLASS_RS_BRENDAN                  99
#define FACILITY_CLASS_RS_MAY                      100

#define FACILITY_CLASSES_COUNT                     101

#define RS_FACILITY_CLASS_AQUA_LEADER_ARCHIE    0
#define RS_FACILITY_CLASS_AQUA_GRUNT_M          1
#define RS_FACILITY_CLASS_AQUA_GRUNT_F          2
#define RS_FACILITY_CLASS_AROMA_LADY            3
#define RS_FACILITY_CLASS_RUIN_MANIAC           4
#define RS_FACILITY_CLASS_INTERVIEWER           5
#define RS_FACILITY_CLASS_TUBER_F               6
#define RS_FACILITY_CLASS_TUBER_M               7
#define RS_FACILITY_CLASS_COOLTRAINER_M         8
#define RS_FACILITY_CLASS_COOLTRAINER_F         9
#define RS_FACILITY_CLASS_HEX_MANIAC            10
#define RS_FACILITY_CLASS_LADY                  11
#define RS_FACILITY_CLASS_BEAUTY                12
#define RS_FACILITY_CLASS_RICH_BOY              13
#define RS_FACILITY_CLASS_POKEMANIAC            14
#define RS_FACILITY_CLASS_SWIMMER_M             15
#define RS_FACILITY_CLASS_BLACK_BELT            16
#define RS_FACILITY_CLASS_GUITARIST             17
#define RS_FACILITY_CLASS_KINDLER               18
#define RS_FACILITY_CLASS_CAMPER                19
#define RS_FACILITY_CLASS_BUG_MANIAC            20
#define RS_FACILITY_CLASS_PSYCHIC_M             21
#define RS_FACILITY_CLASS_PSYCHIC_F             22
#define RS_FACILITY_CLASS_GENTLEMAN             23
#define RS_FACILITY_CLASS_ELITE_FOUR_M          24
#define RS_FACILITY_CLASS_ELITE_FOUR_F          25
#define RS_FACILITY_CLASS_LEADER_F              26
#define RS_FACILITY_CLASS_LEADER_M              27
#define RS_FACILITY_CLASS_LEADER_MF             28
#define RS_FACILITY_CLASS_SCHOOL_KID_M          29
#define RS_FACILITY_CLASS_SCHOOL_KID_F          30
#define RS_FACILITY_CLASS_SR_AND_JR             31
#define RS_FACILITY_CLASS_POKEFAN_M             32
#define RS_FACILITY_CLASS_POKEFAN_F             33
#define RS_FACILITY_CLASS_EXPERT_M              34
#define RS_FACILITY_CLASS_EXPERT_F              35
#define RS_FACILITY_CLASS_YOUNGSTER             36
#define RS_FACILITY_CLASS_CHAMPION              37
#define RS_FACILITY_CLASS_FISHERMAN             38
#define RS_FACILITY_CLASS_CYCLING_TRIATHLETE_M  39
#define RS_FACILITY_CLASS_CYCLING_TRIATHLETE_F  40
#define RS_FACILITY_CLASS_RUNNING_TRIATHLETE_M  41
#define RS_FACILITY_CLASS_RUNNING_TRIATHLETE_F  42
#define RS_FACILITY_CLASS_SWIMMING_TRIATHLETE_M 43
#define RS_FACILITY_CLASS_SWIMMING_TRIATHLETE_F 44
#define RS_FACILITY_CLASS_DRAGON_TAMER          45
#define RS_FACILITY_CLASS_BIRD_KEEPER           46
#define RS_FACILITY_CLASS_NINJA_BOY             47
#define RS_FACILITY_CLASS_BATTLE_GIRL           48
#define RS_FACILITY_CLASS_PARASOL_LADY          49
#define RS_FACILITY_CLASS_SWIMMER_F             50
#define RS_FACILITY_CLASS_PICNICKER             51
#define RS_FACILITY_CLASS_TWINS                 52
#define RS_FACILITY_CLASS_SAILOR                53
#define RS_FACILITY_CLASS_BOARDER_1             54
#define RS_FACILITY_CLASS_BOARDER_2             55
#define RS_FACILITY_CLASS_COLLECTOR             56
#define RS_FACILITY_CLASS_WALLY                 57
#define RS_FACILITY_CLASS_BRENDAN_1             58
#define RS_FACILITY_CLASS_BRENDAN_2             59
#define RS_FACILITY_CLASS_BRENDAN_3             60
#define RS_FACILITY_CLASS_MAY_1                 61
#define RS_FACILITY_CLASS_MAY_2                 62
#define RS_FACILITY_CLASS_MAY_3                 63
#define RS_FACILITY_CLASS_PKMN_BREEDER_M        64
#define RS_FACILITY_CLASS_PKMN_BREEDER_F        65
#define RS_FACILITY_CLASS_PKMN_RANGER_M         66
#define RS_FACILITY_CLASS_PKMN_RANGER_F         67
#define RS_FACILITY_CLASS_MAGMA_LEADER          68
#define RS_FACILITY_CLASS_MAGMA_GRUNT_M         69
#define RS_FACILITY_CLASS_MAGMA_GRUNT_F         70
#define RS_FACILITY_CLASS_LASS                  71
#define RS_FACILITY_CLASS_BUG_CATCHER           72
#define RS_FACILITY_CLASS_HIKER                 73
#define RS_FACILITY_CLASS_YOUNG_COUPLE          74
#define RS_FACILITY_CLASS_OLD_COUPLE            75
#define RS_FACILITY_CLASS_SIS_AND_BRO           76

#define RS_FACILITY_CLASSES_COUNT               77

#define TRAINER_CLASS_YOUNGSTER              0
#define TRAINER_CLASS_BUG_CATCHER            1
#define TRAINER_CLASS_LASS                   2
#define TRAINER_CLASS_SAILOR                 3
#define TRAINER_CLASS_CAMPER                 4
#define TRAINER_CLASS_PICNICKER              5
#define TRAINER_CLASS_POKEMANIAC             6
#define TRAINER_CLASS_SUPER_NERD             7
#define TRAINER_CLASS_HIKER                  8
#define TRAINER_CLASS_BIKER                  9
#define TRAINER_CLASS_BURGLAR               10
#define TRAINER_CLASS_ENGINEER              11
#define TRAINER_CLASS_FISHERMAN             12
#define TRAINER_CLASS_SWIMMER_M             13
#define TRAINER_CLASS_CUE_BALL              14
#define TRAINER_CLASS_GAMER                 15
#define TRAINER_CLASS_BEAUTY                16
#define TRAINER_CLASS_SWIMMER_F             17
#define TRAINER_CLASS_PSYCHIC               18
#define TRAINER_CLASS_ROCKER                19
#define TRAINER_CLASS_JUGGLER               20
#define TRAINER_CLASS_TAMER                 21
#define TRAINER_CLASS_BIRD_KEEPER           22
#define TRAINER_CLASS_BLACK_BELT            23
#define TRAINER_CLASS_RIVAL_1               24
#define TRAINER_CLASS_SCIENTIST             25
#define TRAINER_CLASS_BOSS                  26
#define TRAINER_CLASS_TEAM_ROCKET           27
#define TRAINER_CLASS_COOLTRAINER           28
#define TRAINER_CLASS_LEADER                29
#define TRAINER_CLASS_ELITE_FOUR            30
#define TRAINER_CLASS_GENTLEMAN             31
#define TRAINER_CLASS_RIVAL_2               32
#define TRAINER_CLASS_CHAMPION              33
#define TRAINER_CLASS_CHANNELER             34
#define TRAINER_CLASS_TWINS                 35
#define TRAINER_CLASS_COOL_COUPLE           36
#define TRAINER_CLASS_YOUNG_COUPLE          37
#define TRAINER_CLASS_CRUSH_KIN             38
#define TRAINER_CLASS_SIS_AND_BRO           39
#define TRAINER_CLASS_PKMN_PROF             40
#define TRAINER_CLASS_CRUSH_GIRL            41
#define TRAINER_CLASS_TUBER                 42
#define TRAINER_CLASS_PKMN_BREEDER          43
#define TRAINER_CLASS_PKMN_RANGER           44
#define TRAINER_CLASS_AROMA_LADY            45
#define TRAINER_CLASS_RUIN_MANIAC           46
#define TRAINER_CLASS_LADY                  47
#define TRAINER_CLASS_PAINTER               48
#define TRAINER_CLASS_PKMN_FAN_CLUB_PRESIDENT   49
#define HOENN_TRAINER_CLASS_COLLECTOR       50
#define HOENN_TRAINER_CLASS_EXPERT          51
#define HOENN_TRAINER_CLASS_HEX_MANIAC      52
#define HOENN_TRAINER_CLASS_RICH_BOY        53
#define HOENN_TRAINER_CLASS_GUITARIST       54
#define HOENN_TRAINER_CLASS_KINDLER         55
#define HOENN_TRAINER_CLASS_BUG_MANIAC      56
#define HOENN_TRAINER_CLASS_SCHOOL_KID      57
#define HOENN_TRAINER_CLASS_POKEFAN         58
#define HOENN_TRAINER_CLASS_TRIATHLETE      59
#define HOENN_TRAINER_CLASS_DRAGON_TAMER    60
#define HOENN_TRAINER_CLASS_NINJA_BOY       61
#define HOENN_TRAINER_CLASS_BATTLE_GIRL     62
#define HOENN_TRAINER_CLASS_PARASOL_LADY    63
#define HOENN_TRAINER_CLASS_SALON_MAIDEN    64
#define HOENN_TRAINER_CLASS_DOME_ACE        65
#define HOENN_TRAINER_CLASS_PALACE_MAVEN    66
#define HOENN_TRAINER_CLASS_ARENA_TYCOON    67
#define HOENN_TRAINER_CLASS_FACTORY_HEAD    68
#define HOENN_TRAINER_CLASS_PIKE_QUEEN      69
#define HOENN_TRAINER_CLASS_PYRAMID_KING    70
#define HOENN_TRAINER_CLASS_PKMN_TRAINER    71

#define TRAINER_ENCOUNTER_MUSIC_MALE         0 // standard male encounter music
#define TRAINER_ENCOUNTER_MUSIC_FEMALE       1 // standard female encounter music
#define TRAINER_ENCOUNTER_MUSIC_GIRL         2 // used for male Tubers and Young Couples too
#define TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS   3
#define TRAINER_ENCOUNTER_MUSIC_INTENSE      4
#define TRAINER_ENCOUNTER_MUSIC_COOL         5
#define TRAINER_ENCOUNTER_MUSIC_AQUA         6
#define TRAINER_ENCOUNTER_MUSIC_MAGMA        7
#define TRAINER_ENCOUNTER_MUSIC_SWIMMER      8
#define TRAINER_ENCOUNTER_MUSIC_TWINS        9 // used for other trainer classes too
#define TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR  10
#define TRAINER_ENCOUNTER_MUSIC_HIKER       11 // used for other trainer classes too
#define TRAINER_ENCOUNTER_MUSIC_INTERVIEWER 12
#define TRAINER_ENCOUNTER_MUSIC_RICH        13 // Rich Boys and Gentlemen

#define F_TRAINER_FEMALE (1 << 7)

// All trainer parties specify the IV, level, and species for each Pokémon in the
// party. Some trainer parties also specify held items and custom moves for each
// Pokémon.
#define F_TRAINER_PARTY_CUSTOM_MOVESET (1 << 0)
#define F_TRAINER_PARTY_HELD_ITEM      (1 << 1)

#endif  // GUARD_TRAINERS_H
