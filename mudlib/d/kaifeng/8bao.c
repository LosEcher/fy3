// Room: /d/kaifeng/8bao.c

inherit ROOM;

void create()
{
	set("short", "�˱�������");
	set("long", @LONG
�����������ڴ��۵���˵ҪС�ö࣬��ȴ�Եø��������ޱȣ���
������������������̵ģ������ǽ���϶��ο��˷𾭹��£����е�
���շ����ûƽ���䣬��ʯ�������װ�Σ��ư˱�����
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/jiansi.c" : 1,
  __DIR__"npc/obj/milexiang.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"houyuan",
  "northdown" : __DIR__"gongmen",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
