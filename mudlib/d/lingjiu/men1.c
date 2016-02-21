// Room: /d/lingjiu/men1.c

inherit ROOM;

void create()
{
	set("short", "���Ҵ���");
	set("long", @LONG
�������Ҷ���,������һ�Ƚ��յĴ���(door)��
LONG
	);
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "door" : (: look_door :),
]));
	set("objects", ([ /* sizeof() == 2 */
  "/daemon/class/lingjiu/jujian.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"changl11",
  "west" : __DIR__"qiushi",
]));
	set("outdoors", "lingjiu");

	setup();
}

int valid_leave(object me,string dir)
{
	string family;
	object ob;

	family=(string)me->query("family/family_name");
	ob=present("ju jian",this_object());
	if(family!="���չ�" && objectp(ob) && dir=="west")
	return notify_fail("�ս�һ���֣��������ס�ˡ�\n");
	return ::valid_leave(me,dir);
}

