// Room: /d/new/huanhua/dloushan.c

inherit ROOM;

void create()
{
	set("short", "¦ɽ����");
	set("long", @LONG
��ǰһ����ɽͦ��,������ӡ,��ʯ���.��ߴ�ֱ�����.���Ǵ�¦ɽ.
ǰ�治Զ��ɽ����,�������õ�ͤ��.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "southup" : __DIR__"road1",
  "north" : __DIR__"hxianting",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
