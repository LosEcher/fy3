// Room: /d/mingjiao/hsqtan6.c

inherit ROOM;

void create()
{
	set("short", "��̶");
	set("long", @LONG
�����ˮֻ���������վ��ˮ�У��Ըо������
�������𣬾��ò�ɢ��
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"tan",
  "west" : __DIR__"hsqtan5",
]));

	setup();
	replace_program(ROOM);
}
