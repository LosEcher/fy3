// Room: /d/kaifeng/daoxiang.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
����������������ʷ�ˡ����ⶰ¥����ںڵ���������ܿ�������
���������ʳ�ͻ���ͦ�ࡣʮ���������������ˡ�¥�ϵ�Ȼ��������
������Ҫ��һ����ݵ�λ���˲����ϡ�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"daoxiang2",
  "west" : __DIR__"road2",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  "/d/yangzhou/npc/xiaoer.c" : 1,
  __DIR__"npc/shike.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
