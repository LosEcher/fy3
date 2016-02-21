// Room: /d/suzhou/cangjingshi.c

inherit ROOM;

void create()
{
	set("short", "�ؾ���");
	set("long", @LONG
�����µĲؾ��ң�����ڷ��˲��ٻ�����ѧ���鼮�����ٺ������궼Ľ��ǰ
������һ���۸�����Ȼ��������ǲ�����������ȥ�ġ�һ��С����վ������ǰ��
������΢΢һЦ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"baoensi",
]));
	set("objects",([
		__DIR__"obj/cangjinggui":1,
		__DIR__"npc/xiaoheshang":1,
]));
	set("no_clean_up", 0);
	set("no_fight",1);
	set("no_steal",1);
	setup();
}
int valid_leave(object me,string dir)
{
	object *inv;
	int i;
	inv=all_inventory(me);
	if(!sizeof(inv))    return ::valid_leave(me,dir);
	for(i=0;i<sizeof(inv);i++)	{
		if(inv[i]->query("oldsix_flag/no_out")==1)
		return notify_fail("С����˵�����Ȿ"+inv[i]->query("name")+"�㲻�ܴ��ߡ�\n");
	}
	return ::valid_leave(me,dir);
}
