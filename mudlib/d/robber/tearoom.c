// Room: /d/robber/tearoom.c

inherit ROOM;

void create()
{
	set("short", "���");
	set("long", @LONG
����ë��һ���Ͳ�������һ��С����ſڵİ׵ײ������ϴ��һ
�����֣���Զ���ܿ��������Ŵ�ľ��ʣ��������ӣ���ʵ��¶����Ȼ��
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"road5",
]));
set("outdoors","/d/jiangnan");
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/laohan.c" : 1,
  __DIR__"npc/obj/pot.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
