// Room: /d/new/huanhua/jianlu.c

inherit ROOM;

void create()
{
	set("short", "��®");
	set("long", @LONG
��®��佻����ɵ��ص�,������������¥Ϊ����������֮һ,��®��
��佻�Ϫ�Ե�������,ֻ��һ��С·ͨ���˴�.ͨ���ߴ��ǰ�ſ���ȥ,¥
������,ɭɭȻ��������.
LONG
	);
	set("outdoors", "/d/new");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"bamboo",
  "north" : __DIR__"huapath",
]));

	setup();
	replace_program(ROOM);
}
