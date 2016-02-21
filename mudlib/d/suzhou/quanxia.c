// Room: /d/suzhou/quanxia.c

inherit ROOM;

void create()
{
	set("short", "剑池泉下");
	set("long", @LONG
你发现自己正站在一潭泉水之中。你掬了口泉水尝了尝，微微有点甜意。四
周岩石峭壁包围着，峭壁上尽是斧凿之印。想来前人着实费了不少力气。抬头仰
望只见天空，要想从这里出去看样子只得爬上去了。
LONG
	);
	set("resource/water",1);
	set("objects",([
		__DIR__"obj/gujian" :1,
	]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
}
void init()
{
	object me;
	add_action("do_climb","climb");
}
int do_climb()
{
	object me;
	me=this_player();
	message_vision("$N顺着峭壁小心翼翼的爬了上去。\n",me);
	tell_room(__DIR__"jianchiquan",me->query("name")+"从池下爬了上来。\n");
	me->move(__DIR__"jianchiquan");
	return 1;
}
