// Room: /d/new/huanhua/changlang2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ�������Ļ���,��ɫ����������,��������ÿ�����ɾͳɶ���������.
�����Ǽ�ɽ,����ͨ��,������Ȥ.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"changlang4",
  "east" : __DIR__"changlang1.c",
  "northwest" : __DIR__"changlang3.c",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
