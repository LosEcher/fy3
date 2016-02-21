// Room: /d/kaifeng/zhongyuan.c

inherit ROOM;

void create()
{
	set("short", "��Ժ");
	set("long", @LONG
��Ժ��Ϊǰ��������,Ժ�ӵ������������Ƹ��������߲㣬���
�������ơ�ǰ�߲��ֳ��м���е��⣬�����ǻ��ԣ�����һ�øߴ�
�������������������ʯ��ͨ����۱���ϱ��������������
��ի����������ԡ�ҡ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/tiefutu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"tianwang",
  "north" : __DIR__"daxiong",
  "east" : __DIR__"chufang",
  "west" : __DIR__"yushi",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
