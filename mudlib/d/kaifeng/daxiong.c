// Room: /d/kaifeng/daxiong.c

inherit ROOM;

void create()
{
	set("short", "���۱���");
	set("long", @LONG
�����ż�ʯͷ̨�ף�������Ƿ��������������ͺ����⡣�ߴ��
���񼸺��������ݶ���������Ȼ�������������ŵĵط����Ź���������
��ʱ�ʵĹϹ����������ߵĴ�������˻��ߡ�������ʮ���޺���
LONG
	);
set("valid_startroom",1);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/rulaixiang.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"zhongyuan",
  "north" : __DIR__"houyuan",
]));

	setup();
	replace_program(ROOM);
}
