// Room: /d/zhongzhou/yuanwan.c

inherit ROOM;

void create()
{
	set("short", "ǰԺ");
	set("long", @LONG
�����ǻ�Ա���ǰԺ��һ�����ǽ���ϻ��˸���ĵ��ĸ��֡��ƹ�
ǽ�ſ��Ե���Ա���ǰ����������˵��Ա�������ݳ������Ķ�ԡ�ûʲô
�µĻ����ǲ�Ҫ��ȥΪ�
LONG
	);
	set("objects",([
		__DIR__"npc/guanjia":1,
	]));
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"yanlingdong1",
]));
	set("outdoors", "/d/zhongzhou");

	setup();
	replace_program(ROOM);
}
