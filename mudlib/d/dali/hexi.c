// Room: /d/dali/hexi.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
���������������ϣ�ס���ǰ�޼�������Բ�����޼����̨�ģ���
����˸����غ�������⣬��Ҫ�Բ���Ϊ�����ٺ���������������
�߲�Զ�����洬�����С��ͷ���ϱ�ɽ���в���Ұ�ޣ����Բ�������
����ǰȥ���ԡ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"zhulin2",
  "north" : __DIR__"feilihusouth",
  "west" : __DIR__"yujia",
  "northwest" : __DIR__"feilihueast",
]));
	set("outdoors", "dali");
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/taiyizuzhang.c" : 1,
  __DIR__"npc/tshangfan" : 1,
]));

	setup();
	replace_program(ROOM);
}
