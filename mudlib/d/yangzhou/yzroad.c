// Room: /u/swordman/yangzhou/yzroad.c

inherit ROOM;

void create()
{
	set("short", "���ݴ��");
	set("long", @LONG
������һ����ʯ����ϣ����������ǳ���æ����ʱ������������
�ҴҶ��������������һЩС��̯���ƺ���һ�����С�����ͨ������
�ǡ����ϱ���һ����������������ͨ�����ݸ����ϱ���ȥ�����·��
LONG
	);
	set("light_up", 1);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "southeast" : __DIR__"zzroad",
  "north" : __DIR__"nanmen",
  "south" : __DIR__"jlroad",
]));
	set("outdoors", "/u/swordman");

	setup();
	replace_program(ROOM);
}
