// Room: /d/quanzhou/tingtang.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�в�˾�Ĵ���װ�εø����û�,���е�̴ľ���Ӷ��ɻƽ����,��ʱ
������������һ����ϯ,�����������ſ��ϯ�ϴ�Դ��,���и�������
�Ÿ��ƺ�,�Ѿ��ɵ������ӵ���.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"sibosi",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/zhenghe.c" : 1,
  __DIR__"obj/table.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
