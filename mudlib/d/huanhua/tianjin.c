// Room: /d/huanhua/tianjin.c

inherit ROOM;

void create()
{
	set("short", "�쾮");
	set("long", @LONG
�쾮����������,���߶������弶̨������,�����߾��Ǹ߸ߵ�Χǽ,
ͥ��һ�ڹž��Ա�����һ����÷,���ϵ�һ���ɻ����л����ż�����
����,�Ӵ���,��������,�����Ǵ���.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"neiting",
  "south" : __DIR__"dating",
]));

	setup();
	replace_program(ROOM);
}
