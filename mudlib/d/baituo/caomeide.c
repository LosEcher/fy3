// Room: /d/baituo/caomeide.c

inherit ROOM;

void create()
{
	set("short", "��ݮ��");
	set("long", @LONG
������һ���ݮ�أ��ʺ�Ĳ�ݮɢ�����̲��У����˸е�������⡣
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "baituo");
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/shanming.c" : 1,
  __DIR__"obj/caomei" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "northeast" : __DIR__"shulin1",
]));

	setup();
	replace_program(ROOM);
}
