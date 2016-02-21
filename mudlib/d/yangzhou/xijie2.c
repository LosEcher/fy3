// Room: /u/swordman/yangzhou/xijie2.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
���������ݳ�����Ĵ���ϣ��ؽֵ����������ֳ̼�Ⱥ������
���ﳵ���������������У�ҹ�����ǹ���£��ƻ�ͨ���������ǳ���
����Ҫ����ҵ���Ļ����ֽ֣����С�����ʮ������·�������ơ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"jiedao",
  "south" : __DIR__"ycsz",
  "east" : __DIR__"xijie1",
  "west" : __DIR__"ximen",
]));
	set("outdoors", "/u/swordman");
	set("light_up", 1);

	setup();
	replace_program(ROOM);
}
