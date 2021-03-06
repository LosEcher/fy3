// Room: /d/suzhou/meizhuang/midao1.c
#include <ansi.h>
inherit ROOM;
string status();
void create()
{
	set("short", "密道");
	set("long", @LONG
密道内阴暗异常，墙壁上点燃的油灯似乎已快燃尽，光芒越来越暗。
密道中机关重重，当真是插翅难飞。西面有个厚厚的夹门。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"up":__DIR__"midao5",
]));
	set("no_clean_up", 0);
	set("damage",0);
	set("item_desc",([
		"夹门":	(: status :),
		"jiamen":	(: status :),
]));
	setup();
}
void init()
{
	add_action("do_zhen","zhen");
}

int do_zhen()
{
	object me,room;
	int damage,i;
	string msg;
	me=this_player();
	room=load_object(__DIR__"midao7.c");
	damage=query("damage");
	if(damage>=1000)
	return notify_fail("夹门已被击穿了！\n");
	if(me->query_skill("force")<80)
	return notify_fail("你的内功修为不够！\n");
	i=me->query("force");
	if(i<=0)
	return notify_fail("你的内力已耗尽，无法震破夹门！\n");
 message_vision(CYN"但见$N深吸了口气使出毕生内力，双掌缓缓向夹门震去！\n"NOR,me);
	if(i<200)	msg=CYN"只听见“啪”的一声清响，";
	else if(i<400)  msg=CYN"只听见“咣”的一声脆响，";
	else if(i<600)  msg=YEL"只听见“噗”的一声闷响，";
	else if(i<800)   msg=RED"只听见“喀”的一声裂响，";
	else	msg=RED"只听得“轰”的一声巨响，";
	damage +=i;
	if(damage<200)	msg+="夹门似乎有些裂痕。";
	else if(damage<400)	msg+="夹门上裂了几条破痕。";
	else if(damage<600)	msg+="夹门上的裂痕越来越大。";
	else if(damage<800)	msg+="夹门上裂出几个破洞。";
	else if(damage<1000)	msg+="夹门上裂出几个大洞，眼看就要被震开了。";
	else	{
		msg+="夹门被$N震了开去！";
		set("exits/west",__DIR__"midao7");
		tell_object(room,CYN"夹门从对面被人给震开了！\n"NOR);
		room->set("exits/east",__FILE__);
		}
	message_vision(msg+"\n"NOR,me);
	set("damage",damage);
	room->set("damage",damage);
	me->set("force",0);
	return 1;
}
string status()
{
	if(query("exits/west"))
	return "早已被人给震破的夹门。\n";
	return "一道厚厚的夹门，还没有被人震（zhen）破。\n";
}
