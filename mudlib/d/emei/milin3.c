// Room: /d/emei/milin3.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����һƬŨ�ܵ�ɼľ��,֦�½�é,���Ʊ���,��˵,��ǰ�и�������
�м����,��'��˾�'����Ϊ׼,������ͽ��ֲ��ľ,����10.9������,��
��������˵���Ǻ���,��Ϊ������·��.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xian.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/emei");
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"milin2",
  "west" : __DIR__"milin1",
  "east" : __DIR__"milin4",
  "north" : __DIR__"milin3",
]));

	setup();
	replace_program(ROOM);
}
