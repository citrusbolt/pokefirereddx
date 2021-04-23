#include "global.h"
#include "malloc.h"
#include "battle.h"
#include "data.h"
#include "graphics.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/trainers.h"
#include "constants/battle_ai.h"

const u16 gMinigameDigits_Pal[] = INCBIN_U16("graphics/link/minigame_digits.gbapal");
const u32 gMinigameDigits_Gfx[] = INCBIN_U32("graphics/link/minigame_digits.4bpp.lz");

#define BATTLER_OFFSET(i) (gHeap + 0x8000 + MON_PIC_SIZE * (i))

const struct SpriteFrameImage gBattlerPicTable_PlayerLeft[] =
{
    BATTLER_OFFSET(0), MON_PIC_SIZE,
    BATTLER_OFFSET(1), MON_PIC_SIZE,
    BATTLER_OFFSET(2), MON_PIC_SIZE,
    BATTLER_OFFSET(3), MON_PIC_SIZE,
};

const struct SpriteFrameImage gBattlerPicTable_OpponentLeft[] =
{
    BATTLER_OFFSET(4), MON_PIC_SIZE,
    BATTLER_OFFSET(5), MON_PIC_SIZE,
    BATTLER_OFFSET(6), MON_PIC_SIZE,
    BATTLER_OFFSET(7), MON_PIC_SIZE,
};

const struct SpriteFrameImage gBattlerPicTable_PlayerRight[] =
{
    BATTLER_OFFSET(8),  MON_PIC_SIZE,
    BATTLER_OFFSET(9),  MON_PIC_SIZE,
    BATTLER_OFFSET(10), MON_PIC_SIZE,
    BATTLER_OFFSET(11), MON_PIC_SIZE,
};

const struct SpriteFrameImage gBattlerPicTable_OpponentRight[] =
{
    BATTLER_OFFSET(12), MON_PIC_SIZE,
    BATTLER_OFFSET(13), MON_PIC_SIZE,
    BATTLER_OFFSET(14), MON_PIC_SIZE,
    BATTLER_OFFSET(15), MON_PIC_SIZE,
};

const struct SpriteFrameImage gTrainerBackPicTable_Red[] =
{
    gTrainerBackPicRed, 0x0800,
    gTrainerBackPicRed + 0x0800, 0x0800,
    gTrainerBackPicRed + 0x1000, 0x0800,
    gTrainerBackPicRed + 0x1800, 0x0800,
    gTrainerBackPicRed + 0x2000, 0x0800,
};

const struct SpriteFrameImage gTrainerBackPicTable_Leaf[] =
{
    gTrainerBackPicLeaf, 0x0800,
    gTrainerBackPicLeaf + 0x0800, 0x0800,
    gTrainerBackPicLeaf + 0x1000, 0x0800,
    gTrainerBackPicLeaf + 0x1800, 0x0800,
    gTrainerBackPicLeaf + 0x2000, 0x0800,
};

const struct SpriteFrameImage gTrainerBackPicTable_PokeDude[] =
{
    gTrainerBackPicPokeDude, 0x0800,
    gTrainerBackPicPokeDude + 0x0800, 0x0800,
    gTrainerBackPicPokeDude + 0x1000, 0x0800,
    gTrainerBackPicPokeDude + 0x1800, 0x0800,
};

const struct SpriteFrameImage gTrainerBackPicTable_OldMan[] =
{
    gTrainerBackPicOldMan, 0x0800,
    gTrainerBackPicOldMan + 0x0800, 0x0800,
    gTrainerBackPicOldMan + 0x1000, 0x0800,
    gTrainerBackPicOldMan + 0x1800, 0x0800,
};

const struct SpriteFrameImage gTrainerBackPicTable_Gold[] =
{
    gTrainerBackPicGold, 0x0800,
    gTrainerBackPicGold + 0x0800, 0x0800,
    gTrainerBackPicGold + 0x1000, 0x0800,
    gTrainerBackPicGold + 0x1800, 0x0800,
    gTrainerBackPicGold + 0x2000, 0x0800,
};

const struct SpriteFrameImage gTrainerBackPicTable_Kris[] =
{
    gTrainerBackPicKris, 0x0800,
    gTrainerBackPicKris + 0x0800, 0x0800,
    gTrainerBackPicKris + 0x1000, 0x0800,
    gTrainerBackPicKris + 0x1800, 0x0800,
    gTrainerBackPicKris + 0x2000, 0x0800,
};

const struct SpriteFrameImage gTrainerBackPicTable_EBrendan[] =
{
    gTrainerBackPicEBrendan, 0x0800,
    gTrainerBackPicEBrendan + 0x0800, 0x0800,
    gTrainerBackPicEBrendan + 0x1000, 0x0800,
    gTrainerBackPicEBrendan + 0x1800, 0x0800,
};

const struct SpriteFrameImage gTrainerBackPicTable_EMay[] =
{
    gTrainerBackPicEMay, 0x0800,
    gTrainerBackPicEMay + 0x0800, 0x0800,
    gTrainerBackPicEMay + 0x1000, 0x0800,
    gTrainerBackPicEMay + 0x1800, 0x0800,
};

const struct SpriteFrameImage gTrainerBackPicTable_RSBrendan[] =
{
    gTrainerBackPicRSBrendan, 0x0800,
    gTrainerBackPicRSBrendan + 0x0800, 0x0800,
    gTrainerBackPicRSBrendan + 0x1000, 0x0800,
    gTrainerBackPicRSBrendan + 0x1800, 0x0800,
};

const struct SpriteFrameImage gTrainerBackPicTable_RSMay[] =
{
    gTrainerBackPicRSMay, 0x0800,
    gTrainerBackPicRSMay + 0x0800, 0x0800,
    gTrainerBackPicRSMay + 0x1000, 0x0800,
    gTrainerBackPicRSMay + 0x1800, 0x0800,
};

static const union AnimCmd sAnim_GeneralFrame0[] =
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GeneralFrame3[] =
{
    ANIMCMD_FRAME(3, 0),
    ANIMCMD_END,
};

static const union AffineAnimCmd gUnknown_082FF548[] =
{
    AFFINEANIMCMD_FRAME(0x0100, 0x0100, 0x00, 0x00),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd gUnknown_082FF558[] =
{
    AFFINEANIMCMD_FRAME(0xff00, 0x0100, 0x00, 0x00),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd gUnknown_082FF568[] =
{
    AFFINEANIMCMD_FRAME(0x0028, 0x0028, 0x00, 0x00),
    AFFINEANIMCMD_FRAME(0x0012, 0x0012, 0x00, 0x0c),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd gUnknown_082FF580[] =
{
    AFFINEANIMCMD_FRAME(0xfffe, 0xfffe, 0x00, 0x12),
    AFFINEANIMCMD_FRAME(0xfff0, 0xfff0, 0x00, 0x0f),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd gUnknown_082FF598[] =
{
    AFFINEANIMCMD_FRAME(0x00a0, 0x0100, 0x00, 0x00),
    AFFINEANIMCMD_FRAME(0x0004, 0x0000, 0x00, 0x08),
    AFFINEANIMCMD_FRAME(0xfffc, 0x0000, 0x00, 0x08),
    AFFINEANIMCMD_JUMP(1),
};

static const union AffineAnimCmd gUnknown_082FF5B8[] =
{
    AFFINEANIMCMD_FRAME(0x0002, 0x0002, 0x00, 0x14),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd gUnknown_082FF5C8[] =
{
    AFFINEANIMCMD_FRAME(0xfffe, 0xfffe, 0x00, 0x14),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd gUnknown_082FF5D8[] =
{
    AFFINEANIMCMD_FRAME(0x0100, 0x0100, 0x00, 0000),
    AFFINEANIMCMD_FRAME(0xfff0, 0xfff0, 0x00, 0x09),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd gUnknown_082FF5F0[] =
{
    AFFINEANIMCMD_FRAME(0x0004, 0x0004, 0x00, 0x3f),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd gUnknown_082FF600[] =
{
    AFFINEANIMCMD_FRAME(0x0000, 0x0000, 0xfd, 0x05),
    AFFINEANIMCMD_FRAME(0x0000, 0x0000, 0x03, 0x05),
    AFFINEANIMCMD_END,
};

const union AffineAnimCmd *const gAffineAnims_BattleSpritePlayerSide[] =
{
    gUnknown_082FF548,
    gUnknown_082FF568,
    gUnknown_082FF580,
    gUnknown_082FF598,
    gUnknown_082FF5B8,
    gUnknown_082FF5C8,
    gUnknown_082FF5F0,
    gUnknown_082FF600,
    gUnknown_082FF5D8,
};

static const union AffineAnimCmd gUnknown_082FF63C[] =
{
    AFFINEANIMCMD_FRAME(0xfffc, 0xfffc, 0x04, 0x3f),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd gUnknown_082FF64C[] =
{
    AFFINEANIMCMD_FRAME(0x0000, 0x0000, 0x03, 0x05),
    AFFINEANIMCMD_FRAME(0x0000, 0x0000, 0xfd, 0x05),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd gUnknown_082FF664[] =
{
    AFFINEANIMCMD_FRAME(0x0000, 0x0000, 0xfb, 0x14),
    AFFINEANIMCMD_FRAME(0x0000, 0x0000, 0x00, 0x14),
    AFFINEANIMCMD_FRAME(0x0000, 0x0000, 0x05, 0x14),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd gUnknown_082FF684[] =
{
    AFFINEANIMCMD_FRAME(0x0000, 0x0000, 0x09, 0x6e),
    AFFINEANIMCMD_END,
};

const union AffineAnimCmd *const gAffineAnims_BattleSpriteOpponentSide[] =
{
    gUnknown_082FF548,
    gUnknown_082FF568,
    gUnknown_082FF580,
    gUnknown_082FF598,
    gUnknown_082FF5B8,
    gUnknown_082FF5C8,
    gUnknown_082FF63C,
    gUnknown_082FF64C,
    gUnknown_082FF664,
    gUnknown_082FF5D8,
    gUnknown_082FF684,
};

const union AffineAnimCmd *const gUnknown_082FF6C0[] =
{
    gUnknown_082FF558,
    gUnknown_082FF568,
    gUnknown_082FF580,
    gUnknown_082FF598,
    gUnknown_082FF5B8,
    gUnknown_082FF5C8,
    gUnknown_082FF63C,
    gUnknown_082FF64C,
    gUnknown_082FF664,
    gUnknown_082FF5D8,
    gUnknown_082FF684,
};

static const union AnimCmd gUnknown_082FF6F4[] =
{
    ANIMCMD_FRAME(1, 0),
    ANIMCMD_END,
};

static const union AnimCmd gUnknown_082FF6FC[] =
{
    ANIMCMD_FRAME(2, 0),
    ANIMCMD_END,
};

const union AnimCmd *const gUnknown_082FF70C[] =
{
    sAnim_GeneralFrame0,
    gUnknown_082FF6F4,
    gUnknown_082FF6FC,
    sAnim_GeneralFrame3,
};

#define SPECIES_SPRITE(species, sprite) [SPECIES_##species] = {sprite, MON_PIC_SIZE, SPECIES_##species}
#define SPECIES_PAL(species, pal) [SPECIES_##species] = {pal, SPECIES_##species}
#define SPECIES_SHINY_PAL(species, pal) [SPECIES_##species] = {pal, SPECIES_##species + SPECIES_SHINY_TAG}

const bool8 SpeciesHasGenderDifference[NUM_SPECIES] =
{
    [SPECIES_VENUSAUR] = TRUE,
    [SPECIES_BUTTERFREE] = TRUE,
    [SPECIES_RATTATA] = TRUE,
    [SPECIES_RATICATE] = TRUE,
    [SPECIES_PIKACHU] = TRUE,
    [SPECIES_RAICHU] = TRUE,
    [SPECIES_ZUBAT] = TRUE,
    [SPECIES_GOLBAT] = TRUE,
    [SPECIES_GLOOM] = TRUE,
    [SPECIES_VILEPLUME] = TRUE,
    [SPECIES_KADABRA] = TRUE,
    [SPECIES_ALAKAZAM] = TRUE,
    [SPECIES_DODUO] = TRUE,
    [SPECIES_DODRIO] = TRUE,
    [SPECIES_HYPNO] = TRUE,
    [SPECIES_RHYHORN] = TRUE,
    [SPECIES_RHYDON] = TRUE,
    [SPECIES_GOLDEEN] = TRUE,
    [SPECIES_SEAKING] = TRUE,
    [SPECIES_SCYTHER] = TRUE,
    [SPECIES_MAGIKARP] = TRUE,
    [SPECIES_GYARADOS] = TRUE,
    [SPECIES_EEVEE] = TRUE,
    [SPECIES_MEGANIUM] = TRUE,
    [SPECIES_LEDYBA] = TRUE,
    [SPECIES_LEDIAN] = TRUE,
    [SPECIES_SUDOWOODO] = TRUE,
    [SPECIES_POLITOED] = TRUE,
    [SPECIES_AIPOM] = TRUE,
    [SPECIES_WOOPER] = TRUE,
    [SPECIES_QUAGSIRE] = TRUE,
    [SPECIES_MURKROW] = TRUE,
    [SPECIES_WOBBUFFET] = TRUE,
    [SPECIES_GIRAFARIG] = TRUE,
    [SPECIES_GLIGAR] = TRUE,
    [SPECIES_STEELIX] = TRUE,
    [SPECIES_SCIZOR] = TRUE,
    [SPECIES_HERACROSS] = TRUE,
    [SPECIES_SNEASEL] = TRUE,
    [SPECIES_URSARING] = TRUE,
    [SPECIES_PILOSWINE] = TRUE,
    [SPECIES_OCTILLERY] = TRUE,
    [SPECIES_HOUNDOOM] = TRUE,
    [SPECIES_DONPHAN] = TRUE,
    [SPECIES_TORCHIC] = TRUE,
    [SPECIES_COMBUSKEN] = TRUE,
    [SPECIES_BLAZIKEN] = TRUE,
    [SPECIES_BEAUTIFLY] = TRUE,
    [SPECIES_DUSTOX] = TRUE,
    [SPECIES_LUDICOLO] = TRUE,
    [SPECIES_NUZLEAF] = TRUE,
    [SPECIES_SHIFTRY] = TRUE,
    [SPECIES_MILOTIC] = TRUE,
    [SPECIES_NUMEL] = TRUE,
    [SPECIES_CAMERUPT] = TRUE,
    [SPECIES_CACTURNE] = TRUE,
    [SPECIES_MEDITITE] = TRUE,
    [SPECIES_MEDICHAM] = TRUE,
    [SPECIES_ROSELIA] = TRUE,
    [SPECIES_GULPIN] = TRUE,
    [SPECIES_SWALOT] = TRUE,
    [SPECIES_RELICANTH] = TRUE,
};

#include "data/pokemon_graphics/front_pic_coordinates.h"
#include "data/pokemon_graphics/front_pic_anims.h"
#include "data/pokemon_graphics/back_pic_coordinates.h"

#include "data/pokemon_graphics/back_pic_table.h"
#include "data/pokemon_graphics/palette_table.h"
#include "data/pokemon_graphics/shiny_palette_table.h"

#include "data/trainer_graphics/front_pic_anims.h"
#include "data/trainer_graphics/front_pic_tables.h"
#include "data/trainer_graphics/back_pic_anims.h"
#include "data/trainer_graphics/back_pic_tables.h"

#include "data/pokemon_graphics/enemy_mon_elevation.h"
#include "data/pokemon_graphics/front_pic_table.h"

#include "data/trainer_parties.h"
#include "data/text/trainer_class_names.h"
#include "data/trainers.h"
#include "data/text/species_names.h"
#include "data/text/move_names.h"
