// Room: /d/huanggon/wangfujing2.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�������ĵ����ھ������,Ҳ�����������ĵط�,ȫ�����ص��̷�
���ѻ���Ū���˵ؽ���,�ֵ����ߵ�����һ����һ��,�ŵ����������.��
�߾��Ǽ��鱦��.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"jubaoge",
  "south" : __DIR__"wangfujing1",
  "north" : __DIR__"ndajie",
]));
	set("objects",([
		"/npc/man5":1,
		"/npc/man6":1,
	]));
	setup();
	replace_program(ROOM);
}
