// Room: /d/tianxia/1guan3.c

inherit ROOM;

void create()
{
	set("short", "���ֽ̳�");
	set("long", @LONG
��Ƭ�����ĳ���λ��ɽ�ȵ�����,ռ����ʮĶ.ȴ������������.��
����ӭ����.�����ǰ���ס��.����ɽ����һ��ʯ��ֱͨɽ��.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"1guan2",
  "south" : __DIR__"1guan5",
  "east" : __DIR__"1guan6",
  "north" : __DIR__"jiaochang",
]));

	setup();
	replace_program(ROOM);
}
