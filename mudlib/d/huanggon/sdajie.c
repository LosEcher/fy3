// Room: /d/huanggon/sdajie.c

inherit ROOM;

void create()
{
	set("short", "�ϴ��");
	set("long", @LONG
�������ϱ�����Ľֵ�,��·�����Ǹ���ĵ���,��Ϊ�Ǿ���,���ණ
�����Ƚ���ȫ,�˵�����Ƭ�����Ĺ㳡,�ϱߺܶ��˾�����һ��,����ȥ
������.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"miaofa",
  "south" : __DIR__"sdajie1",
  "north" : __DIR__"guangchang",
]));

	setup();
	replace_program(ROOM);
}
