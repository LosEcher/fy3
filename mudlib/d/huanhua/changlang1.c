// Room: /d/huanhua/changlang1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ�������Ļ���,��ɫ����������,��������ÿ�����ɾͳɶ���������.
�����Ǽ�ɽ,����ͨ��,������Ȥ.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"changlang2",
  "east" : __DIR__"path4",
]));

	setup();
	replace_program(ROOM);
}
