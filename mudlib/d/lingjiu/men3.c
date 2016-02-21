// Room: /d/lingjiu/men3.c

inherit ROOM;

void create()
{
	set("short", "�չ��Ҵ���");
	set("long", @LONG
���Ǳչ����ϱߣ�������һ�ȴ��š�
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  "/daemon/class/lingjiu/tbzhu.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"xiaodao2",
  "north" : __DIR__"biguan",
]));
	set("outdoors", "lingjiu");

	setup();
}

int valid_leave(object me,string dir)
{
	string family;
	object ob;

	family=(string)me->query("family/family_name");
	ob=present("shi sao",this_object());
	if(family!="���չ�" && objectp(ob) && dir=="north")
	return notify_fail("ʯɩ��ס���������ɽͯ�������������κ��˲��ô��������˼ҡ�\n");
	return ::valid_leave(me,dir);
}

