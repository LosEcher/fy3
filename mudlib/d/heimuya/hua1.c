// Room: /d/heimuya/hua1.c

inherit ROOM;

void create()
{
	set("short", "��԰");
	set("long", @LONG
����һ�������µ�С��԰��԰�У���÷�������ɴ�أ���
�õ��ľ߽��ģ�����ȥ��һƬ��ݵء�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/suzhou/npc/huajiang.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"grass2",
]));

	setup();
	replace_program(ROOM);
}
