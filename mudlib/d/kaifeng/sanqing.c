// Room: /d/kaifeng/sanqing.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
����������������񣬲������⸮�ڵľ����ൽ�������ȥ��
�㻹Ը�ˣ��������𲢲���������Ҳ��ͷ���棬������ᡣ����ȥ����
�߸ߵĸ�¥��������ʸ�
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/obj/sanqingxiang.c" : 1,
  __DIR__"npc/xianghuo.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"yanqing",
  "west" : __DIR__"yuhuang",
]));

	setup();
	replace_program(ROOM);
}
