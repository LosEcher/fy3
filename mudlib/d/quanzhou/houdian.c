// Room: /d/quanzhou/houdian.c

inherit ROOM;

void create()
{
	set("short", "���");
	set("long", @LONG
����������,���������˶�����Ϊ'����',��˵�Ǳ��ӳ����� 
��ƽ������. 
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "northdown" : __DIR__"zhendian",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/shenxiang.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
