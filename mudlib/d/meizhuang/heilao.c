// Room: /d/suzhou/meizhuang/laofang.c
inherit ROOM;
#include <ansi.h>
void create()
{
	set("short","湖底黑牢");
	set("long", @LONG
小小的一间囚室，没有半丝风息，湿热难当。囚室内的角落有块铁板，
想是给被囚之人睡觉的地方吧。地上有段铁链，也不知锁过多少英雄豪杰。
黑牢的铁门上有个洞孔，就是你刚才钻进来的地方。
LONG
	);
	set("no_clean_up", 0);
	set("exits",([
]));
	set("item_desc",([
		"洞孔": "光线很暗看不清什么，不知能否钻（zuan）进去。\n",
		 "dongkong":"光线很暗看不清什么，不知能否钻（zuan）进去。\n",
		"铁板":"你借着微弱的光线，凝神看去：\n"+
"老夫生平快意恩仇，杀人如麻，囚居湖底，亦属应有之报。\n"+
"唯老夫任我行被困于此，一身通天彻地神功，不免与老夫枯骨同朽，\n"+
"后世小子，不知老夫之能，亦憾事也。\n"+
"兹将老夫神功精义要旨，留书于此，后世小子习之，行当纵横天下，\n"+
"老夫死且不朽矣。........\n"+
CYN"这块铁板似乎可以专研专研（zuanyan）。\n"NOR,
]));
	setup();
}
void init()
{
        add_action("do_zuan","zuan");
		add_action("do_study","zuanyan");
}

int do_study(string str)
{
	object me;
	int level;

	me=this_player();
	if(str!="铁板"&&str!="tieban")  
		return notify_fail("你要专研什么？\n");
	if( !me->query_skill("literate", 1) )
		return notify_fail("你是个文盲，还是先学点文化吧。\n");
		message_vision(CYN"$N正在专心研读石板上记载的功夫。\n"NOR,me);
	if(!me->query_skill("xixing-dafa",1))	level=0;
	else level=me->query_skill("xixing-dafa",1);
	if( level>=(int)me->query_skill("force",1))
		return notify_fail("还是先练好你的基本内功吧。\n");
	if(level>=200)
	return notify_fail("你研读了一会儿，但是发现上面所说的对你而言都太浅了，没有学到任何东西。\n");
	if(me->query("combat_exp")<level*level*level/10)
	return notify_fail("你的实战经验不够，再怎么专研也没用！\n");
	if(me->query("sen")<50||me->query("gin")<50)
	return notify_fail("你现在精神不佳，没办法专研铁板上的武学！\n");
	me->receive_damage("sen",25+random(25));
	me->receive_damage("gin",25+random(25));
	if(random(me->query_int())<15)	{
	 message_vision(RED"突然之间$N浑身一颤，“哇”的一声吐出一大口鲜血！\n"NOR,me);
	me->receive_wound("kee",20+random(20));
		return 1;
	}
	if(!me->query_skill("xixing-dafa",1))
		me->set_skill("xixing-dafa",0);
	me->improve_skill("xixing-dafa",random(me->query_int()));
	tell_object(me,"你的「吸星大法」有所提高！\n");
	return 1;
}
int do_zuan()
{
        object me;
        me=this_player();
        if(me->query_encumbrance()>5000)        {
                return notify_fail("你身上带的东西太多了，根本钻不进去！\n");
        }
        message_vision(CYN"$N身形微缩，从铁门洞孔中钻了进去。\n"NOR,me);
		me->move(__DIR__"tiemen");
        return 1;
}
