// Room: /d/suzhou/lianwuchang.c

inherit ROOM;

void create()
{
	set("short", "���䳡");
	set("long", @LONG
������ǽ��ׯ���������Ĺ㳡���㳡���ܵı������Ϸ����Ÿ�ʽ�����õ�
����������������������������ա�����Ĵ����ǿⷿ������ͨ������������
�������ҡ�
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"chufang",
  "south" : __DIR__"neishi",
  "north" : __DIR__"jinfengzhuang",
  "east" : __DIR__"kufang",
]));
	set("objects",([
		__DIR__"npc/dizi1":2,
		__DIR__"npc/dizi2":2,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
