// Room: /d/huanggon/jingdukezhan.c

inherit ROOM;

void create()
{
	set("short", "������ջ");
	set("long", @LONG
�ſڵ�����ϸ߹�һ��������,������������Ǻڵ���������.
��ջ�����ɨ��ʮ�ָɾ�,���˱������ĸо�.��������������,�ϱ���
������ȥ,��������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/sufoer.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"wchangan1",
  "south" : __DIR__"kezhanwoshi",
]));

	setup();
}
int valid_leave(object ob,string dir)
{
   if (dir=="south"&&!ob->query_temp("rent_paid"))  {
    if (present("su foer",this_object())) {
  message_vision("�շ��һ����ס$N:��Ǯ,��������.\n",ob);
  return notify_fail("");
}
}
return ::valid_leave(ob,dir);
}