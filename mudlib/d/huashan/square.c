// Room: /d/huashan/square.c

inherit ROOM;

void create()
{
	set("short", "���䳡");
	set("long", @LONG
�����ǻ�ɽ�ɵ����䳡���������⼸��ľ�ˣ������Ǳ����⣬������
��С�ꡣͨ������໪ɽ�ɵ����ڴ�ϰ�����������ߵķ������Ϲ���һ��
�ң����顸Ⱥ�ɹۡ����������ƺ�����С��ͨ��ɽ�ϡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xx");
	set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"bingqifang",
  "north" : __DIR__"qunxianguan",
  "south" : __DIR__"yunu",
  "northwest" : __DIR__"chaopath1",
]));

	setup();
	replace_program(ROOM);
}
