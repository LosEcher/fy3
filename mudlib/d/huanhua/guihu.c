// Room: /d/new/huanhua/guihu.c

inherit ROOM;

void create()
{
	set("short", "���");
	set("long", @LONG
�¶����,����Ʈ��,Ũ���޺�,��������,����С����֮��.
��̶��̣��������ߣ�һƬ��ϲ�ľ��⣬������һ����ɫ����
ֱͨ�����ȥ.
LONG
	);
	set("outdoors", "/d/new");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"bamboo3",
  "southeast" : __DIR__"hqiuqiao",
]));

	setup();
	replace_program(ROOM);
}
