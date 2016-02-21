// Room: /d/emei/road.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����һ��ͨ�򱨹��µĴ��,��·�غ����(lake)����,�������
ˮ������,·��ֲ���˷���,ï��Ũ��,���ﻨ��,��������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bei.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northup" : __DIR__"fenhuang",
  "south" : __DIR__"xiaolu1",
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "lake" : "�����������������������ڳ���ĺ���,��Ŀ����,�·����.
",
]));
	set("outdoors", "/d/emei");

	setup();
}

int valid_leave(object me,string dir)
{
	string fam;
	object npc;

	fam=(string)me->query("family/family_name");
	npc=present("bei jinyi",environment(me));
	if( fam && fam!="������" && objectp(npc) &&
		dir=="northup")
	return notify_fail("���������һ�������ҽ�������Ī�룡\n");
	return ::valid_leave(me,dir);
}


