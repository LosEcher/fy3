// Room: /u/swordman/yangzhou/zzroad.c

inherit ROOM;

void create()
{
	set("short", "���ݴ��");
	set("long", @LONG
������ͨ�����ݸ���һ���������������бȽ�Զ�������е�
�˳�û�����ڴ����������һ˿ɱ��,ԶԶ����,���˲���������
LONG
	);
	set("light_up", 1);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"yzroad",
  "southeast" : __DIR__"zzroad1",
]));
	set("outdoors", "/u/swordman");

	setup();
	replace_program(ROOM);
}
