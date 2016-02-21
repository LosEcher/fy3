// Room: /d/room/dongzhong2
inherit ROOM;

void create ()
{
  set ("short", "后洞");
  set ("long", @LONG
这是九老仙府的后洞,一个纵横各达百丈的大洞窟,一条瀑布(pubu)从
后面的石壁上倾泻而下,发出轰轰隆隆的声音,你感觉自己摇摇欲坠,站都
站不稳.
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "pubu" : "如果你的轻功够高的话,也许可以跳(jump)一下试试,看能不能
上去,
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"dongzhong1",
]));

set("valid_startroom",1);
  setup();
}
void init()
{
	add_action("do_jump","jump");
}
int do_jump()
{
	object me;
	me=this_player();
	if(living(me)==0)	return 0;
	if(me->query_skill("dodge",1)<10)	{
		tell_object(me,"你的基本轻功还没练到家吧。\n");
		return 1;
	}
	message_vision("只见$N一个“凤舞九天”，飞身向瀑布蹿去。\n",me);
	tell_room(__DIR__"pubuding",me->query("name")+"从瀑布下跃了上来。\n");
	me->move(__DIR__"pubuding");
	me->start_busy(3);
	return 1;
}
