// Room: /u/swordman/yangzhou/jiedao2.c

inherit ROOM;

void create()
{
	set("short", "���̴���");
	set("long", @LONG
�����ں��ߵĳ����ϣ���ˮ�α̣���������һ�ң��岽һ����
�����У������Һ죬�������˽���������¾�����������ʹ��
�·�������������԰֮�С����������������꣬������ɽׯ���š�
�̰���һСͤ��������С��
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"jiedao1",
  "northwest" : __DIR__"jiedao3",
  "east" : __DIR__"xiaoting",
]));
	set("outdoors", "/u/swordman");
	set("light_up", 1);

	setup();
	replace_program(ROOM);
}
