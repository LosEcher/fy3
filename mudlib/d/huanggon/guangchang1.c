// Room: /d/huanggon/guangchang1.c

inherit ROOM;

void create()
{
	set("short", "�㳡");
	set("long", @LONG
����ǵذ��Ź㳡,�㳡����ʯ�̾�,ͬ�ʹ�ǰ���찲�Ź㳡���Ӧ,
�㳡�������Ǳ����,�򱱳��˰����ſɵ�Į��һ��,�ϱ��ǻʹ��ĺ���
������,����ɭ��.
LONG
	);
	set("no_clean_up", 0);
	set("objects",([
		"/npc/man4":3,
	]));
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"andingmen",
  "east" : __DIR__"ndajie1",
  "west" : __DIR__"ndajie2",
  "south" : __DIR__"shenwumen",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
