// Room: /u/swordman/yangzhou/jiaowai.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�������ޱߵĻ�Ұ�أ���������Ӱ��Ҳ���������������ǵ�����һ
�����硣һ������įӿ����ͷ���㲻�ɵļӿ��˲���������ԶԶ��ȥ
��һ���ųǡ�
LONG
	);
	set("no_clean_up", 0);
	set("light_up", 1);
	set("outdoors", "/u/swordman");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"to_jinling",
  "west" : __DIR__"dongmen",
]));

	setup();
	replace_program(ROOM);
}
