// Room: /d/huanhua/dalu1.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
һ�����������Ĵ�·,��������,��������.���������������ͨ��ɶ�����
�����һƬ������䣬��˵�������־���佻����ɵ����ڵء�����ȥ��һ����
ɽ�վ��ޱȣ��Ǿ��Ǵ�¦ɽ�ˡ�
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "north" : "/d/chengdu/yidao2",
  "south" : __DIR__"dalu",
  "west" : __DIR__"bamboo4",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dahan.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
