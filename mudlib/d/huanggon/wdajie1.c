// Room: /d/huanggon/wdajie1.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
������������Ľֵ�,�򶫴����찲�Ź㳡.�ֵ�������������,ߺ��
������,��Ϊ�Ǿ���,�ΰ��ܺ�,����������ͦ��.���߾�������,�㿴�˿�.
ûʲô���ڽ�����,�����˵ض���סլ.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/man.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"wdajie",
  "north" : __DIR__"xidan1",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
