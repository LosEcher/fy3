// Room: /d/huashan/sheshen.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
����һ�μ�խ���յ�ɽ�£�����������ƣ�����Ԩ���޵ס��粻С��
��һʧ�����ȥ��ֻ������ͷ���Ҳ����������и�Сɽ��(dong)��
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xx");
	set("objects", ([ /* sizeof() == 1 */
//		__DIR__"npc/referee" : 1,
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "dong" : "����������ʯ�ڵ�С�����ں����Ĳ�֪�ж��
",
]));
	set("exits", ([ /* sizeof() == 1 */
  "eastdown" : __DIR__"canglong",
]));

	setup();
	replace_program(ROOM);
}
