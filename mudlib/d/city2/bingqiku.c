
#include <room.h>
inherit ROOM;

void create()
{
	set("short", "����������");
	set("long", @LONG
�����Ǳ����⣬�������������������ۻ����ҡ��������������𹿰���
�󵶡��������ڰ����̵����̽����̹�����ɫ�����ı���Ӧ�о��У���һ
ʱ��֪����ʲô�á�
LONG );

	set("exits", ([
		"north" : __DIR__"bingyin1",
		"southwest" :  __DIR__"aobai12",
	]));
	set("objects", ([
"/obj/weapon/sword":1,
"/obj/weapon/whip":1,
"/d/obj/weapon/sword/duanjian":1,
"/obj/weapon/blade":2,
	]));

//	set("no_clean_up", 0);
	create_door("north", "����", "south", DOOR_CLOSED);
	setup();
	replace_program(ROOM);
}
