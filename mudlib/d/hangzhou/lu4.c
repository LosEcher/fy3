// Room: /d/hangzhou/lu4.c

inherit ROOM;

void create()
{
	set("short", "ɽ��");
	set("long", @LONG
��᫵�ɽ����ɽ��������,ʱ��Ұ�޵ĺ�д�ɽ�д���.����һ����
�ھ�û���߶�,����Ȼ�ؼӿ�Ų�.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "northdown" : __DIR__"lu3",
  "southdown" : "/d/jindezheng/jindezhen",
]));

	setup();
	replace_program(ROOM);
}
