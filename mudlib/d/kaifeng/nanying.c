// Room: /d/kaifeng/nanying.c

inherit ROOM;

void create()
{
	set("short", "��ӯ��");
	set("long", @LONG
��ӯ���ǿ���ǵ����ţ����ڿ��⸮�������з������⾳�ں���ƽ
�������ǲ�Զ��������̨��
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/guanbing.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"jiedao2",
  "south" : __DIR__"dadao",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
