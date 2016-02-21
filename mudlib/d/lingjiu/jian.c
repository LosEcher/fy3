// Room: /d/lingjiu/jian.c

inherit ROOM;

void create()
{
	set("short", "���ɽ�");
	set("long", @LONG
ɽ������ͻȻ��ʧ��������ǰ��һ��ɽ����ɽ��֮���������ƣ����
���޷�������档һ������(tiesuo)�������У��Ա���һ��ʯ��(bei)��
LONG
	);
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 2 */
  "tiesuo" : "����ͨ������ġ������š�����Ҳ������߹�(zou)ȥ��
",
  "bei" : "�����չ����صأ�����������
",
]));
	set("objects", ([ /* sizeof() == 2 */
  "/daemon/class/lingjiu/tbhao.c" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "southdown" : __DIR__"yan",
	"northup":__DIR__"xianchou",
]));
	set("outdoors", "lingjiu");

	setup();
}

int valid_leave(object me,string dir)
{
	string family;
	object ob;

	family=(string)me->query("family/family_name");
	ob=present("yu popo",this_object());

	if(family && family!="���չ�" && objectp(ob)&& dir=="northup")
	return notify_fail("������ŭ��������Ī�룡\n");

	return ::valid_leave(me,dir);
}

