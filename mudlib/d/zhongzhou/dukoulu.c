// Room: /d/yangzhou/dukoulu2.c

inherit ROOM;

void create()
{
	set("short", "�ɿ�·");
	set("long", @LONG
����������ͨ�����ݳǵĴ�������Ƕɿڡ�ͨ���ɿڿ��Ե��ｭ��
�����ݣ����������ϱ���Ҫ����
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"to_zhongzhou",
  "north":__DIR__"dukou",
]));
	set("outdoors","zhongzhou");
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/nuhai" : 1,
  __DIR__"npc/nanhai" : 1,
]));
	set("no_sleep_room", 1);
	set("valid_startroom", 1);

	setup();
	replace_program(ROOM);
}
