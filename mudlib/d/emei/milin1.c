// Room: /u/xxy/room/milin1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����һƬŨ�ܵ��ľ��,֦�½�é,���Ʊ���,��˵,��ǰ�и�������
�м����,��'��˾�'����Ϊ׼,������ͽ��ֲ��ľ,����10.9������,��
��������˵���Ǻ���,˵��������·��.
LONG
	);
	set("no_clean_up", 0);
set("outdoors","/d/emei");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"milin3",
  "east" : __DIR__"milin2",
  "southwest" : __DIR__"huaying",
  "west" : __DIR__"milin2",
]));

	setup();
	replace_program(ROOM);
}
