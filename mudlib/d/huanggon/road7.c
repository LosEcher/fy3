// Room: /d/huanggon/road7.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
������һ����������Ĵ�����ϡ��������������������ӵġ�
���̵ġ����Ŵ󳵵�����Ͼ��Ͽ��������������������ǳ����֡�
��ʱ����������������߷ɳ۶���������һ·��������·������
��������������֡�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "city2");
	set("objects", ([ /* sizeof() == 1 */
  "/d/huashan/npc/haoke" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"road4",
  "northwest" : __DIR__"road6",
]));

	setup();
	replace_program(ROOM);
}
