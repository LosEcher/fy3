// Room: /d/kaifeng/tianwang.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
����������Ĵ��������շ������߾��ڷ�̳֮�ϣ������к�ɫդ
�����м��ͨ��������ÿ���������ǰ����һ�����ţ���������Ů
��Ĥ�ݣ���������˳��
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/hufa.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"qianyuan",
  "north" : __DIR__"zhongyuan",
]));

	setup();
	replace_program(ROOM);
}
