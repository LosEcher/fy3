// Room: /d/huanhua/changlang3.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ�������Ļ���,��ɫ����������,��������ÿ�����ɾͳɶ���������. 
�����Ǽ�ɽ,����ͨ��,������Ȥ.����ɽ�����и�����. 
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"changlang2.c",
  "north" : __DIR__"jt_cave",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
