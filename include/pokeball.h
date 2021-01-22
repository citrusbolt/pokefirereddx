#ifndef GUARD_POKEBALL_H
#define GUARD_POKEBALL_H

enum {
    BALL_AFFINE_ANIM_0,
    BALL_ROTATE_RIGHT,
    BALL_ROTATE_LEFT, 
    BALL_AFFINE_ANIM_3,
    BALL_AFFINE_ANIM_4
};

enum
{
    BALLGFX_POKE,
    BALLGFX_GREAT,
    BALLGFX_SAFARI,
    BALLGFX_ULTRA,
    BALLGFX_MASTER,
    BALLGFX_NET,
    BALLGFX_DIVE,
    BALLGFX_NEST,
    BALLGFX_REPEAT,
    BALLGFX_TIMER,
    BALLGFX_LUXURY,
    BALLGFX_PREMIER,
    BALLGFX_LEVEL,
    BALLGFX_LURE,
    BALLGFX_MOON,
    BALLGFX_FRIEND,
    BALLGFX_FAST,
    BALLGFX_HEAVY,
    BALLGFX_LOVE,
    BALLGFX_PARK,
    BALLGFX_COUNT
};


#define BALL_NONE		0
#define BALL_MASTER		1
#define BALL_ULTRA		2
#define BALL_GREAT		3
#define BALL_POKE		4
#define BALL_SAFARI		5
#define BALL_NET		6
#define BALL_DIVE		7
#define BALL_NEST		8
#define BALL_REPEAT		9
#define BALL_TIMER		10
#define BALL_LUXURY		11
#define BALL_PREMIER	12
#define BALL_LEVEL		13
#define BALL_LURE		14
#define BALL_MOON		15
#define BALL_FRIEND		16
#define BALL_FAST		17
#define BALL_HEAVY		18
#define BALL_LOVE		19
#define BALL_PARK		20


#define POKEBALL_COUNT BALLGFX_COUNT
#define IS_ITEM_BALL(x) ((x) <= ITEM_PREMIER_BALL || ((x) >= ITEM_LEVEL_BALL && (x) <= ITEM_PARK_BALL))
#define ITEM_ID_TO_BALL_ID(x) (((x) >= ITEM_LEVEL_BALL && (x) <= ITEM_PARK_BALL) ? (((x) - ITEM_LEVEL_BALL) + BALL_LEVEL) : (x))

extern const struct SpriteTemplate gBallSpriteTemplates[];

#define POKEBALL_PLAYER_SENDOUT     0xFF
#define POKEBALL_OPPONENT_SENDOUT   0xFE

u8 DoPokeballSendOutAnimation(s16 pan, u8 kindOfThrow);
void CreatePokeballSpriteToReleaseMon(u8 monSpriteId, u8 battler, u8 x, u8 y, u8 oamPriority, u8 subpriortiy, u8 g, u32 h, u16 species);
u8 CreateTradePokeballSprite(u8 a, u8 b, u8 x, u8 y, u8 oamPriority, u8 subPriority, u8 g, u32 h);
void sub_8076918(u8 battler);
void DoHitAnimHealthboxEffect(u8 battler);
void LoadBallGfx(u8 ballId);
void FreeBallGfx(u8 ballId);

#endif // GUARD_POKEBALL_H
